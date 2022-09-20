#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("vivek");
    s.push("kumar");
    s.push("gupta");
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    return 0;
}