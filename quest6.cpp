#include<iostream>
using namespace std;

class Square 
{
private:
    int s;
    int sqr;
    static int count;

public:
    void setSquare(int r) 
    {
        s = r;
    }

    void getsquare()
    {
        sqr = s * s;
        cout << "Square: " << sqr << endl;
        count++;
    }

    static int getCount() 
    {
        return count;
    }
};

int Square::count = 0;

int main() 
{
    Square s1;
    int inputValue;
    cout << "Enter number to calculate Square: ";
    cin >>inputValue;
    s1.setSquare(inputValue); // Use the setSquare function to set the value
    s1.getsquare();
    cout << "Function getsquare() was called " << Square::getCount() << " time(s)" << endl;

    return 0;
}

