#include<iostream>
using namespace std;
int main()
{
    string s;
    int k,i;
    cout<<"Enter the string:\n";
    getline(cin,s);
    cout<<"Enter Key:\n";
    cin>>k;
    for(i=0;i<s.length();i++)
        if((isupper(s[i])&&s[i]>'Z')||(islower(s[i])&&s[i]>'z'))
        s[i]+=k-27;
        else
        s[i]+=k;
    cout<<"ENCRYPTED STRING: "<<s<<endl;

}
