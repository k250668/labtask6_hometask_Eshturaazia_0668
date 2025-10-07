#include <stdio.h> 
int main() {
	int n;
	int i;
	printf("which number do you need multiplication table to: ");
	scanf("%d", &n);
	for (i =1; i <= n; i++){
			int j=1;
		while (j<=10) {
			printf("%d * %d = %d\n", j,i,j*i );
			
			j++;
			}
			printf("\n");
	}
	return 0;
}
