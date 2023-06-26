#include<iostream>
using namespace std;

class Max {
    int num1, num2;
    public:
        void getdata() {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }
        void display() {
            cout << "The maximum of " << num1 << " and " << num2 << " is ";
            if(num1 > num2) {
                cout << num1 << endl;
            } else {
                cout << num2 << endl;
            }
        }
        friend void findMax(Max &);
};

void findMax(Max &m) {
    if(m.num1 > m.num2) {
        cout << m.num1;
    } else {
        cout << m.num2;
    }
}

int main() {
    Max m;
    m.getdata();
    m.display();
    findMax(m);
    return 0;
}
