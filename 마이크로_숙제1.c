#include <stdio.h>

typedef struct student{
    int num;
    char name[20];
    int mic, lin, pro;
    int tot;
    double avg;
    char grade;
}Student;

void input_data(Student *pary);
void calc_data(Student *pary);
void print_data(Student *pary);

int main(){
    Student ary[5];
    input_data(ary);
    calc_data(ary);
    printf("결과값은?\n");
    print_data(ary);
    return 0;
}
void input_data(Student *pary){
	for(int i=0;i<5;i++){
		scanf("%d %s %d %d %d",&(pary+i)->num,(pary+i)->name,&(pary+i)->mic,&(pary+i)->lin,&(pary+i)->pro);
	}
}
void calc_data(Student *pary){
	for(int i = 0;i<5;i++){
		(pary+i)->tot = (pary+i)->mic + (pary+i)->lin + (pary+i)->lin;
        (pary+i)->avg = (pary+i)->tot/3;
        if((pary+i)->avg>=90){
            (pary+i)->grade = 'A';
        }else if((pary+i)->avg>=80){
            (pary+i)->grade = 'B';
        }else if((pary+i)->avg>=70){
            (pary+i)->grade = 'C';
        }else{
            (pary+i)->grade = 'F';
        }
	}
}

void print_data(Student *pary){
	for(int i = 0;i<5;i++){
        printf("%d, %s, %d, %d, %d, %d, %d, %c\n",(pary+i)->num,(pary+i)->name,(pary+i)->mic,
        (pary+i)->lin,(pary+i)->pro,(pary+i)->tot,(int)(pary+i)->avg,(pary+i)->grade);
    }
}
