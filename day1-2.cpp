#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    vector<ll> nums1;
    unordered_map<ll, ll> mp;

    for(int i=0; i<1000; i++){
        int x, y;
        cin>>x>>y;
        nums1.push_back(x);
        mp[y]++;
    }

    ll ans = 0;

    for(int x: nums1){
        if(mp.find(x)!=mp.end()) ans+=x*mp[x];
        else continue;
    }

    cout<<ans;
}