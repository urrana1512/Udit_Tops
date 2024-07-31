// PROGRAM 16 : SUM OF NATURAL NUMBERS USING WHILE LOOP - (START) --------------------->
#include<stdio.h>
void main(){
    int i=1, sum=0, n;
    
    printf("Enter integer : "); 
    scanf("%d", &n);
    
		while(i <= n){  
        	sum = sum + i;	
            i++;
		}
		printf("Sum = %d", sum);
}
// PROGRAM 16 : SUM OF NATURAL NUMBERS USING WHILE LOOP - (END) --------------------->