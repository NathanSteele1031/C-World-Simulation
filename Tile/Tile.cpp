#include "Tile.h"
#include <iostream>

Tile::Tile(){
    for (int i=0; i<10; i++){
        this->objects[i] = nullptr;
    }
}

signed int Tile::searchEmpty() {
    for (int i = 0; i < 10; i++){
        if (this->objects[i] == nullptr){
            return i;
        }
    }
    return -1; // Couldn't find index
}

int Tile::addObject(TileObject* givenObject){
    signed int emptyIndex = Tile::searchEmpty();
    if (emptyIndex == -1){
        return emptyIndex; // No empty spot found
    }
    this->objects[emptyIndex] = givenObject;
    return 0; // Success
}

void Tile::removeObject(int index){
    this->objects[index] = nullptr;
}

TileObject* Tile::giveObject(unsigned int index){
    TileObject* returnObject;
    if (this->objects[index] == nullptr){
        TileObject newObject;
        return &newObject;
    }
    returnObject = this->objects[index];
    removeObject(index);
    return returnObject;
}

int Tile::searchObject(string objectName){
    for (int index=0; index<10; index++){
        if (this->objects[index]->getName() == objectName){
            return index;
        }
    }
    return -1; // Can't find instance
}

void Tile::showObjectNames(){
    cout << "Objects names" << endl;
    for (int index=0;index<10;index++){
        if (this->objects[index] == nullptr){
            continue;
        }
        cout << this->objects[index]->getName() <<endl;
    }
}