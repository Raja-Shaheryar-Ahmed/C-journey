#include<stdio.h>
int isPrime(int n);
int isPerfect(int n);
int reverseNumber(int n);
int isPalindrome(int n);
int digitSum(int n);
void report(int n);
int main(){
	int n;
	printf("Enter a positive number: ");
	scanf("%d",&n);
	report(n);
	return 0;
}
int isPrime(int n){
	int i,j;
	int isprime=1;
	if(n<=1){
		isprime=0;
	} else{
		for(i=2;i<=n/2;i++){
		if(n%i==0){
			isprime=0;
			break;
		}
	}
	}
	if(isprime){
		return 1;
	} else{
		return 0;
	}
}
int isPerfect(int n){
	int sumOfDivisors=0;
	int i;
	for(i=1;i<n;i++){
		if(n%i==0){
			sumOfDivisors+=i;
		}
	}
	if(n==sumOfDivisors){
		return 1;
	} else {
		return 0;
	}
}
int reverseNumber(int n){
	int rem,rev=0;
	while(n!=0){
		rem=n%10;
		rev=(rev*10)+rem;
		n/=10;
	}
	return rev;
}
int isPalindrome(int n){
	int reverse;
	reverse=reverseNumber(n);
	if(n==reverse){
		return 1;
	} else{
		return 0;
	}
}
int digitSum(int n){
	int sum=0,rem;
	while(n!=0){
		rem=n%10;
		sum+=rem;
		n/=10;
	}
	return sum;
}
void report(int n){
	int reverse;
	int sum;
	if(isPrime(n)){
		printf("\nPrime: Yes");
	}else{
		printf("\nPrime: No");
	}
	if(isPerfect(n)){
		printf("\nPerfect: yes");
	}else{
		printf("\nPerfect: No");
	}
	reverse=reverseNumber(n);
	printf("\nReverse: %d",reverse);
	if(isPalindrome(n)){
		printf("\nPalindrome: Yes");
	}else{
		printf("\nPalindrome: No");
	}
	sum=digitSum(n);
	printf("\nSum of digits: %d",sum);
	int i;
	printf("\nPrimes from 1 to %d: ",n);
	for(i=1;i<=n;i++){
		if(!isPrime(i)){
			continue;
		}
		printf("%d ",i);
	}
	return;
}










