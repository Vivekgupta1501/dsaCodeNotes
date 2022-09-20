#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v)
{
    int s=0,e=v.size()-1;
    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
int main()
{
    int n;
    cout<<"Entre the number of elements->";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    v=reverse(v);
    for(auto i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}