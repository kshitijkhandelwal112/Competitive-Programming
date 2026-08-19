#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int l=str.length();
    int r=0;
    char beginner='a';
    for(int i=0;i<l;i++){
        int dist=0;
        if(str[i]-beginner>=0) dist = str[i]-beginner;
        else dist = beginner-str[i];
        if(dist > 13) dist = 26 - dist;
        r = r+dist;
        beginner = str[i];
    }
    cout<<r<<endl;
    return 0;
}
/* BEST SOLUTION GIVEN BY AI
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    char cur = 'a';

    for (char c : s) {
        int d = abs(c - cur);
        ans += min(d, 26 - d);
        cur = c;
    }

    cout << ans << '\n';
}
*/