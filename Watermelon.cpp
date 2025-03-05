#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int w;cin>>w;
    bool k = false;
    if(w%2==0){
    for(int i=2;i*i<=w;i+=2){
        if((w-i)%2==0){
            k= true;
            break;
        }
    }
     }

    if(k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}