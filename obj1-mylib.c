
#include <stdio.h>
#include<math.h>


// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int origi = num, sum = 0, digit = 0, temp;

    
    temp = num;
    while (temp > 0) {
        digit=digit+1;
        temp = temp/10;
    }

    
    temp = num;
    while (temp > 0) {
    	int pow=1;
        int d = temp % 10;
        for(int i=1;i<=digit;i++){
		
        pow=pow*d;
    }
        sum=sum+pow;
        temp =temp/ 10;
    }

    return (sum == origi);
}

// step to check the no is adams or not-Function to reverse a number
int reverse(int num) {
    int r = 0;
    while (num > 0) {
        r = r * 10 + (num % 10);
        num =num/10;
    }
    return r;
}

// Function to check if a number is an Adam number

int isAdams(int num) {
    int sq = num * num;
    int revNum = reverse(num);
    int sqRev = revNum * revNum;
    int revSq = reverse(sq);

    return (sqRev == revSq);
}

//1 step to check for PrimePalindrome- Function to check if number is prime
int isPrime(int num) {
    if (num < 2)
        return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// 2 step to check for PrimePalindrome -Function to check if a number is palindrome
int isPalindrome(int num) {
    return (num == reverse(num));
}

// combined function to check whether the no is prime and palindrome both....
int isPrimePalindrome(int num) {
    return (isPrime(num) && isPalindrome(num));
}

// main function....
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
				printf("Existing program,Good Bye\n");
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
		return 0;
	}
	
	

   

