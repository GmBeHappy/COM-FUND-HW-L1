#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num,i=2,j,isPrime,x;
	scanf("%d", &num);
    x = num;
    while (i <= num)
    {
        if (x % i == 0)
        {
            isPrime = 1;
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime == 1)
            {
                printf("%d, ", i);
                x = x / i;
            }
        }
        else{
            i++;
        }
    }
	return 0;
}