#include<stdio.h>
#include<string.h>
int main()
{
    struct j1
    {
        char Holiday_place[4];
        int bonus;
    };
    struct j2
    {
        char nickname[4];//since int is of 4 bytes
        int extra_working_hours;
    };
    union j//as job is either hr or sweeper only one should be allocated memory
    {
        struct j1 hr;
        struct j2 sweeper;

    };
    
    struct employee{
        char name[20];
        int age;
        union j job;//nesting of union in structure
    };

    struct employee p1;
    p1.job.hr.bonus=200;
    strcpy(p1.job.hr.Holiday_place,"fRN");
    printf("%s",p1.job.hr.Holiday_place);

    return 0;
}