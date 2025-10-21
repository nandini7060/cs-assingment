#include<stdio.h>
#include<math.h>

#include"mylib.h"
#include"arraylib.h"
int main(){
	
		int choice,num;
		do{
			printf("\n------menu------");
			printf("1.for Armstrong Number");
			printf("2.for Admas Number");
			printf("3.for PrimePalindrome");
			printf("4.Exit");
			scanf("%d",&choice);
			if(choice==4){
				printf("go for arrays\n");
				break;
			}
			printf("enter a number");
			scanf("%d",&num);
			switch(choice){
				case 1:
					if(isArmstrong(num))
					  printf("%d is an Armstrong Number\n",num);
					else
					printf("%d is not an Armstrong Number\n",num);
					break;
				case 2:
					if(isAdams(num))
					  printf("%d is an Adams Number\n",num);
					else
					printf("%d is not an Adams Number\n",num);
						break;
				case 3:
						if(isPrimePalindrome(num))
					  printf("%d is an primepalindrome Number\n",num);
					else
					printf("%d is not an primepalindrome Number\n",num);
						break;
		        default:
		        	printf("Invalid choice!Please select between 1-4.\n");
					
					
					
			}
			
		}
		while(choice!=4);

   		
   int a[] = {3, 1, 4, 1, 5};
   int n = 5;
   displayArray(a, n);
   printf("Max at index %d\n", maxindex(a,n));
   reverseArray(a,n);
  
  
	
}