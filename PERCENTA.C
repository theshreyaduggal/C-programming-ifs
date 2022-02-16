/*To check whether person is pass or fail*/
/*Author Shreya Date:10/2/2022*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
  float num;

  printf("Enter the percentage you got");

  scanf("%f",&num);

  if(num>=60)

  printf("You came first :)");

  if(num<60&&num>=50)

  printf("You came second");

  if(num<50&&num>=35)

  printf("You came third");

  if(num<35)

  printf("You FAILED!!!! :(");

}