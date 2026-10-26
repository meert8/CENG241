#include <iostream>
using namespace std;

class Rectangle {
    int width;
    int height;

    public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }
    int area() {return width * height;}
    int perimeter(){
        return 2*(width+height);
    }
};

int main() {
    Rectangle r(10, 5);
    /*
    cout << "Width: " << r.width << ", Height: " << r.height << endl;  //first try with this without writing the area function in the class and then write the area function in the class and then call it in the main function
    *///it didnt work bcs parameters are private
    cout << "Area: " << r.area() << endl;
    cout<<"Perimeter= "<<r.perimeter()<<endl;
    return 0;
}