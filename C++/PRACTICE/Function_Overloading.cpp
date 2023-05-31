// Function Overloading

#include<iostream>
using namespace std;

class MIRAL
{
	public:
		int a=10, b=10, c;
		int sum()
		{
			
			c = a + b;
			cout<<"Sum of a and b is:"<<c;
			
			return 0;
		}
		
		int sum(int d, int e)
		{
			c = d + e;
			cout<<endl<<"Sum of d and e is:"<<c;
			
			return 0;
		}
};

int main()
{
	MIRAL a1;
	a1.sum();
	a1.sum(10,20);
	
	return 0;
}