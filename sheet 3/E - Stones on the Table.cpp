#include<bits/stdc++.h>

using namespace std;


int main() {
    int n;
    string s;
    cin>>n>>s;
    int num=0;
    for (int i = 1; i < s.size(); ++i) {
        if(s[i]==s[i-1])num++;
    }
    cout<<num;
    return 0;
}
