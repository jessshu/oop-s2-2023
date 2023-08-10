#include <iostream>
extern void print_matrix(int array[10][10]);

int main() {
    int array[10][10];

    // intialise array 
    for (int i =0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
          array[i][j] = 1;  
        }
    } 

    // call to function 
    print_matrix(array);
}