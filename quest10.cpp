#include<iostream>
using namespace std;
class Area
{
    private :
    double squareSide;
    double rectangleLength;
    double rectangleWidth;
    double circleRadius;

    public :
    void setSquareSide(double side) 
    {
        squareSide = side;
    }
    void setRectangleDimensions(double length, double width) 
    {
        rectangleLength = length;
        rectangleWidth = width;
    }
         void setCircleRadius(double radius) 
         {
        circleRadius = radius;
    }
    double calculateSquareArea() 
    {
        return squareSide * squareSide;
    }
    double calculateRectangleArea() 
    {
        return rectangleLength * rectangleWidth;
    }
    double calculateCircleArea() 
    {
        return 3.14 * circleRadius * circleRadius;
    }
};
int main() 
{
    Area areaCalculator;
    areaCalculator.setSquareSide(4.5);
    areaCalculator.setRectangleDimensions(5.2, 3.8);
    areaCalculator.setCircleRadius(3.0);

    
    cout << "Area of the square: " << areaCalculator.calculateSquareArea() << endl;


    cout << "Area of the rectangle: " << areaCalculator.calculateRectangleArea() << endl;

    
    cout << "Area of the circle: " << areaCalculator.calculateCircleArea() << endl;

    return 0;
}