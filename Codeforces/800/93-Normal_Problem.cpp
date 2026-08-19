#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string str;
    while(t--){
        cin>>str;
        for(int i=0;i<str.length();i++){
            if(str[i]=='p') str[i] = 'q';
            else if(str[i]=='q') str[i] = 'p'; // I forgot about this line idk why.
        }
        // One more S.M. Mirror image asked this means that the order of letters would be opposite too.
        string finale(str.length(),' ');
        for(int i=0;i<str.length();i++){
            finale[i]=str[str.length()-1-i];
        }
        cout<<finale<<endl;
    }
    return 0;
}
/* BEST SOLUTION GIVEN BY AI
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        reverse(s.begin(), s.end());

        for (char &c : s)
            c = (c == 'p' ? 'q' : 'p');

        cout << s << '\n';
    }
}
*/