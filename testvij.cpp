#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	 arr[0]=-1;
	for(int i=1;i<=5;i++)
	{
	arr[i]=i;	
	}
	for(int i=0;i<=5;i++)
	cout<<arr[i]<<endl;
	return 0;
}
