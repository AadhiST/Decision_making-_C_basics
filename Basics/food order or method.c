#include <stdio.h>

int main()
{
  int Iquantity,iprice,itotal,ichoice;
  printf("List of items:");
  printf("\nItems\t-Price");
  printf("\n1.Idly\t-10");
  printf("\n2.Dosa\t-30");
  printf("\n3.poori\t-40");
  printf("\n4.Pongal-50");
  printf("\nEnte the choice and qyantity:");
  scanf(" %d %d",&ichoice,&Iquantity);
  switch(ichoice)
    {
      case 1:
      printf("Total amount %d",10*Iquantity);
      break;
      case 2:
      printf("Total amount %d",30*Iquantity);
      break;
      case 3:
      printf("Total ampount %d",40*Iquantity);
      break;
      case 4:
      printf("Total amount %d",50*Iquantity);
      break;
      default:
      printf("\nEnter the correct choice....");
    }



  return 0;
}
