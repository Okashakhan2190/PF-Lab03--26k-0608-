#include <stdio.h>
int main(){
   char name[50];
    puts("Type one character:");
    int ch = getchar();
    puts("You typed:");
    putchar(ch);
    getchar(); 
    puts("\nType your name:");
    fgets(name, sizeof(name), stdin);
    puts("You wrote:");
    puts(name);
    getchar();
    return 0;
}