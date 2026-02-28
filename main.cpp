#include <iostream>
#include "Tile/TileObject/TileObject.h"

using namespace std;

int main(){
    cout << "Hello, World!" << endl;
    TileObject tree("Tree", 5);
    cout << tree.getName() << endl;
    return 0;
}