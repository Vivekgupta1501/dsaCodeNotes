#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> l;  //list is a doubly link list so elments it can not be directly accessed using at() function.
	l.push_back(1);// we need to traverse for each element
	l.push_front(2);
	for(int i:l)
    {
        cout<<i<<" ";
    }
    return 0;
}