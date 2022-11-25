#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int> &s,int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }
    int temp=s.top();
    if(temp<=x)
    {
        s.push(x);
        return;
    }
    else 
    {
        s.pop();
        insert(s,x);
        s.push(temp);
    }
}
void sortStack(stack<int> &s,int n)
{
    if(s.empty())
    {
        return;
    }
    int temp=s.top();
    s.pop();
    sortStack(s,n);
    insert(s,temp);

}
void print(stack<int> s)
{
    while(!s.empty())
    {
        int temp=s.top();
        cout<<temp<<" ";
        s.pop();
    }
    cout<<endl;
}
int main()
{    int n;
    cin>>n;
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        s.push(temp);
    }
    sortStack(s,n);
    print(s);   
    return 0;
}