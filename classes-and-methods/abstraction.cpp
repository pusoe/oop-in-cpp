#include <iostream>
using namespace std;

class Tax
{
	private:
		float grossamount, rate, netamount,taxableamount;
		
	public:
		float taxAmount(float grossamount, float rate)
		{
			taxableamount = (grossamount * rate) / 100;
			
			netamount = grossamount - taxableamount;
			
			return netamount;
		}
};

class Salary
{	
	public:
		float salaryAmount(float grossamount, float rate)
		{
			Tax t1;
			float fvamount = 10000;
			grossamount = grossamount + fvamount;
			
			return t1.taxAmount(grossamount, rate);
		}
};

int main()
{
//	Tax t1;
	Salary s1;
	float amount, salary, rate;
	cout<<"Enter gross salary and tax rate:"<<endl;
	cin>>salary>>rate;
//	amount = t1.taxAmount(salary, rate);
	amount = s1.salaryAmount(salary, rate);
	cout<<"My net salary is: " <<amount<<endl;
}


