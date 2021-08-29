#include <stdio.h>
int main( )
{
int i , j, k, l, sp ;
sp = 20 ;
for ( i = 1, k = 1 ; i < 5 ; i++ )//i for  4 lines vertically
for ( l = 1 ; l <= sp ; l++ )//l to print space before sp
printf ( " " ) ;
sp -= 2 ;
for ( j = 1 ; j <= i ; j++, k++ )// to print value of k after width of space equal to sp value
printf ( " %d ", k ) ;
printf ( "\n" ) ;// to go to next line after k is printed
return 0 ;
}