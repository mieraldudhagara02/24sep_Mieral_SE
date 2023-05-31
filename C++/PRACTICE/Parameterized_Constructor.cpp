// Parameterized Constructor

#include<iostream>
using namespace std;

class A
{
	int a, b;
	public:
		A(int m,int v)  //here, int m and v is parameters
		{
			a=m;
			b=v;
		}
		
		int show()
		{
			cout<<"Value of a is:"<<a<<endl;
			cout<<"Value of b is:"<<b;
			
			return 0;
		}
};

int main()
{
	A miral(1,2);
	miral.show();
	
	return 0;
}