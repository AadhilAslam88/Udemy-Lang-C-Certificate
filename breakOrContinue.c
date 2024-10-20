#include<stdio.h>

// int main()
// {
//     int i;
//     for(i=0; i < 10; i++){
//         if(i == 4){
//             break;
//         }
//         printf("%d\n", i);
//     }
//     return 0;
// }

// int main()
// {
//     int i;
//     for(i=0; i < 10; i++){
//         if(i == 4){
//             continue;
//         }
//         printf("%d\n", i);
//     }
//     return 0;
// }

int main(){
    for (int count = 1; count<= 10; count++){
        if (count == 5){
            printf("Breaking out at 5!\n");
            break;
        }
        printf("Count: %d\n", count);
    }
}