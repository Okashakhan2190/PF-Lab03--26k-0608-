#include <stdio.h>
int main(){
   double pi=3.14159265358979;
   printf("Two points after decimal:%.2lf\n", pi);
   printf("Four points after decimal:%.4lf\n", pi);
   printf("Six points after decimal:%.6lf\n", pi);
   printf("Ten points after decimal:%.10lf\n", pi);
    getchar();
   return 0;
}