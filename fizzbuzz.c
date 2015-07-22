#include <stdio.h>

int main()
{
    for(int i = 1; i <= 100; i++)
        (((i % 3 || !printf("Fizz")) & (i % 5 || !printf("Buzz"))) && printf("%d", i)) & printf("\n");
}
