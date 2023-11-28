#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a[26],maxi=0,j=0;
    for(int i=0;i<26;i++) a[i]=-1;
    for(int i=0;i<s.length();i++)
    {
        if(a[s[i]-'a']!=-1) j=max(j,a[s[i]-'a']+1);
        maxi=max(maxi,i-j+1);
        a[s[i]-'a']=i;
    }
    cout<<maxi;
    return 0;
}