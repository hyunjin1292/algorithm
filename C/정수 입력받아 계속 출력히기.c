#include<stdio.h>
void main() {
	int a, b;
	scanf("%d", &a);
reget:
	scanf("%d", &b);
	printf("%d\n", b);
	if (--a != 0) {
		goto reget;
	}
}