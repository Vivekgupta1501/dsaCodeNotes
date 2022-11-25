#include <iostream>
#include<vector>
using namespace std;
int subsetXOR(vector<int> a, int n, int k) {
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int temp=0;
            for(int j=i;j<n;j++)
            {
                temp=temp^a[j];
                cout<<temp<<" "<< a[i]<<endl;
                if(temp==k)
                {
                    //cout<<"hit"<<endl;
                    cnt++;}
            }
        }
        return cnt;
        
        // code here
    }

int main() {
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    cout<<subsetXOR(a,n,15);
	// your code goes here
	return 0;
}