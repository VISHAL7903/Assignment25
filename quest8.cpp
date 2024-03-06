#include<iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea()
    {
        return length * width;
    }
};

int main()
{
    Rectangle myRectangle(5.0, 8.0);
    double areaOfRectangle = myRectangle.calculateArea();
    cout << "Area of the rectangle: " << areaOfRectangle << endl;

    return 0;
}
