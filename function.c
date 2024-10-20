#include<stdio.h>

// void great(){
//     printf("Hello, World!\n");

// }

int addNumbers (int a, int b){
    return a + b;
}

int main(){
    int result;
    result = addNumbers(5, 10);

    printf("The sum is: %d\n", result);
    return 0;
}