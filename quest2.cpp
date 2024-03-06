#include<iostream>
using namespace std;
class Time
{
    private :                   
    int hour,sec,min;
    public :
    void setvalue( int x, int y, int z)
    {
        hour =x;
        min = y;
        sec = z;
    }
    void showvalue()
    {
        cout<<"Time is  "<< hour << "Hour "<<min <<"Min "<< sec <<"Sec ";
    } 
};
int main()
{
    Time c;
    c.setvalue(5,15,30);
    c.showvalue();
    return 0;
}
