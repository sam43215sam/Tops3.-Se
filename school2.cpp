#include <iostream>
using namespace std;

class Students
 {
   public:
      int roll_number;
};

class Test : public Students
 {
   public:
   	
      int subject1_marks;
      int subject2_marks;
};

class Result : public Test
 {
   public:
      void display()
	   {
         cout << "Roll Number: " << roll_number << endl;
         cout << "Subject 1 Marks: " << subject1_marks << endl;
         cout << "Subject 2 Marks: " << subject2_marks << endl;
         cout << "Total Marks: " << (subject1_marks + subject2_marks) << endl;
      }
};

int main()
 {
   Result r;
   r.roll_number = 1234;
   r.subject1_marks = 80;
   r.subject2_marks = 90;
   r.display();
   return 0;
}
