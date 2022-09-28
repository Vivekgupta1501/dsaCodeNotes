#include<iostream>
using namespace std;
void rev(int i,int j, string& str)
{
    if(i>j) return;
    swap(str[i],str[j]);
    i++;j--;
    rev(i,j,str);
}
int main()
{
    string s;
    cin>>s;
    int i=0,j=s.length()-1;
    rev(i,j,s);
    cout<<s<<endl;
    return 0;
}