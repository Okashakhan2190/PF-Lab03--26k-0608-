#include <stdio.h>
#include <stdbool.h>
int main(){
   int num=23;
   float deci=10.12;
   double loong=12.200003;
   char alphabet='A';
   bool sigma= true;
   printf("the number is:%d and it's size is:%zu.\n", num, sizeof(num));
   printf("The float number is:%.2f and it's size is:%zu.\n", deci, sizeof(deci));
   printf("The double float number is:%lf and it's size is:%zu.\n", loong, sizeof(loong));
   printf("The char is:%c and it's size is:%zu.\n", alphabet, sizeof(alphabet));
   printf("The boolean is:%d and it's size is:%zu.\n", sigma, sizeof(sigma));
   getchar();
   return 0;
}