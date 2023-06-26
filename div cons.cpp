#include <iostream>
using namespace std;

class Divide
 {
   public:
      float quotient;
      Divide(float num1, float num2)
	   {
         quotient = num1 / num2;
      }
};

int main()
 {
   Divide obj(20.0, 10.0);
   cout<<"Quotient of two numbers: "<<obj.quotient;
   return 0;
}

