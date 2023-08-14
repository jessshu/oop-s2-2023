#include <iostream>

int *readNumbers() {
    int *dyn_array = new int[10]; 

    for (int i = 0; i < 10; i++) {
        std::cout << "Enter a value: ";
        std::cin >> dyn_array[i];
    }
    return dyn_array;
}
void printNumbers(int *numbers,int length) {
    for (int i = 0; i < length; i++) {
        std::cout << i;
        std::cout << " ";
        std::cout << numbers[i];
        std::cout << std::endl;
    }

    return;
}

void hexDigits(int *numbers,int length) {
    int counter = 0;
    char hex[length];
    
    while (counter < length) {
        switch(numbers[counter]) {
            case 10: 
                hex[counter] = 'A';
                counter++;
                break; 
            case 11: 
                hex[counter] = 'B';
                counter++;
                break; 
            case 12: 
                hex[counter] = 'C';
                counter++;
                break; 
            case 13: 
                hex[counter] = 'D';
                counter++;
                break; 
            case 14: 
                hex[counter] = 'E';
                counter++;
                break;
            case 15: 
                hex[counter] = 'F';
                counter++;
                break; 
            default:
                hex[counter] = numbers[counter];
                counter++;
                break;
        }
    }

    // print 
    for (int i = 0; i < length; i++) {
        if (numbers[i] >= 10) {
            std::cout << i << " " << numbers[i] << " " << hex[i] << std::endl;
        } else {
            std::cout << i << " " << numbers[i] << " " << numbers[i] << std::endl;
        }

    }
    return;
}