#include<stdio.h>
int main()
{
    int m=21,user,com;
    while (1)//this mean until the value is true 
    {
        printf("\n\n Number of matchstick left = %d\n",m);//printing number of matchstick left
        printf("\nPick matchstick out of 1 to 4 : ");//getting the input
        scanf("%d",&user);

        if(user>4||user<1)//checking if the input is between 1 to 4 if not loop will repeat again
            continue;

        m=m-user;//subtracting number of matchstick user chose from total remaing
        printf("\nNo of matchstick left = %d",m);
        com=5-user; /* Logic is here we are divding the choices(of user and computer) in number of 2 and sum of the number of 
        matchstick choose is equal to 5
        i.e if user choose 1 computer will choose 4
            if user choose 3 computer will choose 2
            like this total 4 rounds  would take place and total number of matchstick picked up will be 20 and the last matchstick
            will at last will be chosen by user and the computer will win ultimately*/

        printf("\n\nOut of which computer picked %d\n",com);
        m=m-com;//subtracting the computer chosed matchstick from total remaining

        if(m==1)
        {
            printf("\n no of matchstick left %d\n",m);//Declaring that user losed
            printf("\n you lost the game\n");
            break;
        }
    }
    
}