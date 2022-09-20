#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int check[n+1]={0};
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		int index=arr[i];
		check[index]=check[index]+1;
	}
	int c=0;
	for(int i=0;i<n+1;i++)
	{
		cout<<check[i];
		if(check[i]==1)
		{
			c++;
		}
	}
	if(c%2==0)
	{
		cout<<"YES";
			}
			else
			{
				cout<<"NO";
			}
			return 0;
}

