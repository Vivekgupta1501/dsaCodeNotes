#include<iostream>
using namespace std;
int main()
{
	string x;
	cin>>x;
	int l=x.length();
	string s1=x.substr(0,l/2);
	string s2=x.substr(l/2,l);
	cout<<s1<<endl;
	cout<<s2<<endl;
	return 0;
}
