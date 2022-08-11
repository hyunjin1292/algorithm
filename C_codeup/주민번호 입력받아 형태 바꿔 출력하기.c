#include<stdio.h>
void main() {
	int num1, num2;
	scanf("%d-%d", &num1, &num2);
	printf("%06d%07d", num1, num2);
}