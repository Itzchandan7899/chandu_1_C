#include <stdio.h>

int main() {
    
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    }
    printf("Elements of the 2D array (matrix) are:\n");

    for (int i = 0; i < 3; i++) {  
        for (int j = 0; j < 4; j++) {  
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}