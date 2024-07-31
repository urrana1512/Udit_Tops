// PROGRAM 24 : PRINT SERIES - (START) --------------------->
// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n) 

#include<stdio.h>
void main(){
    int n,i;

    printf("Enter Number : ");
    scanf("%d", &n);

    int sum = 1;
    printf("(%d*%d) + ", sum, sum);
    for(i=2 ; i<=n ; i++){
        printf("(%d*%d) + ", i,i);
        sum = sum + (i*i);
    }
    printf(" = %d", sum);
}

// PROGRAM 24 : PRINT SERIES - (END) --------------------->