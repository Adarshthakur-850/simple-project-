#include<iostream>
using namespace std;
enum week {sunday,monday,tuesday,wednesday,thrusday,friday,saturday};
int main()
{
    week today;
    today=wednesday;
    cout<<"day : "<<today+1;
    return 0;
}
