#include <iostream>
using namespace std;

void print_binary_str(string decimal_number) {
    int num = stoi(decimal_number);
    int arr[30];
    int i = 0;

    while (num > 0) {
        // mod n, increment i, and divide n by 2
        arr[i] = num % 2;
        i++;
        num = num/2;
    }

    // loop in reverse order to display converted binary
    for (int j = i-1 ; j >= 0; j--) {
        std::cout << arr[j];
    }

    return;

}