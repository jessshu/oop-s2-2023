#include "MusicBox.h"
#include <iostream>

int main() {
    // init class
    MusicBox M("song", 3);

    // default musicbox
    std::cout << M.get_song() << std::endl;
    std::cout << M.get_width() << std::endl;

    return 0;
}