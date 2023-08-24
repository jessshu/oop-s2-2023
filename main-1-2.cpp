#include "StoreShelf.h"
#include "MusicBox.cpp"

#include <iostream>

int main() {
    // initialise classes 
    StoreShelf Shelf(2);
    MusicBox m2("Two", 1);
    MusicBox m3("Three",1);

    // test to see if they work
    if (Shelf.get_width() == 2) {
        std::cout << "The width of the shelf is: " << Shelf.get_width() << std::endl;
    };

    return 0;
}