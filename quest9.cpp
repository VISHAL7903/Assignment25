#include<iostream>
using namespace std;
class Circle
{
    private :
    double radius;
    public :
    Circle (double r)
    {
        radius = r;
    }
    double getArea()
    {
        return 3.14 * radius * radius; 
    }
};
int main()
{   
    cout<<"Enter the radius of circle ";
    double userRadius;
    cin >> userRadius;
    Circle c1(userRadius);
    cout<<"The area of Circle is " << c1.getArea() <<endl;
    return 0;
}