#include<stdio.h>
void main()
{
    int iquantity,iprice,itotal,ichoice;
    printf("\nEnter the choice&quantity =");
    scanf("%d\n%d",&ichoice,&iquantity);
    switch(ichoice)
    {
    case 1:
        iprice=10;
        printf("Total amount %d",iquantity*iprice);
        break;
    case 2:
        iprice=30;
        printf("Total amount %d",iquantity*iprice);
        break;
    case 3:
        iprice=40;
        printf("Total amount %d",iquantity*iprice);
        break;
    case 4:
        iprice=50;
        printf("Total amount %d\n",iquantity*iprice);
        break;

    }
}
