#include <stdio.h>

int add(int, int);

int main() {
    int num1 = 5, num2 = 7;
    
    int result = add(num1, num2);
    
    printf("The sum is: %d\n", result);
    
    return 0;

int add(int a, int b) {
    return a + b;  
}
