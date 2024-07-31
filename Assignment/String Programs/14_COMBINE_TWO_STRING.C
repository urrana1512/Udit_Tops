// PROGRAM 14 : COMBINE TWO STRING MANUALLY - (START) --------------------->

#include<stdio.h>
#include<string.h>
// Main Method
void main(){
    // Initialize
    char a[100], b[100], c[100];
    int i,j;

    // get value from user
    printf("Enter the String : ");
    gets(a);
    printf("Enter the String : ");
    gets(b);

    // for loop i
    for(i=0 ; a[i]!='\0' ; i++){
     	c[i] = a[i];
	}
    // for loop j
    for(j=0 ; b[j]!='\0' ; j++){
     	c[i] = b[j];
     	i++;
	}
    c[i]='\0';
     
    // output
    printf("Combine String is : %s", c);
}
// PROGRAM 14 : COMBINE TWO STRING MANUALLY - (END) --------------------->