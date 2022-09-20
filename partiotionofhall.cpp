#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int ans=-1;
    int c=count(s.begin(),s.end(),'1');
    if(c%2!=0)
    {
        cout<<ans<<endl;
        return 0;
    }
    else{
        
    }
}