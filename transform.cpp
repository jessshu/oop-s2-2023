# include <iostream> 

void decimaltobinary (int n) {

    // initialise array to store binary number and counter i 
    int arr[11]; 
    int i = 0;

    // keep looping while number is not 0 
    while (n > 0) {
        // mod n, increment i, and divide n by 2
        arr[i] = n % 2;
        i++;
        n = n/2;
    }

    // loop in reverse order to diplay converted binary
    for (int j = i-1 ; j >= 0; j--) {
        std::cout << arr[j];
    }
    std:: cout << std::endl;

    return;
}

int main() {
    // initialise number to be converted 
    int num = 0;

    // prompt for user input 
    std::cout << "Enter a number to be converted into base 2: ";
    std::cin >> num; 

    // call to function 
    decimaltobinary(num);

    return 0;
}