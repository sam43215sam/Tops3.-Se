#include <iostream>
using namespace std;

class Add
 {
   public:
      int sum;
      Add(int num1, int num2)
	   {
         sum = num1 + num2;
      }
};

int main()
 {
   Add obj(10, 20);
   cout<<"Sum of two numbers: "<<obj.sum;
   return 0;
}
