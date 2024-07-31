// PROGRAM 12 : ARMSTRONG NUMBER USING FOR & WHILE LOOP - (START) --------------------->

#include<stdio.h>
void main(){
    int n, remainder, arm = 0, c;

    // get input from user
    printf("Enter number : ");
    scanf("%d", &n);

    c = n;
    // ARMSTRONG : EX. 153 --> 1*1*1 + 5*5*5 + 3*3*3 = 153
    // USING WHILE LOOP
    while(n > 0){
        remainder = n%10;
        arm = (remainder*remainder*remainder) + arm;
        n = n / 10;
    }
    if(c == arm){
        printf("%d is Armstrong number.", c);
    }
    else{
        printf("%d is not Armstrong number.", c);
    }
}

// PROGRAM 12 : ARMSTRONG NUMBER USING FOR & WHILE LOOP - (START) --------------------->