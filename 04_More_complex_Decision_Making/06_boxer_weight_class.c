#include<stdio.h>
int main()
{
    int wei;
    printf("Enter your wight in pounds ");
    scanf("%d",&wei);
    if(wei<115)
        printf("Boxer Class : Flyweight");
    else if(wei>=115 && wei<=121)
        printf("Boxer Class : Bantamweight");
    else if(wei>=122 && wei<=153)
        printf("Boxer Class : Featherweight");
    else if(wei>=154 && wei<=189)
        printf("Boxer Class : Middleweight");
    else if(wei>=190)
        printf("Boxer Class : Heavyweight");
}