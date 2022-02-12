#include<stdio.h>
#include<windows.h>
int main()
{
    float kdis,cdis,mdis,idis,fdis;

    printf("Enter distance between cities in km\n");
    scanf("%f",&kdis);
    mdis=kdis*1000;  
    cdis=mdis*100; 
    idis=kdis*39370.1; //formula for inches to kilometer
    fdis=kdis*3280.84;  //formula for feet to kilometer
    
    printf("Distance between city in metrs %f \n",mdis);
    printf("Distance between city in centimetrs %f \n",cdis);
    printf("Distance between city in inches %f \n",idis);
    printf("Distance between city in feet %f \n",fdis);
    return 0;
    

}
