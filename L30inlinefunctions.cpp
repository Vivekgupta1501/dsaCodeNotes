#include<iostream>
using namespace std;
inline int getMax(int& a,int& b)   //inline functions body is placed where it is called. It does not occupy memory stack sepeartely.
{
    return (a>b)? a:b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=getMax(a,b);
    cout<<ans<<endl;
    return 0;
}