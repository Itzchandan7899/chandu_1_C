#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18 && age <= 25) {
        printf("You are a younger adult.\n");
    } else {
        printf("You are not a younger adult.\n");
    }

    return 0;
}
