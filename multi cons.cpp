#include <iostream>
using namespace std;

class Multiply 
{
   public:
      int product;
      Multiply(int num1, int num2) 
	  {
         product = num1 * num2;
      }
};

int main() 
{
   Multiply obj(10, 20);
   cout<<"Product of two numbers: "<<obj.product;
   return 0;
}

