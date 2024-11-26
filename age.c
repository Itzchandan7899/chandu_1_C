#include <stdio.h>

int main() {
    int age;

    // Asking the user to input their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Checking if the age falls between 18 and 25 (inclusive)
    if (age >= 18 && age <= 25) {
        printf("You are a younger adult.\n");
    } else {
        printf("You are not a younger adult.\n");
    }

    return 0;
}
