#include<stdio.h>
void main() {
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		if (i % 3 == 0)	continue;
		printf("%d ", i);
	}
}