#include<stdio.h>

int main(int argc, char** argv)
{
	long long n = 0;
	scanf_s("%lld", &n);
	printf("%lld25", (n / 10) * (n / 10 + 1));
	return 0;
}