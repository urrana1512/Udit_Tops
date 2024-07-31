#include<stdio.h>
void main(){
    int n1, n2, ans;
    char operator;

    printf("Enter the 1st number : ");
    scanf("%d", &n1);
    printf("Enter the 1st number : ");
    scanf("%d", &n2);
    printf("Enter the Mathematical Operator : ");
    scanf("%ch", &operator);

    if(operator = '+'){
        ans = n1 + n2;
    }
    else if(operator = '-'){
        ans = n1 - n2;
    }
    else if(operator = '*'){
        ans = n1 * n2;
    }
    else if(operator = '/'){
        ans = n1 / n2;
    }
    else if(operator = '%'){
        ans = n1 % n2;
    }
    else if(operator = '^'){
        ans = n1 ^ n2;
    }

    printf("%d  %c  %d = %d", n1, operator, n2, ans);

}