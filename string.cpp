#include<iostream>
#include<cstring>
using namespace std;

class String
{
    char str[100];
    public:
        String(){}
        String(char s[])
        {
            strcpy(str,s);
        }
        void display()
        {
            cout<<str;
        }
        String operator +(String s2)
        {
            String s3;
            strcat(str,s2.str);
            strcpy(s3.str,str);
            return s3;
        }
};

int main()
{
    String s1("Hello"),s2(" World"),s3;
    s3=s1+s2;
    s3.display();
    return 0;
}
