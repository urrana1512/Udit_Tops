// PROGRAM 4 : FACTORIAL USING RECURSION - (START) --------------------->
#include<stdio.h>
fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

void main(){
    int n, result;
    printf("Enter number : ");
    scanf("%d", &n);

    result = fact(n);
    printf("factorial : %d", result);

}
// PROGRAM 4 : FACTORIAL USING RECURSION - (END) --------------------->