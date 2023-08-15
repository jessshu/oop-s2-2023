# include <iostream> 
extern int * readNumbers();
extern int secondSmallestSum(int *numbers, int length);

int main() {
    int len = 3; 
    int *array = {1,2,3};

    secondSmallestSum(array, len);

    return 0;
}