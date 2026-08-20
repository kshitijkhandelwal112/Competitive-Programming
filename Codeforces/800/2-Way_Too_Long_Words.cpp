#include <iostream>
#include <string>
using namespace std;
int main() {
    int n; cin>>n;
    while(n--){
        string str; cin>>str;
        if(str.length()<=10) cout<<str<<endl;
        else{
            cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
        }
    }
    return 0;
}
/* BEST SOLUTION RECOMMENDED BY AI
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (s.size() <= 10)
            cout << s << '\n';
        else
            cout << s.front() << s.size() - 2 << s.back() << '\n';
    }
}
    Here:
    - s.back() → last character
    - s.size() → length of string
    - '\n' → generally preferred over endl in CP because it doesn't force a flush.
    - s.front() → first character
*/