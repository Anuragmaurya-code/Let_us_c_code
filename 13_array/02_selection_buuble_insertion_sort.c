#include<stdio.h>
#define MAX 10
void selection(int*);
void bubble();
void insertion();
void swap(int *,int *);
void display(int *);
int main()
{
    int s[]={5,4,9,3,6,34,65,38,94,67},b[]={5,4,9,3,6,34,65,38,94,67},i[]={5,4,9,3,6,34,65,38,94,67};
    printf("Selection Sort\n");
    selection(&s[0]);
    display(&s[0]);
    printf("Bubble Sort\n");
    bubble(&b[0]);
    display(&b[0]);
    printf("Insertion Sort\n");
    bubble(&i[0]);
    display(&i[0]);
    return 0;
}
void display(int *i)
{
    int j;
    for (j=0;j<MAX;j++)
    {
        printf("%d\n",*i);
        i++;
    }
}
void selection(int *s)
{
    int i,j;
    for(i=0;i<MAX-1;i++)
    {
        for(j=i+1;j<MAX;j++)
        {
            if(s[i]>s[j])
                swap(&s[i],&s[j]);
        }
    }
}
void swap(int *i,int *j)
{
    int t=*i;
    *i=*j;
    *j=t;
}
void bubble(int *b)
{
    int i,j;
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX-1-i;j++)
        {
            if(b[j]>b[j+1])
                swap(&b[j],&b[j+1]);
        }
    }
}
void insertion(int *i)
{
    int j,t,k;
    for(j=1;j<=MAX;j++)
    {
        if(i[0]>i[j])
        {
            t=i[j];
            for(k=j;k>0;k--)
            {
                swap(&i[k],&i[k-1]);
            }
            i[0]=t;
        }
    }

}