#include "TileObject.h"

TileObject::TileObject(){
    this->name = "Default Object";
    this -> value = 0;
}

TileObject::TileObject(string name, int value){
    this->name = name;
    this->value = value;
}