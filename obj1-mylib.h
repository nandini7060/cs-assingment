#include<stdio.h>
#include<math.h>
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
int reverse(int num) {
    int r = 0;
    while (num > 0) {
        r = r * 10 + (num % 10);
        num =num/10;
    }
    return r;
}



int isAdams(int num) {
    int sq = num * num;
    int revNum = reverse(num);
    int sqRev = revNum * revNum;
    int revSq = reverse(sq);

    return (sqRev == revSq);
}


int isPrime(int num) {
    if (num < 2)
        return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}


int isPalindrome(int num) {
    return (num == reverse(num));
}


int isPrimePalindrome(int num) {
    return (isPrime(num) && isPalindrome(num));
}

