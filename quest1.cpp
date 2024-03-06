#include<iostream>
using namespace std;
class Complex
{
    private :                   
    int real,img;
    public :
    void setvalue( int x, int y)
    {
        real =x;
        img = y;
    }
    void showvalue()
    {
        cout<<"Complex Number "<<real<<" + "<<img<<" i ";
    } 
};
int main()
{
    Complex c;
    c.setvalue(5,6);
    c.showvalue();
    return 0;
}
