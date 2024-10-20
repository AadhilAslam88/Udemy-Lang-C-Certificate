#include<stdio.h>

int main(){

    const int PI = 3.1416;
    const char GREETING = 'H';

    const char width = 5;
    const int length = 3;
    const int area = width * length;

    printf("Value of PI: %d\n", PI);
    printf("Value of GREETING: %c\n", GREETING);
    printf("area %d\n", area);
    return 0;
}