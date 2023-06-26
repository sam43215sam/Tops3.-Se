#include<iostream>
using namespace std;

float area(float r) 
{
    return 3.14 * r * r;
}

 float area(float l, float b) {
    return l * b;
}

 float area(float h, float b) 
{
    return 0.5 * h * b;
}

int main() {
    float r, l, b, h;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Enter height and breadth of triangle: ";
    cin >> h >> b;
    cout << "Area of circle is " << area(r) << endl;
    cout << "Area of rectangle is " << area(l, b) << endl;
    cout << "Area of triangle is " << area(h, b) << endl;
    return 0;
}
