#include <iostream>
using namespace std;

class Democtr
{
	public:
		static int ctr;
	
		static void counter()
		{
			cout<<ctr<<endl;
			ctr++;
		}
};
int Democtr::ctr = 0;
main()
{
	Democtr::ctr = 10;
	Democtr::counter();
	Democtr::counter();
//	Democtr c1;
//	c1.counter();
//	c1.counter();
//	c1.counter();
	
//	c1.counter();
}
