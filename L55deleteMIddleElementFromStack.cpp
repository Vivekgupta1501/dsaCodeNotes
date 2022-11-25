#include<iostream>
#include<stack>
using namespace std;
void deleteMiddle(stack<int> &s,int n,int cnt)
{
    if(cnt==n/2)
    {
        s.pop();
        return;
    }
   int num=s.top();
   s.pop();
   deleteMiddle(s,n,cnt+1);
   s.push(num);


}
int main()
{
    stack<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        s.push(temp);
    }
    deleteMiddle(s,n,0);
    for(int i=0;i<n;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}