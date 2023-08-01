# include <iostream> 
extern int sum_diagonal(int array[4][4]);

int main() {
    // initialise matrix 
    int array[4][4] = {{1,2,3,4},
                        {1,2,3,4},
                        {1,2,3,4},
                        {1,2,3,4}};

    // call to function 
    std::cout << sum_diagonal(array) << std::endl;
    
    return 0;
}