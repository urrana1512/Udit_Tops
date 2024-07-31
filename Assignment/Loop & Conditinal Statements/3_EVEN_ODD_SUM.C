// PROGRAM 3 : GET 10 VALUES FRO  USER AND FIND EVEN-ODD AND THEIR SUM - (START) --------------------->
#include<stdio.h>
void main(){
    int i=1,n,ev=0,od=0,evcount=0,odcount=0;

    while(i<=10){
        printf("\nEnter the number : ");
        scanf("%d",&n);

            if(n%2==0){
                printf("%d is even",n);
                ev++;
                evcount = evcount + n;
            }
            else{
                printf("%d is Odd", n);
                od++;
                odcount = odcount + n;
                }
            i++;
			}
			printf("\nnumbers of even are : %d", ev);
			printf("\nnumbers of odd are : %d", od);
			printf("\nSum of even numbers : %d", evcount);
			printf("\nSum of odd numbers : %d", odcount);	
    }
    // PROGRAM 3 : GET 10 VALUES FRO  USER AND FIND EVEN-ODD AND THEIR SUM - (START) --------------------->
