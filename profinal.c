#include<stdio.h>
#include<string.h>
#include<windows.h>
struct person_Struct
{
    char person_name[50];
    int arrival_time,mini_querytime,completion_time,remaining,time_doop;
}temp_Struct,temp_Struct2;
int i1,quantum_time,no_of_persons;
int flag=0;
void fun2();
void fun()
{
    int count,ttq;
    float avgqt;
    int check[20];
    struct person_Struct faculty_P[50],faculty_Process2[50];
    printf("\nEntered the no of candidates:%d",no_of_persons);
    if(no_of_persons==0)
    {
        printf("\nNumber of persons are zero or invalid entry");
        main1();
    }
    void fun2(){
printf("\nPerson name \t\tRemaining Time");
for(int x=0;x<2*no_of_persons+2;x++){
         for(count = 0; count < 2*no_of_persons+2; count++) {
                //printf("\n");
                //critical part or
                if(faculty_P[count].remaining>0){
                    faculty_P[count].remaining=faculty_P[count].remaining-quantum_time;

                    if(faculty_P[count].remaining<0)
                        goto a;
                    printf("\n->%s", faculty_P[count].person_name);
                    printf("\t=\t\t%d",faculty_P[count].remaining);
                    faculty_P[count].time_doop+=quantum_time;
                    if(faculty_P[count].time_doop>faculty_P[count+1].arrival_time)
                        continue;
                    }
                    else if(faculty_P[count].remaining=0)
                    {
                       check[count]+=1;
                       //for total time on query
                       ttq+=faculty_P[count].time_doop;
                       if(check[count]==1){
                        printf("\n->%s", faculty_P[count].person_name);printf("\t=\t\t%d",faculty_P[count].remaining);}
                        else
                            continue;
                    }
                    if(faculty_P[count].remaining<0)
                    {
                        //faculty_P[count].remaining=faculty_P[count].remaining-quantum_time;
                       a: faculty_P[count].remaining=0;
                        check[count]+=1;
                        if(check[count]==1){
                        printf("\n->%s", faculty_P[count].person_name);printf("\t=\t\t%d\n",faculty_P[count].remaining);}
                    }
}
        }
    }
    c1:for(count = 0; count < no_of_persons; count++) {
        printf("\nEnter the details of Person [%d]", count+1);
        printf("\n");
        printf("Name : ");
        scanf("%s", faculty_P[count].person_name);
        t1:printf("\nArrival Time : ");
        scanf("%d", &faculty_P[count].arrival_time);fflush(stdin);
        if(faculty_P[count].arrival_time==0)
        {
            printf("\Given Wrong value,enter again\n");goto t1;
        }
        if(faculty_P[count].arrival_time<0||faculty_P[count].arrival_time>60)
        {
            printf("\nArrival time should lie between 0 and 60 ,enter again\n");goto t1;
        }
        t2:printf("\nMini req Time : ");
        fflush(stdin);
        scanf("%d", &faculty_P[count].mini_querytime);
        fflush(stdin);
        if(faculty_P[count].arrival_time==0)
        {
            printf("\Given Wrong value,enter again\n");goto t2;
        }
        if(faculty_P[count].mini_querytime<0&&faculty_P[count].mini_querytime>quantum_time)
        {
            printf("\nMini req time should lie between 0 and 60 ,\n enter again if doubt not cleared visit tommorrow",quantum_time);goto t2;
        }
        if(flag==1){
        if(faculty_P[count].mini_querytime<0&&faculty_P[count].mini_querytime>quantum_time)
        {
            printf("\nMini req time should lie between 0 and 60 ,\n enter again if doubt not cleared visit tommorrow",quantum_time);goto t2;
        }}
        else
        if(faculty_P[count].mini_querytime<0&&faculty_P[count].mini_querytime>60){goto c3;}
        c3:puts("");
        for(int i=0;i<11;i++)
        {   if(i%2==0)
                printf("-------");
                else
                    printf("---");
                Sleep(150);
        }
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
    printf("\nmini. time for each candidate will be %d since time is to be shared equally among peers of %d people",quantum_time,no_of_persons);
    printf("\nSORTED ORDER:");
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
            printf("\ntotal time spent on queries =%d",ttq);
            avgqt=(ttq*1.0)/(no_of_persons*1.0);
printf("\naverage query time =%.2f\n",avgqt);
ttq=0;
}
void main1()
{
    int choice,total_faculty,total_student,total,c;
    char d;
    printf("\t\t\t\t\tFair handling of queues");
    printf("\n--------------------------------------------------------------------------------------------------------------");
printf("\nNote:Teachers queries will be handled in an hour and Students queries will be handled in a Hour");
printf("\n--------------------------------------------------------------------------------------------------------------");
c2:printf("\nDO you want to enter any fixed amount of time?(y or n)");
scanf("%c",&d);
if(d=='y'||d=='Y'){z:printf("enter the time quantum:");scanf("%d",&quantum_time);fflush(stdin);
if(quantum_time==0)
{printf("\n zero or invalid key entered \ntry again\n");goto z;}d3:printf("\nenter the no of persons for either faculty completely or students completely:");scanf("\n%d",&no_of_persons);fflush(stdin);if(no_of_persons==0){
        printf("\nEntered zero or invalid option");goto d3;}}
    else if(d=='N'||d=='n'){d:printf("\nenter the no of persons for either faculty completely or students completely:");fflush(stdin);fflush(stdout);scanf("\n%d",&no_of_persons);

    quantum_time=(60/no_of_persons);
    flag=1;}
        else
        {fflush(stdin);fflush(stdout);printf("Invalid Option");goto c2;}
    c1:printf("\nPlease choose a respective no ");
    printf("\n1. FACULTY queue.");
    printf("\n2. STUDENT queue.");
    printf("\n3. Exit\n");
    scanf("%d", &c);
    fflush(stdin);
    if(c!=1&&c!=2&&c!=3){
            printf("\nthis is invalid key\nkindly press again");goto c1;}
    choice=c;
    switch(choice)
    {
        case 1 :
                printf("Faculty Entries");
                fun();
                break;
        case 2 :
                printf("Students Entries");
                fun();
                break;
        case 3 :
                exit(0);
        default :
                printf("\nPlease select the correct option by running the program again.");
                goto c1;
    }
    fflush(stdin);fflush(stdout);
   return 0;

    }
    void main(){main1();main1();}
