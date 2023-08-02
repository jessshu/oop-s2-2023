# include <iostream>
# include <string>

extern void print_binary_str(std::string decimal_number);
using namespace std;

int main() {
    int num = 132;
    string str = to_string(num);

    print_binary_str(str);
    cout << endl;
}