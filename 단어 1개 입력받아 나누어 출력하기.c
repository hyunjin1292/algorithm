#include<stdio.h>
void main() {
	char data[30];
	scanf("%s", &data);
	for (int i = 0; data[i] != '\0'; i++) {
		printf("\'%c\'\n", data[i]);
	}
}