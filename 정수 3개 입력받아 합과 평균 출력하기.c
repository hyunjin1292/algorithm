#include<stdio.h>
void main() {
	long long int a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld\n", a + b + c);
	printf("%.1f", (double)(a + b + c) / 3);
}