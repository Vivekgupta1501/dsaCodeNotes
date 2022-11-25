#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &s,int x)
{
    if(s.empty())
    {
       // cout<<"hit"<<endl;
        s.push(x);
        return;
    }
    int temp=s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(temp);

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
{
    int n,x;
    cin>>n;
    cin>>x;
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        s.push(temp);
    }
    insertAtBottom(s,x);
    print(s);    
    return 0;
}