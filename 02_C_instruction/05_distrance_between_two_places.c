#include<stdio.h>
#include<math.h>
int main()
{
    float L1,L2,G1,G2,D;
    const float pi=3.141592;
    printf("Give the Latitude and longitude of first place : \n ");
    scanf("%f %f",&L1,&L2);
    printf("Give the Latitude and longitude of second place : \n");
    scanf("%f %f",&G1,&G2);
    L1=L1*(pi/180);
    G1=G1*(pi/180);
    L2=L2*(pi/180);
    G2=G2*(pi/180);
    D=3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
    printf("The distance between two places %f",D);
    return 0;

}