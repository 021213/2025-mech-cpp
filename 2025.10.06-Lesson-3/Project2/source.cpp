#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	scanf_s("%d", &a);
	switch (a % 7)
	{
	case 1: printf("MON"); break;
	case 2: printf("TUE"); break;
	case 3: printf("WED");
	case 4: printf("THU"); break;
	case 5: printf("FRI"); break;
	case 6: printf("SAT"); break;
	default: printf("SUN"); break;
	}
	return 0;
}