#include<stdio.h>

int main(int argc, char** argv)
{
	int n = 0;
	int k = 0;
	scanf_s("%d %d", &n, &k);
	printf("%d", k / n, k % n, (n - k % n) % n);
	return 0;
}