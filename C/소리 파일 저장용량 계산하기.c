#include<stdio.h>
void main() {
	long long int h, b, c, s;
	double sum;
	scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
	sum = h * b * c * s;
	printf("%.1lf MB", sum / (8 * 1024 * 1024));
}