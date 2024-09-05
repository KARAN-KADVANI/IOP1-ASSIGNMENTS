#include<stdio.h>
int main()
{
    float sec,hours,min;
    printf("enter the time in seconds-->");
    scanf("%d", &sec);
    
    hours=sec/3600;
    min=sec/60;

    printf("hours : %d",hours);
    printf("minutes : %d",min);
    return 0;
}