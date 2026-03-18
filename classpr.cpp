class sample{
	int a;
	int b;
	public:
		void get()
		{
			cin<<a;
			cin>>b;
		}
		void put(){
			cout<<"a = "<<a<<" b = "<<b;
		}
		friend void swap(sample);
};
void swap(sample s1){
	int temp = s1.a;
	s1.a=s1.b;
	s1.b=temp;
	cout<<"a = "<<s1.a<<" b = "<<s1.b;
}
int main(){
	sample s2;
	s2.get();
	cout<<"Before swapping: ";
	s2.put();
	cout<<endl;
	cout<<"After swapping: ";
	swap(s2);
}
