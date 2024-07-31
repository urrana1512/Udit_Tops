// PROGRAM 9 : FIND MAXIMUM CHARACTER IN STRING - (START) --------------------->

#include <stdio.h>

#define no 256
int main()
{
    char a[200];
    int c[no], i = 0, max, ascii;

    printf("Find maximum character in a string :\n");
    printf("\n");
    printf("Input the string : ");
    gets(a);

    for (i = 0; i < no; i++)
    {
        c[i] = 0;
    }

    i = 0;
    while (a[i] != '\0')
    {
        ascii = (int)a[i];
        c[ascii] += 1;
        i++;
    }

    max = 0;
    for (i = 0; i < no; i++)
    {
        if (i != 32)
        {
            if (c[i] > c[max])
            {
                max = i;
            }
        }
    }

    printf("The Highest frequency of character '%c' appears number of times : %d \n\n", max, c[max]);
}

// PROGRAM 9 : FIND MAXIMUM CHARACTER IN STRING - (END) --------------------->