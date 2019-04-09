#include<stdio.h>
#include<string.h>
struct person_Struct
{
    char person_name[50];
    int arrival_time,mini_querytime,completion_time,remaining,time_doop;
}temp_Struct,temp_Struct2;
int tft,tst;
void fun2();

void fun()
{
    int count,quantum_time,no_of_persons,ttq;
    int check[20];
    struct person_Struct faculty_P[50],faculty_Process2[50];
    printf("\nEnter the no of candidates:");
    scanf("%d",&no_of_persons);
    if(no_of_persons==0)
    {
        printf("\nNumber of persons are zero or invalid entry");
        main();
    }
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
                    printf("=%d\n",faculty_P[count].remaining);
                    faculty_P[count].time_doop+=quantum_time;
                    if(faculty_P[count].time_doop<faculty_P[count+1].arrival_time)
                        goto b1;
                    }
                    else if(faculty_P[count].remaining=0)
                    {
                       check[count]+=1;
                       //for total time on query
                       ttq+=faculty_P[count].time_doop;
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
                        printf(">%s", faculty_P[count].person_name);printf("=%d\n",faculty_P[count].remaining);}
                    }
}
        }
    }
    for(count = 0; count < no_of_persons; count++) {
        printf("Enter the details\n of Person [%d]", count+1);
        puts("");
        printf("Your Name : ");
        scanf("%s", faculty_P[count].person_name);
        t1:printf("Arrival Time : ");
        scanf("%d", &faculty_P[count].arrival_time);
        if(faculty_P[count].arrival_time<0||faculty_P[count].arrival_time>60)
        {
            printf("\nArrival time should lie between 0 and 120 ,\nenter again");goto t1;
        }
        printf("Mini req Time : ");
        scanf("%d", &faculty_P[count].mini_querytime);
        quantum_time=60/no_of_persons;
        if(faculty_P[count].mini_querytime<0||faculty_P[count].mini_querytime>quantum_time)
        {
            printf("\nArrival time should lie between 0 and %d ,\nenter again if doubt not cleared visit tommorrow",quantum_time);goto t1;
        }
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
    //quantum_time=60/no_of_persons;

    printf("mini. time for each candidate will be %d since time is to be shared equally among peers of %d people",quantum_time,no_of_persons);
    printf("\nSORTED ORDER");
    for(count=0;count<no_of_persons;count++)
        printf("%s", faculty_P[count].person_name);

        for(count = 0; count < no_of_persons; count++){
                faculty_P[count].remaining=faculty_P[count].mini_querytime;faculty_P[count].time_doop=0;}

                printf("\nQUEUE");
            fun2();

        for(count = 0; count < no_of_persons; count++)
        {
            ttq+=faculty_P[count].mini_querytime;
        }
            printf("the total time spent on queries =%d",ttq);

}

int main()
{
    int choice,total_faculty,total_student,total,c;

    c1:printf("\nPlease choose a respective no ");
printf("\n1. FACULTY queue.");
    printf("\n2. STUDENT queue.");
    printf("\n3. Exit\n");
    fflush(stdin);
    scanf("%d", &c);
    if(c!=1&&c!=2&&c!=3){
            printf("\nthis is invalid key\nkindly press again");goto c1;}
    choice=c;
   do{
    switch(choice)
    {
        case 1 :
                //void totalfaculty();
                printf("Faculty Entries");
                fun();
                break;

        case 2 :
                //void totalstudent();
                printf("Students Entries");
                fun();
                break;

        case 3 :

                exit(0);
                break;
        default :
                printf("\nPlease select the correct option by running the program again.");
                goto c1;


    }
   }while(c==1||c==2||c==3);
    }
