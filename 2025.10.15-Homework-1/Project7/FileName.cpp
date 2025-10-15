#include<stdio.h>

int main(int argc, char** argv)
{
	int n = 0;
	int k = 0;
	scanf_s("%d %d", &n, &k);
	printf("%d", (k % n) * (n % k) + 1);
	return 0;
}