# include <iostream> 

void binaryadd(int n1,int n2) {
    // initialise array to store sum 
    int sum[11];
    int i = 0; // counter
    int temp = 0;

    // while both numbers are not 0
    while (n1 > 0 || n2 > 0) {
        sum[i] = ((n1 % 10) + (n2 % 10) + temp) % 2;
        i++; // increment counter 
        temp = ((n1 % 10) + (n2 % 10) + temp) / 2;
        // move to next digit 
        n1 = n1/10;
        n2 = n2/10;

    }

    if (temp !=0) {
        sum[i] = temp;
        i++;
    }
     i--;

    // print array in reverse order 
    for (int j = i; j >= 0; j--) {
        std::cout << sum[j];
    }

    std:: cout << std::endl;

    return;
}

void binarysubstract(int n1, int n2) {
    // initialise array to store sum 
    int diff[11];
    int counter = 0; // counter
    int temp = 0;

    // while both numbers are not 0
    while (n1 > 0 || n2 > 0) {
        diff[counter] = ((n1 % 10) - (n2 % 10) + temp) % 2;
        counter++; // increment counter 
        temp = ((n1 % 10) - (n2 % 10) + temp) / 2;
        // move to next digit 
        n1 = n1/10;
        n2 = n2/10;

    }

    if (temp !=0) {
        diff[counter] = temp;
        counter++;
    }
     counter--;

    // print array in reverse order 
    for (int j = counter; j >= 0; j--) {
        std::cout << diff[j];
    }

    std:: cout << std::endl;

    return;
}

int shiftright(int n) {
    // initialise converted number 
    int converted_number = 0;

    // if last digit is 0 
    if (n % 2 == 1) {
        // to remove the last digit 
        converted_number = (n-1)/10;
    } else {
        converted_number = n/10;
    }

    return converted_number;
    
}

int shiftleft(int n) {
    // times 10 to add 0 to end 
    int rightnum = n * 10;

    return rightnum;
}

int main() {
    // add binary
    binaryadd(10110, 10001);

    // subtract binary
    binarysubstract(10111,10010);

    // shift to right (divide by 2) 
    std::cout << shiftright(1011) << std::endl;

    // shift to left (multiply by 2)
    std::cout << shiftleft(1011) << std::endl;

}