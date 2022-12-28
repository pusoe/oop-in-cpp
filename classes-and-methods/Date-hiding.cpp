#include <iostream>
using namespace std;

class Person
{
	private:
		int rage;
		
	protected:
		int fage;
		int registrationNo;

	public:
		string name, address;
		
		void getName()
		{	
			cout<<"Name is "<<name<<endl;
		}
};

class Student : public Person
{
	public:
	void getAddress()
	{
		cout<<"Age is "<<fage<<endl;
		cout<<"Address is "<<address<<endl;
	}
	
	void setData(string nam, string addr)
	{
		name = nam;
		address = addr;
	}
	
//	void setRealAge()
//	{
//		fage = 30;
//	}
};

main()
{
	Student s1;
	s1.name = "Abiral";
	s1.address = "Talchowk";
	s1.fage = 18;
//	s1.setData("Abiral", "Talchowk");
	s1.setRealAge();
	s1.getAddress();
	s1.getName();
}