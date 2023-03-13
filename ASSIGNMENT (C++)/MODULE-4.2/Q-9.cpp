// Write a Program of Two 1D Matrix Addition using Operator Overloading.
#include<iostream>
using namespace std;
class matrix
{
    public:
    int a;
    int get()
    {
        cout<<"Enter the value of matrix:";
        cin>>a;
        
        return 0;
    }
    matrix operator+(matrix b)
    {
        matrix add;
        a = add.a + b.a;

        return add;
    }
    int data()
    {
        cout<<endl<<"Vlaue of matrix is:"<<a;
        return a;
        
        return 0;
    }
};
int main()
{
    matrix m1,m2;
    m1.get();
    m2.get();
    m1.data();
    m2.data();
    matrix m3;
    m3 = m1 + m2;
    cout<<endl<<"After addition :-\n";
    m3.data();

    return 0;

}