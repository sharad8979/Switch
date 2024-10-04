#include<stdio.h>
int main(){
	int c,l,b,h,r;
	
	
	printf("========Menu======");
	printf("\n1 for Area of Rectangle");
	printf("\n2 for Area of Traingle");
	printf("\n3 for Area of Circle");
	printf("\nEnter your choice from the given menu :");
	scanf("%d",&c);
	
	switch(c){
		
	case 1: 
	         
	         printf("\nEnter length and breadth :");
	         scanf("%d %d",&l,&b);
	        printf("\nArea Of Rectangle : %d",l*b);
			break;
				
	case 2: 
	         printf("\nEnter height and base :");
	         scanf("%d %d",&h,&b);
	        printf("\nArea Of Traingle : %d",(b*h)/2);
			break;
			
	case 3: 
	         printf("\nEnter Radius :");
	         scanf("%d",&r);
	        printf("\nArea Of Circle : %f",2*3.14*r);
			break;
	default :
		      printf("Wrong choice");
	
	}
	return 0;
}
