// PROGRAM 3 : SEPARATE INDIVIDUAL CHARACTER IN REVERSE OREDR FROM A STRING  - (START) --------------------->

#include <stdio.h>
// Main Method
void main()
{

    // Initialize
    char a[10], i;

    // Get Input from User
    printf("Enter a String : ");
    gets(a);

    printf("Separate String in Reverse : ");

    // Using strlen()
    for (i = strlen(a) - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
}
// PROGRAM 3 : SEPARATE INDIVIDUAL CHARACTER IN REVERSE OREDR FROM A STRING  - (START) --------------------->