#include <iostream>
using namespace std;

class cricketer 
{
   public:
      string name;
      int age;
};

class batsman : public cricketer 
{
   public:
      int total_runs;
      float average_runs;
      int best_performance;

      void input_data() 
	  {
         cout<<"Enter name: ";
         cin>>name;
         cout<<"Enter age: ";
         cin>>age;
         cout<<"Enter total runs: ";
         cin>>total_runs;
         cout<<"Enter best performance: ";
         cin>>best_performance;
      }

      void calculate_average_runs() 
	  {
         average_runs = total_runs / 10.0;
      }

      void display_data()
	   {
         cout<<"Name: "<<name<<endl;
         cout<<"Age: "<<age<<endl;
         cout<<"Total runs: "<<total_runs<<endl;
         cout<<"Average runs: "<<average_runs<<endl;
         cout<<"Best performance: "<<best_performance<<endl;
      }
};

int main() 
{
   batsman obj;
   obj.input_data();
   obj.calculate_average_runs();
   obj.display_data();
   return 0;
}

