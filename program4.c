#include<stdio.h>
int main(){
	int m;
	printf("Enter the month number:");
	scanf("%d",&m);
	
	switch(m){
		
	case 1 : 
	           printf("31 Days");
	           break;
	 
    case 2 : 
	           printf("28/29 days based on leap year");
	           break;
          
	case 3 : 
	           printf("31 Days");
	           break;

     case 4 : 
	           printf("30 Days");
	           break;

   case 5 : 
	           printf("31 Days");
	           break;

   case 6 : 
	           printf("30 Days");
	           break;

   case 7: 
	           printf("31 Days");
	           break;

   case 8 : 
	           printf("31 Days");
	           break;


   case 9 : 
	           printf("30 Days");
	           break;

    case 10 : 
	           printf("31 Days");
	           break;

     case 11 : 
	           printf("30 Days");
	           break;

    case 12 : 
	           printf("31 Days");
	           break;

	default :
		      printf("Wrong choice");
	
	}
	return 0;
}
