#include <stdio.h> 
int main () {
	int num;
	int i;
	int count1 = 0, count2 = 0;
	for ( i =1 ; i<=10 ; i++) {
		printf("Enter a number: ");
		scanf("%d", &num);
		if (num % 2 == 0) {
		count1++;
		}
		else {
			count2++;
		}
	}
	printf("number of even number: %d\n", count1);
	printf("Number of odd number: %d", count2);
	return 0;
}
