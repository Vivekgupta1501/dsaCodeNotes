#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{ 
    private:
     int findFloor(vector<vector<int>> &a, int z, int x,int n){
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e)
        {
            if(a[z][mid]<=x)
            {
                ans=max(ans,mid);
                s=mid+1;
            }
            
            
            else if(a[z][mid]<x)
            s=mid+1;
            
            else
            e=mid-1;
            
            mid=s+(e-s)/2;
        }
        return ans;
        
        // Your code here
        
    }
    
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        int count=0;
        int n=r*c;
        for(int i=0;i<r;i++)
        {
            
            for(int j=0;j<c;j++)
            {
                count=0;
                for(int z=0;z<r;z++)
                {
                    int temp=findFloor(matrix,z,matrix[i][j],c);
                    temp++;
                    cout<<matrix[i][j]<<" "<<temp<<endl;
                    count+=temp;
                }
                count--;
                //cout<<i+j<<" "<<count<<endl;
                if(count==n/2)
                {
                    return matrix[i][j];
                }
            }
        }
        
        // code here          
    }
};
int main()
{
    vector<vector<int>> v;
    for(int i=0;i<3;i++)
    {
        vector<int> temp;
        for(int j=0;j<3;j++)
        {
            int t;
            cin>>t;
            temp.push_back(t);           
        }
        v.push_back(temp);

    }
    Solution obj;
    int ans=obj.median(v,3,3);
    cout<<"median is"<<ans;
    return 0;
}