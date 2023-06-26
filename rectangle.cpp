#include<iostream>
using namespace std;

class Area
{
    public:
        void calculate(int r)
        {
            cout<<"Area of circle: "<<3.14*r*r<<endl;
        }
        void calculate(int l,int b)
        {
            cout<<"Area of rectangle: "<<l*b<<endl;
        }
        void calculate(float b,float h)
        {
            cout<<"Area of triangle: "<<0.5*b*h<<endl;
        }
};

int main()
{
    Area a;
    int r,l,b;
    float base,height;
    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<"Enter length and breadth of rectangle: ";
    cin>>l>>b;
    cout<<"Enter base and height of triangle: ";
    cin>>base>>height;
    a.calculate(r);
    a.calculate(l,b);
    a.calculate(base,height);
    return 0;
}
