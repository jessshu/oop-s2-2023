#include "MusicBox.h"

#include <iostream>

MusicBox:: MusicBox() : songname(""), width(0){};  // a default constructor
MusicBox:: MusicBox(std::string songname, int width)
    : songname(songname),
      width(width){
        box = new int(width);
      };  // a constructor that takes the song and width as arguments

std::string MusicBox::get_song() {
  return songname;
} // returns the name of the song that the music box plays

int MusicBox::get_width() {
  return width;
}// returns the width in centimetres of the music box

MusicBox::~MusicBox(){
    delete[] box; 
}  // A default destructor~