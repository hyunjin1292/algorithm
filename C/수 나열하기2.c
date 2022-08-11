#include<stdio.h>
#include<math.h>

void main() {
	int a, r, n;
	scanf("%d %d %d", &a, &r, &n);
	printf("%lld", a * (long long int)pow(r, n - 1));
}