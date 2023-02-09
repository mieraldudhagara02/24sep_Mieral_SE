 #include<iostream>
using namespace std;

class overloading
{
	public:
		
		int calculation(int a, int b)
		{
			cout<<endl<<"addition of a and b is:"<<a+b;
			return 0;
		}
		
		int calculation(double c, double d)
		{
			cout<<endl<<"substraction of c and d is:"<<c-d;
			return 0;
		}
		
		int calculation(int a, double c)
		{
			cout<<endl<<"Multiplication of a and c is:"<<a*c;
			return 0;
		}
		
			
		int calculation(double c, int d)
		{
			cout<<endl<<"Division of c and d is:"<<c/d;
			return 0;
		}
};

int main()
{
	overloading over;
	over.calculation(4,2);
	over.calculation(4.2,2.2);
	over.calculation(4,2.2);
	over.calculation(8.2,4);
	return 0;
}