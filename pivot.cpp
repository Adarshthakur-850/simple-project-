3include<iostream>
using namespace std;
class binary
{
    int x:
    public:
    binary()
    {
        x=0;
    }
    binary(int num)
    {
        x=num;
    }
    binary operator*(binary obj1)
    {
        binary temp;
        temp.x=x*obj1.x;
        return temp;
    }
}
