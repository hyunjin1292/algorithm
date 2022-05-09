#include<stdio.h>
void main() {
	char data[2001];
	fgets(data, 2000, stdin);
	printf("%s", data);
}