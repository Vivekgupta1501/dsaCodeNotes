#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
     s.insert(5);               
     s.insert(1);
     s.insert(6);
     s.insert(0);    //complexity O(logn)
//implemented using binary search ytree
//can not be modified once elment is added 
//returns the elment in sorted order
//frequency of all the elmenets remains one
for(auto i:s)
{
    cout<<i<<endl;
}
cout<<"5 present or not->"<<s.count(5)<<endl;  //to check wethere elment is present or not
return 0;
}                                