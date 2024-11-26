#include <stdio.h>

int main() {
    int terms, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (terms == 1) {
        printf("Fibonacci sequence: %d\n", first);
    } else {
        printf("Fibonacci sequence: %d, %d", first, second);

        for (int i = 3; i <= terms; i++) {
            next = first + second; 
            printf(", %d", next);  
            first = second;  
            second = next;  
        }
        printf("\n");
    }

    return 0;
}
