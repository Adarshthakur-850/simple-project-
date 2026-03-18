#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream myfile;
    char str[100];
    cout<<"enter your text here;";
    cin.getline(str,100);
    myfile.open("outline.txt",ios::out);
    if (myfile)
    {

        myfile<<str<<endl;
        cout<<"data stored successfull"<<endl;

    }
    else cout<<"error"<<endl;
    return 0;


}
