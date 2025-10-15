#include<stdio.h>

int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	int k = 10;
	printf("%d", (n + k - 1) / k);
	return 0;
}