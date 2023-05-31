//Abstarction
//hide information

#include<math.h>
//information of sqrt is hide inside the headerfile (#include<math.h>)
#include<iostream>
using namespace std;

int main()
{
	int a, b;
	
	cout<<"Enter the value of a:";
	cin>>a;
	
	b = sqrt(a);
//sqrt is a function, which helps to finding the square root of number
	cout<<b;
	
	return 0;
}