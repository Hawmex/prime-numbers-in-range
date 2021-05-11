#include "stdio.h"
#include "stdbool.h"

int main()
{
    unsigned int start;
    unsigned int end;

    scanf("%u", &start);
    scanf("%u", &end);

    for (unsigned int number = start < 2 ? 2 : start; number <= end; number++)
    {
        bool isPrime = true;

        for (unsigned int division = 2; division < number; division++)
        {
            if (number % division == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime == true)
            printf("%u\n", number);
    }

    return 0;
}
