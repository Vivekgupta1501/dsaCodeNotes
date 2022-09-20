#include<iostream>
#include<map>
using namespace std;        //in maps we assgin aprticular key a particular value 
int main()                  //one key can not point to two values
{                           // by default maps are sorted
    map<int,string> m;      //implimentation is using red black trees
    m[1]="vivek";           //complexity is O(log n)
    m[2]="kumar";
    m[13]="gupta";
    m.insert({5,"bheem"});
    for(auto i:m)
    {
        cout<<i.first<<" " <<i.second<<endl;
    }
    cout<<" finding 13th element ->"<<m.count(13)<<endl;
    return 0;
}