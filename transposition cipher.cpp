#include<iostream>
using namespace std;

int main()
{
    string s,k;int i,j;
    cout<<"Enter the string:\n";
    getline(cin,s);
    cout<<"Enter the key text:\n";
    cin>>k;
    int t=0,col=k.length(),row,z;
    if(s.length()%col)
        row=s.length()/col +1;
    else
        row=s.length()/col;
    for(i=s.length();i<row*col;i++)
        s[i]='_';
    char a[row][col];
    for(i=0;i<row;i++)
    for(j=0;j<col;j++,t++)
            a[i][j]=s[t];
    for(i=0;i<k.length();i++)
    for(j=0;j<k.length();j++)
        if(i==(int)k[j]-48)
        for(z=0;z<row;z++)
            cout<<a[z][j];
}
