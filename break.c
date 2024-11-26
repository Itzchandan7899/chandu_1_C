#include <stdio.h>

int main() {

    int numbers[] = {10, 20, 30, 40, 50};
    int search_value = 30;
    int found = 0; 

    for (int i = 0; i < 5; i++) {
        printf("Checking %d...\n", numbers[i]);
        if (numbers[i] == search_value) {
            printf("Found %d at index %d!\n", search_value, i);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("%d not found in the array.\n", search_value);
    }

    return 0;
}
