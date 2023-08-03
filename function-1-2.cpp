#include <iostream>

int is_identity(int array[10][10]) {
    int counter = 0;
    int zero_counter = 0;
    
    // loop 
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            // determine if diagonal elements are 1 and non diagnoals are 0
            if (!((i==j)&& (array[i][j] == 1) || (array[i][j]==0)&&(i!=j))) {
                return 0;
            }
        }

    }
    return 1;
}
