#include <stdio.h>
int main() {
	int n;
	int i;
	int sum = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	for ( i =1 ; i<n ; i++) {
		if( n % i == 0)  
		{
			sum = sum+i;
		}
	}
	if ( sum == n){
		printf("%d ", sum);
		printf("Perfect number!!");
	}
	else {
		printf("Not a perfect number");
	}
	
	return 0;
}
