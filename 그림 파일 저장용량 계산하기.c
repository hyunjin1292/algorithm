#include<stdio.h>
void main() {
	long long int w, h, b;
	double sum;
	scanf("%lld %lld %lld", &w, &h, &b);
	sum = w * h * b;
	printf("%.2f MB", sum / (8 * 1024 * 1024));
}