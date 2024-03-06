#include <iostream>

using namespace std;

class LargestNumber
{

private:
    int number1;
    int number2;
    int number3;

public:
    void setValue(int n1, int n2, int n3)
    {
        number1 = n1;
        number2 = n2;
        number3 = n3;
    }

    void getLargestNumber()
    {
        if (number1 > number2)
        {
            if (number1 > number3)
                cout << "Number 1 is Greatest";
            else
                cout << "Number 3 is Greatest";
        }
        else
        {
            if (number2 > number3)
                cout << "Number 2 is Greatest";
            else
                cout << "Number 3 is Greatest";
        }
    }
};

int main()
{
    LargestNumber l;

    l.setValue(1,5,9);
    l.getLargestNumber();

    return 0;
}