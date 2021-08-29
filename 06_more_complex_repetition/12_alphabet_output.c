#include<stdio.h>
int main()
{
    int i,j,k,l,sp,m,n;                          //i is for 7 lines vertically ,j is for lines A to G ,l iS for lines from F TO A 
    sp=0;                                        //k is to print alphabets  
    for(i=1;i<=7;i++)                            //sp is to know how many times j or k will print 
    {                                            //m and n is to print spaces in between
        k=65;
        if(i==1)
        {
            for(j=1;j<=7;j++)
            {
                printf("%c",k);
                printf(" ");
                k++;
            }
            k-=2;
            for(l=1;l<=6;l++)
            {
                printf("%c",k);
                printf(" ");
                k--;
            }
            printf("\n");
            sp+=1;
        }
        if(i>1)
        {
           for(j=1;j<=7-sp;j++)
            {
                printf("%c",k);
                printf(" ");
                k++;
            }
            k--;
            if(sp==1) 
            {
                n=1;
                for(m=1;m<=n;m++)
                {
                    printf(" ");
                    printf(" ");
                }
                n+=2;
            }
            else
            {
                for(m=1;m<=n;m++)
                {
                    printf(" ");
                    printf(" ");
                }
                n+=2;
            }
            for(l=1;l<=7-sp;l++)
            {
                printf("%c",k);
                printf(" ");
                k--;
            }
            printf("\n");
            sp+=1;

        }
    }

    return 0;
}