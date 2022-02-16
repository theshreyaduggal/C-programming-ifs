/*To find greatest no. out of 3*/
/*Author Shreya Date:10/2/2022*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
  int a,b,c;

  printf("Enter any three numbers");

  scanf("%d %d %d",&a,&b,&c);


  if (a>b && a>c)

  {

	printf("a is the greatest no.");

  }

  else if (b>a && b>c)

  {
	 printf("b is the greatest no.");

  }

  else if (c>a && c>b)

  {
	 printf("c is the greatest no.");

  }

}