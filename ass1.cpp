#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int ans=0;
        for(int i=0;i<=7;i++)
        {
            ans=ans+i;
        }
        
        int i=0;
        int count=0;
        while(ans!=0 && i<n)
        {
        	//cout<<" im ";
        	
            if(arr[i]>7)
            {
                i++;
            }
            else
            {
                ans=ans-arr[i];
                
            }
            count++;
            i++;

        }
        cout<<count<<endl;
    }
	// your code goes here
	return 0;
}

