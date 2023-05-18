#include<stdio.h>

main()
{
   int u,ed,sc,tb;
   
   printf("enter value unit=");
   scanf("%d",&u);
   
   if(u<=50)
   {
       ed=u*0.50;   	
   }	
   else if(u<=150)
   {
   	   ed=(u-50*0.75+25);
   }
   else if(u<=250)
   {
   	   ed=(u-150)*1.20+100;
   }
   else
   {
   	  ed=(u-250)*105+220;
   }
   
   sc=ed*0.2;
   tb=ed+sc;
   
   printf("Total electric bill=%d",tb);
}
