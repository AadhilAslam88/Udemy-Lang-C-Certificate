#include<stdio.h>

enum Color{
    RED,
    GREEN,
    BLUE
};

int main() {
    enum Color chosenColor;

    chosenColor = BLUE;

    switch(chosenColor){

        case RED:
            printf("You chose RED.\n");
            break;
        case GREEN:
            printf("You chose GREEN.\n");
            break;
        case BLUE:
            printf("You chose BLUE.\n");
            break;
        default:
            printf("You chose an invalid color.\n");
    }
    return 0;

}