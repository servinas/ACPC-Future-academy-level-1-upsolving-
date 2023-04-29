#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    string s;
    while (t--){
        cin>>s;
        bool ok=1;
        int n=s.size();
        for (int i = 0; i < s.size()/2; ++i) {
            if(s[i]!=s[n-1-i]){
                ok=0;
                break;
            }
        }
        if(ok)cout<<"wins\n";else cout<<"loses\n";
    }
    return 0;
}
