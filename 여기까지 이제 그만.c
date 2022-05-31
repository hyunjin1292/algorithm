#include<stdio.h>
void main() {
	int a, sum = 0;
	scanf("%d", &a);
	for (int i = 1; a > sum; i++) {
		sum += i;
	}
	printf("%d", sum);
}