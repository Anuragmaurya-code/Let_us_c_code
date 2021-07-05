/*The given program is printing the dimension of the paper and then
cut it from the side which has more length and then print it again */
#include<stdio.h>
int main()
{
    int A0h,A0w;
    int A1h,A1w;
    int A2h,A2w;
    int A3h,A3w;
    int A4h,A4w;
    int A5h,A5w;
    int A6h,A6w;
    int A7h,A7w;
    int A8h,A8w;
    A0h=1189;
    A0w=841;
    A1h=A0w;
    A1w=A0h/2;
    printf("A1h : %d \nA1w : %d\n",A1h,A1w);
    A2h=A1w;
    A2w=A1h/2;
    printf("A2h : %d \nA2w : %d\n",A2h,A2w);
    A3h=A2w;
    A3w=A2h/2;
    printf("A3h : %d \nA3w : %d\n",A3h,A3w);
    A4h=A3w;
    A4w=A3h/2;
    printf("A4h : %d \nA4w : %d\n",A4h,A4w);
    A5h=A4w;
    A5w=A4h/2;
    printf("A5h : %d \nA5w : %d\n",A5h,A5w);
    A6h=A5w;
    A6w=A5h/2;
    printf("A6h : %d \nA6w : %d\n",A6h,A6w);
    A7h=A6w;
    A7w=A6h/2;
    printf("A7h : %d \nA7w : %d\n",A7h,A7w);
    A8h=A7w;
    A8w=A7h/2;
    printf("A8h : %d \nA8w : %d\n",A8h,A8w);
    return 0;

}