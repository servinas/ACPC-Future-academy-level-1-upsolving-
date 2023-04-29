#include<bits/stdc++.h>

using namespace std;


int main() {
    string s;
    cin>>s;
    int lc=0,uc=0;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]>='a')lc++;
        else uc++;
    }
    if(uc>lc){
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]>='a')s[i]-=('a'-'A');
        }
    }else{
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]<'a')s[i]+=('a'-'A');
        }
    }
    cout<<s;
    return 0;
}
