#include<iostream>
using namespace std;
class a
{
    public:
    void fun()
    {
        cout<<"I am in a\n";

    }
};
class b{
    public:
    void fun()
    {
        cout<<"I am in b\n";
    }
};
class c:public a,public b
{

};
int main()
{
    c obj;
    //obj.fun();// this will not work 
    obj.a::fun(); // by using :: scope resolution operateor
    return 0;
}