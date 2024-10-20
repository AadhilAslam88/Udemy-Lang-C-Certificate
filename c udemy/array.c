#include<stdio.h>

// int main() {
//     int n[10];
//     int i, j;

//     for (i = 0; i < 10; i++){
//         n[i] = i + 10;
//     }
//     for (j = 0; j < 10; j++){
//         printf("Element[%d] = %d\n ",j, n[j]);
//     }
//     return 1;
// }

int main(){
    int weeklyTemperature[7] = {25,28,30,26,27,29,31};

    for (int day = 0; day <7; day++) {
        printf("Day %d: %d\n", day, weeklyTemperature[day]);
    }
    return 0;
}