#include <iostream>
#include <cstdio>
using namespace std;

bool check(char** s,int p,int q)
{
    int i,j,n=p/3,m=q/3;
    for(i=0;i<9;i++) if(i!=p && s[i][q]==s[p][q]) return 0;
    for(j=0;j<9;j++) if(j!=q && s[p][j]==s[p][q]) return 0;
    for(i=n*3;i<n*3+3;i++)
        for(j=m*3;j<m*3+3;j++)
            if(i!=p && j!=q && s[i][j]==s[p][q]) return 0;
    return 1;
}

string doSomething(char** s){
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            if(s[i][j]!='.' && !check(s,i,j)) return "NO";
    return "YES";
}

int main() {
    int n; cin>>n;
    char** s=new char*[n];
    for(int i=0;i<n;i++)
    {
        s[i]=new char[n];
        for(int j=0;j<n;j++) cin>>s[i][j];
    }
    cout<<doSomething(s);
    return 0;
}