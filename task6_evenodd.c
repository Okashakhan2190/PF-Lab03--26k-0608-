#include <stdio.h>
int main(){
   int num;
   printf("Enter a whole number:");
   scanf("%d", &num);
   if (num%2==0)
   {
    printf("The entered number is EVEN.");
   }
   else{
    printf("The entered number is ODD.");
   }
    getchar();
    getchar();
    return 0;
}