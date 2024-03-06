#include<iostream>
using namespace  std;
class Greatest
{
    private:
    int num1, num2, num3;
    public:
    void setNumber(int a, int b, int c)
    {
        num1=a;
        num2=b;
        num3=c;
    }
    int findlargest()
    {
        if( num1 >= num2 && num1 >= num3)
        {
            return num1;
        }
        else if( num2 >= num1 && num2 >= num3)
        {
            return num2;
        }
        else
        {
            return num3;
        }
    }
};
int main()
{
    Greatest greatestObj;
    int num1, num2, num3;
    cout<<" Enter three numbers ";
    cin>>num1 >> num2 >> num3;
    greatestObj.setNumber(num1, num2, num3);
    int largest= greatestObj.findlargest();
    cout<<"The largest number is "<<largest<<endl;
    return 0;
}