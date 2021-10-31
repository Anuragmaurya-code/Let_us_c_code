#include<stdio.h>
#include<math.h>
int fun(int,int,int,int,int,float *,float *,float *);
int main()
{
    int a1=2,a2=2,a3=1,a4=2,a5=1;
    float sum, ave,sd;
    fun(a1,a2,a3,a4,a5,&sum,&ave,&sd);
    printf("sum = %f\naverage = %f\nsd = %f",sum,ave,sd);

}
int fun(int n1,int n2,int n3,int n4,int n5,float *sum,float *ave,float *sd)
{
    *sum=n1+n2+n3+n4+n5;
    *ave=*sum/5.0;
    *sd=sqrt(pow(n1-*ave,2)+pow(n2-*ave,2)+pow(n3-*ave,2)+pow(n4-*ave,2)+pow(n5-*ave,2));

}
