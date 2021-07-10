#include<stdio.h>
int main()
{
	int num,a,b,c,d,e;
	printf("Enter a five digit number : ");
	scanf("%d", &num);
	e=num%10;
	d=(num/10)%10;
	c=(num/100)%10;
	b=(num/1000)%10;
	a=(num/10000);
	printf("reverse of entered number is %d%d%d%d%d",e,d,c,b,a);
	return 0;
}