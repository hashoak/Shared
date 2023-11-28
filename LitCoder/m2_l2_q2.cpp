#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    long long n,m;
    cin>>n>>m;
    vector<long long> a={1,1,2,4};
    long long p=4;
    while(p<=m) 
    {
        a.push_back((a[p-1]+a[p-2]+a[p-3]+a[p-4])%mod);
        p++;
    }
    for(long long i=0;i<=m;i++)
    {
        long long k=a[i];
        for(long long j=0;j<n-1;j++) a[i]=(a[i]*k)%mod;
    }
    vector<long long> u={0,0};
    for(long long i=2;i<m+1;i++)
    {
        long long result=0;
        for(long long j=1;j<i;j++)
            result=(result+((a[j]-u[j])*a[i-j]))%mod;
        u.push_back(result);
    }
    cout<<(a[m]-u[m])%mod;
    return 0;
}