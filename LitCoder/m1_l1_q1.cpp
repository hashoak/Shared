#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    float n=s.length(),u=0,l=0,d=0,o=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z') u++;
        else if(s[i]>='a' && s[i]<='z') l++;
        else if(s[i]>='0' && s[i]<='9') d++;
        else o++;
    }
    printf("%.3f%%\n%.3f%%\n%.3f%%\n%.3f%%\n",u/n*100,l/n*100,d/n*100,o/n*100);
    return 0;
}