#include<iostream>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
        void get_person_data()
		{
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
        }
};

class Student: public Person
{
    protected:
        float percentage;
    public:
        void get_student_data()
		{
            cout<<"Enter percentage: ";
            cin>>percentage;
        }
};

class Teacher: public Student
{
    protected:
        float salary;
    public:
        void get_teacher_data()
		{
            cout<<"Enter salary: ";
            cin>>salary;
        }
        void display()
		{
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Percentage: "<<percentage<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};

int main()
{
    Teacher t1;
    t1.get_person_data();
    t1.get_student_data();
    t1.get_teacher_data();
    t1.display();
    return 0;
}

