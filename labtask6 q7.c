#include <stdio.h>
int main(){
 int n1 = 1;
int n2 = 1;
int sum;
int row;
int i;
int j ;
int num = 1;
printf("Enter a number: ");
scanf("%d", &row);
for ( i = 1;i<=row; i++) {
	if ( i ==1) {
		sum = n1;
	}
	else if( i == 2) {
		sum = n2;}
	else {
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
	}
	for ( j = 1 ; j<=sum; j++) {
		printf("%d ", num);
		num++;
	}
	printf("\n");
}

return 0;
}

