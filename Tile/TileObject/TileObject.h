#include <string>

using namespace std;

class TileObject{
private:
    string name;
    char symbol;
public:
    TileObject(string name, char symbol);
    TileObject();

    string getName(){
        return name;
    }

    int getSymbol(){
        return symbol;
    }
};