#include <stdio.h>
int main(){
    system("gcc -c *.c -o a.o ");
    system("gcc -o a a.o ");
    system("ls");
}
