#include <stdio.h>

int main() {
    
    for (int i = 1; i <= 10; i++) {
        if (i % 3 == 0) {
            continue;  
        }
        printf("%d ", i);  
    }
    printf("\n");  
    return 0;
}
