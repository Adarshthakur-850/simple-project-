#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1="Lovely Professional ";
	string s2="University";

	s1.insert(20,s2);
	cout<<"insert after 20, s2: "<<s2<<endl;
	s1.insert(20,s2,0,3);
	cout<<"insert after 20, s2, 0, 3: "<<s2<<endl;
	s1.insert(7,"NAAC A++",4);
	cout<<"After 7, NAAC A++, 4: "<<s1<<endl;
	s2.insert(11,2,'+');
	cout<<"after insert 11, 2, +: "<<s2<<endl;
	s2.insert(s2.begin() +5, 2,'+');
	cout<<s2;
}
