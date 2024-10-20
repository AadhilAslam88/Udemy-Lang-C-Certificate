#include<stdio.h>

// void greetUser(char name[]);

// int main(){

//     greetUser("Bob");
//     return 0; 
// }

// void greetUser(char name[]){
//     printf("Welcome to function declaration\n");
// }

int addNumbers(int a, int b);

int main(){
    int result;

    result = addNumbers(10,20);
    printf("The sum is: %d\n", result);
    return 0;

}
addNumbers(int a, int b){
    return a + b;
}