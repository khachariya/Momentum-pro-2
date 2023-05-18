#include<stdio.h>

main()
{
	char day;
    printf("M for Monday.\n");
    printf("T for Tuesday.\n");
    printf("W for wensday.\n");
	printf("t for thursday.\n");
    printf("F for Friday.\n");
	printf("S for Saturday.\n");
    printf("s for sunday.\n");
    scanf("%c",&day);
    
	switch(day)
    {
    	case 'M':
    		    printf("Monday");
    		    break;
    	case 'T':
		         printf("Tuesday");
				 break;
		case 'W':
		         printf("Wensday");
		         break;
		case 't':
			     printf("Thursday");
			     break;
		case 'F':
		         printf("Friday");
				 break;
		case 'S':
		         printf("Saturday");
				 break;
		case 's':
		         printf("sunday");
		default:
		        printf("enter value");

			     
		         		 		 	    
	}
    
}
