#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,unit,c=1,calc;
    cin>>n>>unit;
    calc=unit;
    while(unit<=n)
    {
        if((n-unit)%10==0)
        {
            cout<<c<<"\n";
            return 0;
        }
        unit+=calc;
        c++;
    }
    cout<<-1<<"\n";
    return 0;
}