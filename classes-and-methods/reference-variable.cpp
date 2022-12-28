#include <iostream>
using namespace std;

int main()
{
	int a = 8;
	int& b = a;
   	cout << "The variable a : " <<a<<endl;
   	cout << "The reference variable r : " <<b<<endl;
   	
   	return 0;
}