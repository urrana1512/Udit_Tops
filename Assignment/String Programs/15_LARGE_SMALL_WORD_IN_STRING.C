// PROGRAM 15 : FIND A MAX LENGTH WORD & MIN LENGTH WORD IN STRING - (START) --------------------->

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[100], w[20], max[20], min[20], c;
    int i = 0, j = 0, flg = 0; // Initialize variables for iteration and flags

    printf("\nFind the largest and smallest word in a string \n");
    //    printf("*\n");
    printf("\nInput the string : ");
    i = 0;
    while ((c = getchar()) != '\n' && i < sizeof(a) - 1)
    {
        if (isalnum(c) || isspace(c))
        {
            a[i++] = c;
        }
    }
    a[i] = '\0';

    for (i = 0; i < strlen(a); i++)
    {
        while (i < strlen(a) && !isspace(a[i]) && isalnum(a[i]))
        {
            w[j++] = a[i++];
        }
        if (j != 0)
        {
            w[j] = '\0';
            if (!flg)
            {
                flg = !flg;
                strcpy(max, w);
                strcpy(min, w);
            }
            if (strlen(w) > strlen(max))
            {
                strcpy(max, w);
            }
            if (strlen(w) < strlen(min))
            {
                strcpy(min, w);
            }
            j = 0;
        }
    }

    printf("The largest word is : '%s' \n the smallest word is : '%s'", max, min);
}

// PROGRAM 15 : FIND A MAX LENGTH WORD & MIN LENGTH WORD IN STRING - (END) --------------------->