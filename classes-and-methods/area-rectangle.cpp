#include <iostream>
using namespace std;

class Rect
{
	private:
		int length = 20, breadth = 10, area;
		
	public:
		void getData()
		{
			cout<<"Enter Length and breadth of Rectangle"<<endl;
			cin>>length>>breadth;
		}
		
		void showData()
		{
			area = length * breadth;
			cout<<"Area of Rectangle is:"<<area<<endl;
		}
		
		void inputData(int len, int bre)
		{
			length = (len > 0) ? len : length;
			breadth = (bre > 0) ? bre: breadth;
		}
};

main()
{
	Rect rec;
//	rec.getData();

	rec.inputData(0, 0);
	rec.showData();
}