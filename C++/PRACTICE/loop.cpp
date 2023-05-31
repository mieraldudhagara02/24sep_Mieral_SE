/* using loop function in cpp for given below output
     *     
	***
   *****
  *******
 ********* */
 
#include<iostream>
using namespace std;
int main()
{
	int i, j, k, l;
	
	for (i=0; i<5; i++)
	// main loop (loop=i) for raw
	{
		for (j=5; j>=i; j--)
		// second loop (loop=j) for space in triangle pattern
		{
			cout<<" ";
		}
		for (k=0; k<=i; k++)
		// third loop (loop=k) for first triangle in triangle pattern
		{
			cout<<"*";
		}
		for (l=1; l<=i; l++)
		// forth loop (loop=l) for second triangle in triangle pattern
		{
			cout<<"*";
	    }
	    
	    cout<<endl;
	}
}

	