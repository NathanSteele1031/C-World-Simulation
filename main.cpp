#include <iostream>
#include "Tile/Tile.h"

using namespace std;

int main(){
    cout << "Hello, World!" << endl;
    Tile tile;
    TileObject tree("Tree", 5);
    tile.addObject(&tree);
    cout << tree.getName() << endl;
    tile.showObjectNames();
    cout << "Index for tree " << tile.searchObject("Tree") << endl;
    TileObject givenTree = *tile.giveObject(0);
    tile.showObjectNames();

    return 0;
}