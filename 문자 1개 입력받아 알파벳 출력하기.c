#include<stdio.h>
void main() {
	char x, y = 'a';
	scanf("%c", &x);
	do {
		printf("%c ", y);
		y++;
	} while (x >= y);

}