#ifndef MUSICBOX_H
#define MUSICBOX_H
#include <iostream>

class MusicBox {
    private:
        std::string songname;
        int width;
        int* box;
    public:
        MusicBox();          // a default constructor 
        MusicBox(std::string songname, int width); // a constructor that takes the song and width as arguments
        std::string get_song();  // returns the name of the song that the music box plays
        int get_width();    // returns the width in centimetres of the music box
        ~MusicBox();       //A default destructor
};

#endif