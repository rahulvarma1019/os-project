#include<stdio.h>
#include<string.h>
struct person_Struct
{
    char person_name[50];
    int arrival_time,mini_querytime,quantum_time,completion_time,remaining;
};temp_Struct,temp_Struct2;
int total_faculty,total_student;
int totalfaculty();
int totalstudent();

void fun()
{
    int count,time_doop,no_of_process;
    int check[20];
    struct person_Struct faculty_Process[50],faculty_Process2[50];
    for(count = 0; count < no_of_process; count++) {
        printf("Enter the details\n of Person [%d]", count+1);
        puts("");
        printf("Your Name : ");
        scanf("%s", faculty_Process[count].person_name);
        printf("Arrival Time : ");
        scanf("%d", &faculty_Process[count].arrival_time);
        printf("Mini req Time : ");
        scanf("%d", &faculty_Process[count].mini_querytime);
        puts("");
        }

        //sorting the persons
        for(count = 0; count < no_of_process; count++) {
        for(int x = count +1; x < no_of_process; x++){
            if(faculty_Process[count].arrival_time > faculty_Process[x].arrival_time) {
                temp_Struct = faculty_Process[count];
                faculty_Process[count] = faculty_Process[x];
                faculty_Process[x] = temp_Struct;
            }
        }
    }

    printf("SORTED ORDER\n");
    for(count=0;count<no_of_process;count++)
        printf("%s", faculty_Process[count].person_name);
        void fun2()
        {


        }
        void fun2();

}
int main()
{
    int choice;total_faculty,total_student;
    puts("Please choose a respective no ");
    puts("1. FACULTY queue.");
    puts("2. STUDENT queue.");
    printf("> ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1 :
                void totalfaculty();
                void fun();
                break;

        case 2 :
                void totalstudent();
                void fun();
                break;

        default :
                printf("Please selcet the correct option by running the program again.");
    }


}
