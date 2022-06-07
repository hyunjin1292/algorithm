#include<stdio.h>
void main() {
	int a[24] = { 0 };
	int n, i, t;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &t);
		a[t] += 1;
	}
	for (i = 1; i < 24; i++) {
		printf("%d ", a[i]);
	}
}