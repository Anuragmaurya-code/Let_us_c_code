#include<stdio.h>
int main()
{
    int date,mon;
    printf("Enter the date of your birth and month of you birth ");
    scanf("%d %d",&date,&mon);
    if((mon==12 && date >= 22) || (mon==1 && date <= 19) )
        printf("Your zodiac sign is Capricorn");
    else if((mon==1 && date >= 20) || (mon==2 && date <= 17) )
        printf("Your zodiac sign is Aquarius");
    else if((mon==2 && date >= 18) || (mon==3 && date <= 19) )
        printf("Your zodiac sign is Pisces");
    else if((mon==3 && date >= 20) || (mon==4 && date <= 19) )
        printf("Your zodiac sign is Aries");
    else if((mon==4 && date >= 20) || (mon==5 && date <= 20) )
        printf("Your zodiac sign is Taurus");
    else if((mon==5 && date >= 21) || (mon==6 && date <= 20) )
        printf("Your zodiac sign is Gemini");
    else if((mon==6 && date >= 21) || (mon==7 && date <= 22) )
        printf("Your zodiac sign is Cancer");
    else if((mon==7 && date >= 23) || (mon==8 && date <= 22) )
        printf("Your zodiac sign is Leo");
    else if((mon==8 && date >= 23) || (mon==9 && date <= 22) )
        printf("Your zodiac sign is Virgo");
    else if((mon==10 && date >= 23) || (mon==11 && date <= 21) )
        printf("Your zodiac sign is Scorpio");
    else if((mon==11 && date >= 23) || (mon==12 && date <= 21) )
        printf("Your zodiac sign is aquarius");
    return 0;
}