#include<iostream>
using namespace std;

class Student
{
	int age;
	string name, address;
	
	public:
		void inputData(int a, string b, string c)
		{
			age = a;
			name = b;
			address = c;
		}
		
		void show()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Address:"<<address<<endl;
			cout<<"Age:"<<age<<endl;
		}
};

main()
{
	Student s1;
	int a;
	string b, c;
	cout<<"Enter Name, Age and Address"<<endl;
	cin>>b>>a>>c;
	s1.inputData(a, b, c);
	s1.show();
}