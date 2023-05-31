// use loop for 10 numbers from keyboard and find their sum and average 

#include<iostream>
using namespace std;

int main()
{
	int j, i[10], sum=0;
	float average;
	
	cout<<"Enter any numbers:";
	
	for(j=1; j<=10; j++)
	{
		cin>>i[j];
		sum = sum + i[j]; 
	}
	
	cout<<sum<<endl;
	average = sum/10;
	cout<<average;
	return 0;
}