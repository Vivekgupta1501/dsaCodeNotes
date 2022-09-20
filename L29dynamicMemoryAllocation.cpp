#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int **arr=new int*[n];
    for(int i=0;i<m;i++)
    {
        arr[i]=new int[n]; //creation of 2d array
    }
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>arr[i][j];
    return 0;
}