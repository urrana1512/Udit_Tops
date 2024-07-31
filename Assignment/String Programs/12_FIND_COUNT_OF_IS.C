// PROGRAM : 12 COUNT IS WORD IN STRING  (START)

#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0, p, freq = 0, i, s, space;
    char a[100];

    printf("Find the number of times the word 'is' in any combination appears \n");

    printf("\nInput the string : ");
    gets(a);

    count = strlen(a);

    for (p = 0; p <= count - 2; p++)
    {
        i = (a[p + 1] == 'i' || a[p + 1] == 'I');
        s = (a[p + 2] == 's' || a[p + 2] == 'S');
        space = (a[p] == '\0 ' || a[p] == '\0');

        if ((i && s && space && space) == 1)
            freq++;
    }

    printf("The frequency of the word is : %d\n\n", freq);
}

// PROGRAM : 12 COUNT IS WORD IN STRING  (END)