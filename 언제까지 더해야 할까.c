#include<stdio.h>
void main() {
	int a, sum = 0;
	scanf("%d", &a);
	for (int i = 1; sum < a; i++) {
		sum += i;
		if (a <= sum) {
			printf("%d", i);
		}
	}
}