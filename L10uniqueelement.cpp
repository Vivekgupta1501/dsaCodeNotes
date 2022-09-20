#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		ans=ans^arr[i];        //we are perfoming XOR as a^a=0 and 0^a=a
	}
	cout<<ans;     //https://bit.ly/3y01Zdu
	return 0;
}

