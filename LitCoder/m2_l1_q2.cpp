#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,res="";
    getline(cin,s);
    stack<string> a; 
    for (int i=0;i<s.size();i++)
    {
        if (s[i]=='1') {
            i+=2;
            a.push(res);
            while (s[i]!=',') res+=s[i++];
        }
        else if(s[i]=='2') {
            i+=2;
            int num=0;
            a.push(res);
            while (s[i]!=',') num=num*10+(s[i++]-'0');
            res.erase(res.length()-num);
        }
        else if (s[i]=='3'){
            i+=2;
            int num=0;
            while (s[i]!=',' && s[i]!='\0') num=num*10+(s[i++]-'0');
            cout<<res[num-1]<<"\n";
        }
        else if (s[i]=='4'){
            res=a.top();
            a.pop();
            i++;
        }
    }
    return 0;
}