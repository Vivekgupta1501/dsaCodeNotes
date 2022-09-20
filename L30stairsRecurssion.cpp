#include<iostream>
using namespace std;
int f(int n)
{
    if(n<0) return 0;
    if(n==0) return 1;
    return f(n-1)+f(n-2);
}
int main()
{
    int n;
    cin>>n;
    int ans=f(n-1)+f(n-2);
    cout<<ans<<endl;
    return 0;
}