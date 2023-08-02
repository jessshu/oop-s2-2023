#include <iostream> 
extern int is_identity(int array[10][10]);

int main() {
    // initialise 
    int array[10][10];
    
    for (int i = 0 ; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i==j) {
                array[i][j] = 1;
            } else {
                array[i][j] = 0;
            }
        }
    }

    // call to function
    is_identity(array);


    return 0;
}