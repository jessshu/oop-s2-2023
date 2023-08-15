#include <iostream>

int *readNumbers() {
    int *dyn_array = new int[3]; 

    for (int i = 0; i < 3; i++) {
        std::cout << "Enter a value: ";
        std::cin >> dyn_array[i];
    }
    return dyn_array;
}

int secondSmallestSum(int *numbers,int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < i; j++) {
            sum = sum + numbers[i];
        }
        std::cout << sum << std::endl;
    }

    return 1;
}