/*
 *Author:Leo
 *ID:1830026048
 *Task1
 */
#include<stdio.h>
long int factR(int n);
int main() {
	int number;
	printf("Please input the positive number: ");
	scanf("%d", &number);
	printf("The recursive number of this number is %d ", factR(number));
}

long int factR(int n) {
	if (n == 1)
		return 1;
	else
		return n * factR(n - 1);
}

