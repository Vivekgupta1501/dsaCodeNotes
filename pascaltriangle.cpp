#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
         vector<vector<long long int>> arr;
    int temp;
    for(int i=0;i<n;i++)
    {
        vector<long long int>v1;
        v1.push_back(1);
     //   cout<<"hit"<<endl;
        for(int j=1;j<i+1;j++)
        {
       //     cout<<"hit1"<<endl;
            
            if(j==i)
            {
                temp=1;
                v1.push_back(temp);
                
                
            }
            else
            {
                temp=arr[i-1][j-1]+arr[i-1][j];
                v1.push_back(temp);
               // arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
            
        }
        arr.push_back(v1);
    }
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    }
    return 0;
}