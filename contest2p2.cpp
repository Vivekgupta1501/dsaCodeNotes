#include<iostream>
#include<vector>
using namespace std;
int index(int n, vector<int> arr, int queries)
{
    int temp=1;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        temp= temp & arr[i];
        if(temp>=queries)
        {
            ans=i;
        }
            
    }
    return ans;
}
int main()
{
  int n,q;
  cin>>n>>q;
  vector<int> arr;
  vector<int> queries;
  for(int i=0;i<n;i++)
  {
    int temp;
    cin>>temp;
    arr.push_back(temp);
  }
  for(int i=0;i<q;i++)
  {
    int temp;
    cin>>temp;
    queries.push_back(temp);
  }
  vector<int> v;
    for(int i=0;i<q;i++)
    {
        int temp=index(n,arr,queries[i]);
        v.push_back(temp);
    }
    for(auto i:v)
    {
        cout<<i<<endl;
    }
    return 0;

}