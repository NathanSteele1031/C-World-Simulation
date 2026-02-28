#include <string>

using namespace std;

class TileObject{
private:
    string name;
    int value;
public:
    TileObject(string name, int value);
    TileObject();

    string getName(){
        return name;
    }

    int getValue(){
        return value;
    }
};