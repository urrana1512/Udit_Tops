// PROGRAM 17 : ODD EVEN USING WHILE LOOP - (START) --------------------->
#include<stdio.h>
void main(){
    int i=0, n;

    while(i < 5){
        printf("Enter Integer : ");
        scanf("%d", &n);

        if(n % 2 == 0){
            printf("%d is Even.\n\n", n);
        }
        else{
            printf("%d is Odd.\n\n", n);
        }

        i++;
    }
}
// PROGRAM 17 : ODD EVEN USING WHILE LOOP - (END) --------------------->