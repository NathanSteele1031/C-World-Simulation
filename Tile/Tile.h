#include <array>
#include "TileObject/TileObject.h"

using namespace std;

class Tile{
private:
    array<TileObject*, 10> objects;
    signed int searchEmpty();
public:
    Tile();
    int addObject(TileObject* givenObject); 
    int searchObject(string objectName); // Searches for the first instance of the name given and returns the index
    TileObject* giveObject(unsigned int index); // Removes the object from the index and return the pointer for the object.
    void removeObject(int index);
    void showObjectNames();
};