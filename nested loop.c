#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i == 2 && j == 2) {
                // Skip this iteration when i=2 and j=2
                continue;
            }
            if (i == 3 && j == 3) {
                // Exit the loop when i=3 and j=3
                break;
            }
            printf("%d,%d\n", i, j);
        }
    }

    return 0;
}
