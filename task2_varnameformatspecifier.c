#include <stdio.h>
int main(){
   int num=10;
   float decimal=11.11;
   char character='A';
   char str[20] = "HELLO";
   double pi=3.1415926535;
   printf("The number is: %d.\nThe float is: %.2f.\nThe character is: %c.\nThe string is: %s.\nThe double float is: %lf.", num, decimal, character, str, pi);
   getchar();
    return 0;
}