#include <iostream>
using namespace std;

class Subtract 
{
   public:
      int difference;
      Subtract(int num1, int num2) 
	  {
         difference = num1 - num2;
      }
};

int main() 
{
   Subtract obj(20, 10);
   cout<<"Difference of two numbers: "<<obj.difference;
   return 0;
}

