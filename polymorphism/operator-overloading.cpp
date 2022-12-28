#include <iostream>
using namespace std;

class Complex
{
	int real, imaginary;
		
	public:
		Complex(int r = 0, int i = 0)
		{
			real = r;
			imaginary = i;
		}
		
		Complex operator + (Complex const &obj)
		{
			Complex res;
			res.imaginary = imaginary + obj.imaginary;
			res.real = real + obj.real;
			
			return res;
		}
		
		void display()
		{
			cout << real << " + i" << imaginary << endl;
		}
};

int main()
{
	Complex c1(1,2), c2(3,4);
	Complex c3 = c1 + c2;
	c3.display(); 
}