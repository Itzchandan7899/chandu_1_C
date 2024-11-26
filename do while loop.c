#include <stdio.h>

int main() {
    int i = 1;

    // do-while loop that prints numbers 1 through 5
    do {
        printf("Iteration %d\n", i);
        i++;  // Increment i after each iteration
    } while (i <= 5);  // Loop continues as long as i is less than or equal to 5

    return 0;
}
