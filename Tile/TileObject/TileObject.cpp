#include "TileObject.h"

TileObject::TileObject(){
    this->name = "Default Object";
    this -> symbol = '?';
}

TileObject::TileObject(string name, char value){
    this->name = name;
    this->symbol = value;
}