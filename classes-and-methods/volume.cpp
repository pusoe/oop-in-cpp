#include <iostream>
using namespace std;

class Box
{
	public:
		int l,b,h,v;
		void showVolume();
};

void Box::showVolume()
{
	l = 33;
	b = 2;
	h = 4;
	
	v = l*b*h;
	cout<<v<<endl;
}
		
main()
{
	Box b1;
	b1.showVolume();
}