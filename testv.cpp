#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int start=-1000;
        int end=1000;
        int mid=(start+end)/2;
        int a,c;
       // int ans=-1100;
        while(start<=end)
        {
            a=(3*x)-y;
            a=a-mid;
            //cout<<a<<endl;
            if(a>=-1000 && a<=1000)
            {
                c=mid;
                break;
            }
            else if(a>1000)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
            mid=(start+end)/2;
        }
        
        cout<<a<<" "<<y<<" " <<c<<endl;
    }
    
	// your code goes here
	return 0;
}


