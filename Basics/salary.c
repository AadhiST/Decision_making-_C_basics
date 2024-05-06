#include <stdio.h>
void main()
{
  int basic_salary,conveyance;
  float gross_salary,DA,HRA;
  printf("Enter the basic salary : ");
  scanf("%d",&basic_salary);
  if(basic_salary>=5000)
  {
    DA=1.1*basic_salary;
    HRA=0.2*basic_salary;
    conveyance=500;
    gross_salary=basic_salary+DA+HRA+conveyance;
    printf("GS is %0.6f",gross_salary);
  }
  else if(basic_salary>=3000 && basic_salary<5000)
  {
   DA=1.0*basic_salary;
   HRA=0.15*basic_salary;
   conveyance=400;
   gross_salary=basic_salary+DA+HRA+conveyance;
   printf("GS is %0.6f",gross_salary);
  }
  else if(basic_salary<3000)
  {
     DA=0.9*basic_salary;
     HRA=0.1*basic_salary;
     conveyance=300;
     gross_salary=basic_salary+DA+HRA+conveyance;
     printf("GS is %0.6f",gross_salary);

  }
   else
  {
    printf("Invalid output");
  }

}
