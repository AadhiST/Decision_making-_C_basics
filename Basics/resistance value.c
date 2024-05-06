#include<stdio.h>
void main()
{
    int ir1,ir2,ir3;
    float result;
    char op;
    printf("enter the resistor values =");
    scanf("%d %d %d",&ir1,&ir2,&ir3);
    printf("\npress S or s for series and P or p for parallel =");
    scanf("%c",&op);
    switch(op)
    {
    case 'S':
    case 's':
        result =ir1+ir2+ir3;
        break;
    case 'P':
    case 'p':
        result =1/ir1+1/ir2+1/ir3;
        break;
    }
    printf("\nThe value of resistor is %f",result);
}
