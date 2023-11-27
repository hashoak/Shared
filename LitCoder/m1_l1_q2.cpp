#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums(8);
    for(int i=0;i<8;i++) cin>>nums[i];
	int maxlen=0;
    for (int i=0;i<nums.size();i++) {
        int zeroes=0,ones=0;
        for (int j=i;j<nums.size();j++) {
            if(nums[j]==0) zeroes++;
            else ones++;
            if(zeroes==ones) maxlen=max(maxlen,j-i+1);
        }
    }
    cout<<maxlen;
    return 0;
}