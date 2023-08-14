# include <iostream>
extern int *readNumbers();
extern void printNumbers(int *numbers,int length);
extern void hexDigits(int *numbers,int length);

int main() {
    int *arr = readNumbers(); 
    int len = 10;

    hexDigits(arr, len);

    delete[] arr;

    return 0;
}

