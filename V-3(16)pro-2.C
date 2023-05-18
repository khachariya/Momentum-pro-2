#include<stdio.h>


main()
{

  int a,b,c,d;
  
  printf("enter value A=");
  scanf("%d",&a);
  printf("enter value B=");
  scanf("%d",&b);
  printf("enter value C=");
  scanf("%d",&c);
  printf("enter value D=");
  scanf("%d",&d);

  if(a>b)
  {
      if(a>c)
      {
	if(a>d)
	{
       printf("A is maximum");
	}
      else
      {
	printf("D is maximum");
      }
    }
    else
     {
      printf("C is maximum");
      }
    }
   else
   {
    if(b>c)
   {
     if(b>d)
     {
	  printf("B is maximum");
     }
       else
     {
	printf("D is maximum");
      }
    }
    else
    {
	if(c>d)
	{
	      printf("C is max.");
	}
	else
	{
	     printf("D is max.");
	}
     }
   }
   
}
