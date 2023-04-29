#include<bits/stdc++.h>

using namespace std;


int main() {
    string s,str="";
    cin>>s;
    str=s[0];
    for (int i = 1; i < s.size(); ++i) {
        if(s[i]!=s[i-1])str+=s[i];
    }
    cout<<str;
    return 0;
}
