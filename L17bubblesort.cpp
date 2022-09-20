#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		arr.push_back(temp);
	 } 
	 for(int i=0;i<n;i++)
	 {
	 	bool swapped=false;
	 	for(int j=0;j<n-i;j++)
	 	{
	 		if(arr[j]>arr[j+1])
	 		{
			 swap(arr[j],arr[j+1]);
	 		swapped=true;
		 }
		 }
		 if(swapped==false)    //when array is already sorted 
		 {
		 	break;
		 }
	 }
	 for(int i=0;i<n;i++)
	 {
	 	cout<<arr.at(i)<<" ";
	 }
	 cout<<endl;
	 return 0;
}
