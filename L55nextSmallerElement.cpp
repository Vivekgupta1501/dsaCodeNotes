#include<iostream>
#include<stack>
#include<vector>
// problem Link - https://bit.ly/34GjYL4
using namespace std;
void nextSmaller(vector<int> v,int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--)
    {
        int curr=v[i];
        while(s.top()>=curr)
        {
            s.pop();
        }
        ans[i]=s.top();
        s.push(curr);
    }
    for(int i=0;i<n;i++)
    {
        int temp=ans[i];
        cout<<temp<<" ";
    }
}
int main()
{
    int n;
    cin >>n;
    vector<int> num;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        num.push_back(temp);
    }
    nextSmaller(num,n);
    return 0;
}