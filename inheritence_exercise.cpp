#include<iostream>

using namespace std;


class Rectangle {
protected:
    double length;
    double width; 

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double getArea() {
        return length * width;
    }

    double getPerimeter() {
        return 2 * (length + width);
    }
};


class Cuboid : public Rectangle {
private:
    double height;

public:
    Cuboid(double l, double w, double h) : Rectangle(l, w), height(h) {}

    double getVolume() {
        return length * width * height;
    }
};

int main() {
    double length = 5.0;
    double width = 3.0;
    double height = 2.0;

    Cuboid cuboid(length, width, height);

    cout << "Cuboid Dimensions:" << endl;
    cout << "Length: " << length << " units" << endl;
    cout << "Width: " << width << " units" << endl;
    cout << "Height: " << height << " units" << endl;
    cout << "Cuboid Area: " << cuboid.getArea() << " square units" << endl;
    cout << "Cuboid Perimeter: " << cuboid.getPerimeter() << " units" << endl;
    cout << "Cuboid Volume: " << cuboid.getVolume() << " cubic units" << endl;

    return 0;
}