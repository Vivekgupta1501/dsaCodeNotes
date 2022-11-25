#include<iostream>
using namespace  std;
class nstack
{
    int *arr;
    int *top;
    int* next;

    int n,s;
    int freespot;
    public:
    nstack(int  N,int S)
    {
        n=N;
        arr= new int[s];
        s=S;
        top= new int[n];
        next=new int[s];
        for(int i=0;i<n;i++)
        top[i]=-1;

        for(int i=0;i<s;i++)
        {
            next[i]=i+1;
        }
        for(int i=0;i<n;i++) arr[i]=-1;
        next[s-1]=-1;
        freespot=0;
    }
    bool push(int m,int x)
    {
        // check overflow
        if(freespot==-1)
        {
            return false;
        }
        //step1: find index
        int index=freespot;
        
        //update freespot
        freespot=next[index];

        //insert element into array 
        arr[index]=x;

        //update next
        next[index]=top[m-1];
        
        //update top
        top[m-1]=index;

        return true;
    }
    int pop(int m)
    {
        // check underflow condition
        if(top[m-1]==-1)
        {
            return -1;
        }                       //reverse the statemnts in push function.
        int index=top[m-1];
        top[m-1]=next[index];
        next[index]=freespot;
        freespot=index;

        return arr[index];
    }
    void print()
    {
        cout<<endl;
        for(int i=0;i<s;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    

};
int main()
{
    nstack obj(3,5);
    cout<<obj.push(1,10)<<endl;
    cout<<obj.push(1,20)<<endl;
    cout<<obj.push(2,30)<<endl;
   // obj.print();
    cout<<obj.pop(1)<<endl;
    cout<<obj.pop(2)<<endl;

    return 0;
}