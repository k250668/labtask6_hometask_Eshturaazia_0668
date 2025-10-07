#include <stdio.h>
int main() {
	int num;
	int sum;
	int last;
	printf("Enter a number: ");
	scanf("%d", &num);
	while (num > 0) {
		last = num % 10;
		sum = sum + last;
		num = num/10;
	}
	printf("%d", sum);
	return 0;
}
