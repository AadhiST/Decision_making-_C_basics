#include <stdio.h>
void main()
{
  int no1,no2,no3;
  printf("Enter three numbers: ");
  scanf("%d %d %d",&no1,&no2,&no3);
  if(no1>no2)
  {
    if(no1>no3)
      printf("%d is the largest number",no1);
  }
  else
  {
    if(no2>no3)
    {
        printf("%d is the largest number",no2);
    }
    else
      printf("%d is the largest number",no3);
  }

}
