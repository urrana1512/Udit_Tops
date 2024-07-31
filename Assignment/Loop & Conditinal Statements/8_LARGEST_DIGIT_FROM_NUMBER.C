// PROGRAM 8 : FIND LARGEST DIGIT FROM NUMBER - (START) --------------------->
#include<stdio.h>

int main() {

   int num, r, ld = 0;

   printf("Enter a number:");
   scanf("%d", &num);

   while (num > 0) {
       r = num % 10;
       if (ld < r) {
           ld = r;
       }
       num = num / 10;
   }
   printf("Largest digit is:%d", ld);
}
// PROGRAM 8 : FIND LARGEST DIGIT FROM NUMBER - (END) --------------------->