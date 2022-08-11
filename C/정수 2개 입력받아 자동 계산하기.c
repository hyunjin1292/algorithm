#include<stdio.h>
void main() {
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld\n", a + b);
	printf("%lld\n", a - b);
	printf("%lld\n", a * b);
	printf("%lld\n", a / b);
	printf("%lld\n", a % b);
	printf("%.2f", (double)a / b);
}