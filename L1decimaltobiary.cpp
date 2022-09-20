#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
   cin>>n;
   int ans=0,i=0;
   while(n!=0)
   {
    int bit= n & 1;
//cout<<bit<<endl;
    ans = (bit * pow(10,i)) + ans;
   // cout<<ans<<" itration is "<< i<<endl;
    cout<<bit<<endl;
    i++;
    n=n>>1;
   }
   cout<<"Conversion is" <<ans;
    return 0;
}