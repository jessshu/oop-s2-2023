#include "StoreShelf.h"
#include "MusicBox.h"
#include <iostream>

StoreShelf::StoreShelf(): width(0) {};                     // default constructor
StoreShelf::StoreShelf(int width):width(width), curr_boxes(0) {
    boxes = new MusicBox[width];
}           // constructor for shelf with given width in centimetres

int StoreShelf::get_width(){
    return width;
};                  // returns the width of the shelf in centimetres

// returns the number of Music boxes currently on the shelf
int StoreShelf::get_num_music_boxes(){
    return curr_boxes;
}; 

// returns a dynamic array of the music boxes currently on the shelf
MusicBox* StoreShelf::get_contents(){
    return boxes; 
};

// returns true and adds music box to shelf if there is sufficient space
// otherwise returns false
bool StoreShelf::add_music_box(MusicBox a_music_box){
    int total_box_width = 0; 

    int box_width = a_music_box.get_width();

    for (int i = 0; i < curr_boxes; i++) {
        total_box_width = width - box_width;
    }

    for (int j = 0; j < width; j++) {
        if (total_box_width >= 0) {
            boxes[curr_boxes] = a_music_box;
            curr_boxes++;
            return true;
        } else {
            return false;
        }
    }

    return false; 
};
 
StoreShelf::~StoreShelf(){
    delete[] boxes; 
};