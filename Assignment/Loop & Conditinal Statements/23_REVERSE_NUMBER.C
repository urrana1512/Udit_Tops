// PROGRAM 23 : Reverse Number- (START) --------------------->
#include <stdio.h>
int main()
{
    int num, temp, rem, rev = 0;
    printf("enter a number : ");
    scanf("%d", &num);
    temp = num;

    while (temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    printf("reversed number is = %d", rev);
}
// PROGRAM 23 : Reverse Number- (END) --------------------->