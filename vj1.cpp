#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> v(n+1,0);
        for(int i=0;i<n;i++)
        {
            cout<<"hit";
            int index=a[i];
            v[index]=v[index]+1;
        }
        sort(v.begin(),v.end());
        if(v[n+1]==v[n])
        {
            cout<<"yes";
        }
        else
        cout<<"no";

    }
}