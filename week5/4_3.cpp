#include <iostream>
#include <vector>
using namespace std;

class Rectangel{
    public:
    int width;
    int height;
    int getArea(){
        return width*height;
    }
};

int main(){
    Rectangel rect;
    rect.height = 5;
    rect.width = 3;
    cout << "사각형의 면적은 " << rect.getArea() << endl; 
}