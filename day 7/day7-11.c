#include <stdio.h>
int main() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            if (j < 1 + i && j > 3 - i) { 
            }
            if (i == 0 || (i == 1 && j != 2) || (i == 2 && (j == 0 || j == 4))) {
                if (j <= 2) {printf("%d ", j + 1);}
                else {printf("%d ", 5 - j);}
            }
			else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}