#include<stdio.h>

// void greetUser(char name[]){
//     printf("Hello, %s! Welcome to function parameters. \n");
// }

// int main(){

//     greetUser("Alice");
//     return 0;
// }

int sum(int a, int b){
    return a + b;
}
int main(){
    int result;

    result = sum(6,9);

    printf("The sum is : %d\n", result);
    return 0;
}