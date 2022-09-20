#include<iostream>
using namespace std;
void print(int arr[],int size,int st=0)   //here st is a default argument.
{                                         // whenever function is called it is choice of programmer wethere to pass the value of start or not 
    for(int i= st;i<size;i++)            //you always need to inialise from right.
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int *arr= new int[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    print(arr,n);
    print(arr,n,2);
    return 0;
}