#include <iostream>
extern void count_digits(int array[4][4]);

int main() {
    // init array
    int matrix[4][4] = {0};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrix[i][j] = 1;
        }
    }

    // call function 
    count_digits(matrix);

    return 0;
}
