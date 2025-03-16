#include <stdio.h>

int main(void){
    int height;
    do {
        printf("Please enter the height: ");
        scanf("%d", &height);
    }
    while (height < 0);

    for (int i = 0; i < height; i++) {

        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++) {
            printf("#");
        }
        printf("\n");
    }
}