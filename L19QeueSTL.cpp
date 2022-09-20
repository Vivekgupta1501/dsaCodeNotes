#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("vivek");
    q.push("kumar");
    q.push("gupta");
    cout<<"first element "<<q.front()<<endl;
    return 0;
}