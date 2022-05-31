#include<stdio.h>
void main() {
	int a, d, n;
	scanf("%d %d %d", &a, &d, &n);
	printf("%d", a + (n - 1) * d);
}