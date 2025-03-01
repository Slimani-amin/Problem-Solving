#include <bits/stdc++.h>
#define ll long long
using namespace std;



void solve() {

    int n; cin>>n;
    vector<ll> a(n);
    vector<ll> b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    set<ll> c;
    c.insert(a[0]+b[0]);
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(a[i]!=0 && b[j]!=0 && !c.count(a[i]+b[j])){
                c.insert(a[i]+b[j]);
                a[i] = 0;
                b[j] = 0;
            }
        }
        
    }

    if(c.size()>=3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}