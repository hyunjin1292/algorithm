#include<stdio.h>
void main() {
	char a = 0;
	while (a != 'q') {
		scanf("%c", &a);
		printf("%c", a);
		if (a == 'q') break;
	}

}