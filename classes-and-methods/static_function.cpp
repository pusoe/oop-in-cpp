#include <iostream>
using namespace std;

class Demo
{	
	public:
		static int counter;
		static void count()
		{
			cout<<"Counter Value: "<<counter<<endl;
			counter++;
		}
		static void final()
		{
			cout<<"Final Counter Value: "<<counter<<endl;
		}
};
int Demo::counter;

int main()
{
	Demo::count();
	Demo::count();
	Demo::final();
}