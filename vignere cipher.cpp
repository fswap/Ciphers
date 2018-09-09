#include<iostream>
using namespace std;
int main()
{
  string s,k,p;
  int i;
  cout<<"Enter the String:\n";
  getline(cin,s);
  cout<<"Enter the key string:\n";
  getline(cin,k);
  for(i=0;i<s.length();i++)
  p+=k[i%k.length()];
  for(i=0;i<s.length();i++)
    if(s[i]+p[i]-91<65)
    s[i]=s[i]+p[i]-65;
    else
    s[i]=s[i]+p[i]-91;
  cout<<"Encrypted String:\n"<<s<<endl;
}
