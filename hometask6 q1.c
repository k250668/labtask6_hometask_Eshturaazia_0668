#include <stdio.h> 
int main() {
	int num;
	int temp = 0;
	int reverse = 0;
	int remainder = 0;
    
	printf("Plse enter a number to check if its palindrome: ");
	scanf("%d", &num);
	temp = num;
	while (num> 0 ) {
		remainder = num%10;
		reverse = remainder + (reverse * 10);
		num=num/10;
	}
 
	if(reverse == temp) {
		printf("Number is palindrome!\n");
		printf("%d = %d", temp, reverse);
	}
	else {
		printf("Not palindrome");
	}
	return 0;
}
