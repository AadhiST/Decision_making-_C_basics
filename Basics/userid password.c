#include<stdio.h>
void main()
{
    int iPassword=125897,password;
    char cUser='a',user;
    printf("Enter the user ID =");
    scanf("%c",&user);
    printf("\nEnter the password =");
    scanf("%d",&password);
    if(cUser==user && iPassword==password)
        printf("Login Successful");
    else
        printf("Incorrect password....Try Again");
}
