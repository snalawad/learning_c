#include <stdio.h>

void print_spc(int spc);
void print_hash(int hash);

int main(void){
    int height;
    do {
        printf("Please enter the height: ");
        scanf("%d", &height);
    }
    while (height < 0);

    for (int i = 0; i < height; i++) {
        // Print left part of the pyramid with right indent
        print_spc(height - i); print_hash(i);
        printf(" ");

        // Print right part of the pyramid with left indent
        print_hash(i);
        printf("\n");
    }
    return 0;
}

void print_spc(const int spc)
{
    for (int j = 0; j < spc; j++) {
        printf(" ");
    }
}
void print_hash(const int hash)
{
    for (int k = 0; k < hash + 1; k++) {
        printf("#");
    }
}