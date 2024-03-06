#include <iostream>
using namespace std;

class ReverseNumber 
{
private:
    int originalNumber;
    int reversedNumber;

public:
    
    void setNumber(int num) 
    {
        originalNumber = num;
    }

    int getOriginalNumber()
    {
        return originalNumber;
    }

    int getReversedNumber()
    {
        return reversedNumber;
    }


    void reverse() 
    {
        int num = originalNumber;
        reversedNumber = 0;

        while (num > 0) 
        {
            int digit = num % 10;
            reversedNumber = reversedNumber * 10 + digit;
            num /= 10;
        }
    }
};

int main() 
{
    ReverseNumber number;

    number.setNumber(12345);

    cout << "Original Number: " << number.getOriginalNumber() << endl;

    number.reverse();
    cout << "Reversed Number: " << number.getReversedNumber() << endl;

    return 0;
}
