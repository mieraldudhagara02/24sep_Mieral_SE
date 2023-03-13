// Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
#include<string.h>
using namespace std;
class getstring
{
    public:
    char s1[20],s2[20];
    char get()
    {
      cout<<"Enter string:";
      cin>>s1;
    }
    getstring oprator +(getstring gs2)
    {
        getstring gs1;
        gs1.s1=strcat(s1,s2.s1);
      
        return gs1;
        
    }
    char Concatenate()
    {
        cout<<endl<<"Concatenate of two string is:"<<s1;
        return s1;
    }
};
char main()
{
  
    getstring g1,g2;
    g1.get();
    g2.get();
    g1.Concatenate();
    g2.Concatenate();
    getstring g3;
    g3 = strcat(g1,g2);
    cout<<endl<<"After Concatenate:-\n";
    g3.Concatenate();
    return 0;

}