#include<stdio.h>

int main(int argc, char** argv)
{
    int m = 0;
    int n = 0;
    scanf_s("%d %d", &m, &n);
    printf("%d", 1 + (n - 1) * (m - 1));
    return 0;
}

/* ZOMBIE
* Zero
* One
* Many
* Boundary
* Interface
* Error
* */