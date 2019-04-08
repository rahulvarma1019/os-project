#include<stdio.h>
#include<string.h>
struct person_Struct
{
    char person_name[50];
    int arrival_time,mini_querytime,completion_time,remaining,time_doop;
}temp_Struct,temp_Struct2;
int total_faculty,total_student;
int totalfaculty();
int totalstudent();void fun2();

void fun()
{
    int count,quantum_time,no_of_persons;
    int check[20];
    struct person_Struct faculty_P[50],faculty_Process2[50];
    scanf("%d",&no_of_persons);
    void fun2(){

for(int x=0;x<no_of_persons;x++){
         for(count = 0; count < no_of_persons; count++) {
                printf("\n");
                //verify arrivals:

            b1:    if(faculty_P[count].remaining>0){
                    faculty_P[count].remaining=faculty_P[count].remaining-quantum_time;

                    if(faculty_P[count].remaining<0)
                        goto a;
                    printf("%s", faculty_P[count].person_name);
                    printf("--%d",faculty_P[count].remaining);
                    faculty_P[count].time_doop+=quantum_time;
                    if(faculty_P[count].time_doop<faculty_P[count+1].arrival_time)
                        goto b1;
                    }
                    else if(faculty_P[count].remaining=0)
                    {
                       check[count]+=1;
                       if(check[count]==1)
                        printf("%s", faculty_P[count].person_name);
                        else
                            continue;
                    }
                    else if(faculty_P[count].remaining<0)
                    {
                        //faculty_P[count].remaining=faculty_P[count].remaining-quantum_time;
                       a: faculty_P[count].remaining=0;
                        check[count]+=1;
                        if(check[count]==1){
                        printf("%s", faculty_P[count].person_name);printf("--%d",faculty_P[count].remaining);}
                    }
}
        }
    }
    for(count = 0; count < no_of_persons; count++) {
        printf("Enter the details\n of Person [%d]", count+1);
        puts("");
        printf("Your Name : ");
        scanf("%s", faculty_P[count].person_name);
        printf("Arrival Time : ");
        scanf("%d", &faculty_P[count].arrival_time);
        printf("Mini req Time : ");
        scanf("%d", &faculty_P[count].mini_querytime);
        puts("");
        }

        //sorting the persons
       for(count = 0; count < no_of_persons; count++) {
        for(int x = count +1; x < no_of_persons; x++){
                faculty_P[count].remaining=faculty_P[count].mini_querytime;
            if(faculty_P[count].arrival_time > faculty_P[x].arrival_time) {
                temp_Struct = faculty_P[count];
                faculty_P[count] = faculty_P[x];
                faculty_P[x] = temp_Struct;
            }
        }
    }
    quantum_time=60/no_of_persons;
    printf("SORTED ORDER\n");
    for(count=0;count<no_of_persons;count++)
        printf("%s", faculty_P[count].person_name);

        for(count = 0; count < no_of_persons; count++){
                faculty_P[count].remaining=faculty_P[count].mini_querytime;faculty_P[count].time_doop=0;}

                printf("\nQUEUE");
            fun2();

}

int main()
{
    int choice,total_faculty,total_student,total;
    puts("Please choose a respective no ");
    puts("1. FACULTY queue.");
    puts("2. STUDENT queue.");
    printf("> ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1 :
                //void totalfaculty();
                fun();
                break;

        case 2 :
                //void totalstudent();
                fun();
                break;

        default :
                printf("Please selcet the correct option by running the program again.");
    }

}
