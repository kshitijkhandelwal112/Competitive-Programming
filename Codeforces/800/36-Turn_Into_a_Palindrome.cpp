#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; char c;
        cin>>n>>c;
        string s; cin>>s;
        int coins=0;
        for(int i=0;i<(n+1)/2;i++){
            if(s[i]!=s[n-1-i]){
                if(s[i]==c || s[n-1-i]==c)coins++;
                else coins+=2;
            }
        }
        cout<<coins<<"\n";
    }
    return 0;
}