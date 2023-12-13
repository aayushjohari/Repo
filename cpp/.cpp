#include<iostream>
using namespace std;

class hello
{
    public:
    int a;
    void hi()
    {
        cout<<"the value of a="<<a<<endl;
    }
};

int main()
{
    hello s1;
    s1.hi();

}