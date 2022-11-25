#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int largestArea(vector<int>& height)
{
    
}
int main()
{
    int n;
    cin>>n;
    vector<int> num;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        num.push_back(temp);
    }
    int ans=largestArea(num);
    return 0;

}