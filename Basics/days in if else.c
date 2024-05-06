//Program to display the corresponding day for the number
#include<stdio.h>
int main()
{
    //input day from the user
    int day;
    printf("Enter a day\n");
    scanf("%d", &day);
    if(day==1)
    {
        printf("It's Sunday\n");
    }
    else if(day==2)
    {
        printf("It's Monday\n");
    }
    else if(day==3)
    {
        printf("It's Tuesday\n");
    }
    else if(day==4)
    {
        printf("It's Wednesday\n");
    }
    else if(day==5)
    {
        printf("It's Thursday\n");
    }
    else if(day==6)
    {
        printf("It's Friday\n");
    }
    else if(day==7)
    {
        printf("It's Saturday\n");
    }
    else
    {
        printf("Days can be within 1 and 7");
    }
return 0;
}
