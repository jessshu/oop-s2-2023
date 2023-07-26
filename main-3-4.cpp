#include <iostream>
extern void print_pass_fail(char grade);

int main() {
    // initialise variable
    char grade = 0;

    // prompt user input 
    std::cout << "Enter your grade: ";
    std::cin >> grade;

    // call to function 
    print_pass_fail(grade);

}
