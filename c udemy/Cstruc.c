#include<stdio.h>

struct person
{
    char name[50];
    int age;
    float height;

};
int main(){
    struct person p1;

    strcpy(p1.name, "Smith");
    p1.age = 25;
    p1.height = 5.75;

    printf("Person Information:\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.2f\n", p1.height);

    return 0;
}
