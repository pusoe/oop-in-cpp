#include<iostream>
using namespace std;

class Student
{
	private:
		int regNo;
		int rAge = 20;
	
	public:
		string name;
		string address;
		int marks;
	
	string result(int mark)
	{
		if (mark > 44) {
			return "Pass";
		} else {
			return "Fail";
		}
	}
	
	int getAge()
	{
		return rAge;
	}
	
	void setAge(int newAge)
	{
		rAge = newAge;
		
//		return rAge;
	}
};

main() {
	Student s1, s2;
	s1.name = "Ram";
	int age;
	
//	s1.rAge = 20;
	cout<<s1.name<<endl;
	cin>>age;
	s1.setAge(age);
	cout<<s1.getAge()<<endl;
//	string result;
//	int mark, mark2;
//	cout<<"Enter marks:"<<endl;
//	cin>>mark;
//	result = s1.result(mark);
//	cout<<result<<endl;
//	cout<<"Enter marks:"<<endl;
//	cin>>mark2;
//	result=s2.result(mark2);
//	cout<<result<<endl;
 };  

