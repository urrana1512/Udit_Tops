// PROGRAM 27 : PRINT SERIES - (START) --------------------->
//  27  1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........N

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;

    printf("Enter your number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= (float)i / (i + 1);
        }
        else
        {
            sum += (float)i / (i + 1);
        }
    }

    printf("The sum of the series is: %f\n", sum);
}

// PROGRAM 27 : PRINT SERIES - (END) --------------------->