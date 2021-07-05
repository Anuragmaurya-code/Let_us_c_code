/*calculate Ramesh gross salary if his basic salary is given through input
dearness allowance is 40% his base and house rent is 20% of his base */

#include<stdio.h>
int main()
{
    float base,da, hra,gross;

    printf("Enter Ramesh base salary\n");
    scanf("%f",&base);
    da = 40*base/100; /* dearness allowance is 40 percent of base salary */
    hra = 20*base/100; /* house rent is 20 percent of base salary*/
    gross=base+da+hra;  /* gross salary formula*/

    printf("Ramesh gross salary is %f",gross);

    return 0;


}
