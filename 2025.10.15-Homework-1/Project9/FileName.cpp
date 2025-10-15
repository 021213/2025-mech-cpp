#include<stdio.h>

int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	int n1 = n % 10;
	int n2 = n / 10 % 10;
	int n3 = n / 100 % 10;
	printf("%d", n1 + n2 + n3);
	return 0;
}