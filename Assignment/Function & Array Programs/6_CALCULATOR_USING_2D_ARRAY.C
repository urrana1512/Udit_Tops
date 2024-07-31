// PROGRAM 6 : CALCULATOR USING 2D ARRAY - (START) --------------------->
#include <stdio.h>

main()
{
    int a[2][2], b[2][2], i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("enter number : ");
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n [%d] [%d] : %d ", i, j, a[i][j]);
        }
    }
    printf("\n**\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("enter number : ");
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n [%d] [%d] : %d ", i, j, b[i][j]);
        }
    }
    printf("\n**\n");
    printf("addition\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n [%d] [%d] : %d ", i, j, a[i][j] + b[i][j]);
        }
    }
    printf("\n**\n");
    printf("subtraction\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n [%d] [%d] : %d ", i, j, a[i][j] - b[i][j]);
        }
    }
    printf("\n**\n");
    printf("multiplication\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n [%d] [%d] : %d ", i, j, a[i][j] * b[i][j]);
        }
    }
    printf("\n**\n");
    printf("division\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n [%d] [%d] : %d ", i, j, a[i][j] / b[i][j]);
        }
    }
}
// PROGRAM 6 : CALCULATOR USING 2D ARRAY - (END) --------------------->