
#include<iostream>
using namespace std;
class inlinefun
{
    public:
    inline int mul(int a,int b)
    {
        return a*b;
    }
    inline int cube(int a)
    {
        return a*a*a;
    }
};
int main()
{
    inlinefun obj;
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout<<"Multiplication of two numbers:"<<obj.mul(x,y)<<endl;
    cout<<"Cube of first number:"<<obj.cube(x)<<endl;
    return 0;
}

