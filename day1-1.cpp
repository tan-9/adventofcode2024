#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    vector<ll> a, b;

    for(int i=0; i<1000; i++){
        int x, y;
        cin>>x>>y;
        a.push_back(x);
        b.push_back(y);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll ans = 0;

    for(int i=0; i<1000; i++){
        ans += abs(a[i]-b[i]);
    }

    cout<<ans;

    return 0;
}