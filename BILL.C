/*To calculate bill*/
/*Author Shreya Date:10/2/2022*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
  int num;
  float bill;

   printf("Enter the units");

   scanf("%d",&num);

   if (num<=200)

   {

	 bill=num*0.50;

	 printf("Your bill is:%f",&bill);

   }

   else if (num>200 && num<=400)

   {
	bill=num*0.60;

	printf("Your bill is:%f",&bill);

   }

   else if (num>400 && num<=600)

   {
	bill=num*0.70;

	printf("Your bill is:%f",&bill);

   }

   else

   {
	bill=num* 0.80;

	printf("Your bill is:%f",&bill);

   }

}

