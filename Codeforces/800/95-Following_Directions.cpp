#include <iostream>
#include <string>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int x=0,y=0; // S.M. I wrote this line above the while loop
        int n;cin>>n;
        string str; cin>>str;
        bool passed = false;
        for(int i=0;i<n;i++){
            if(str[i]=='U') y++;
            else if(str[i]=='L') x--;
            else if(str[i]=='R') x++;
            else if(str[i]=='D') y--;
            if(x==1 && y==1){
                cout<<"YES"<<endl;
                passed = true;
                break;
            }else{
                continue;
            }
        }
        if(passed == false){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
/* BEST CODE GIVEN BY AI
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int x = 0, y = 0;

        bool found = false;

        for (char c : s) {
            if (c == 'U') y++;
            else if (c == 'D') y--;
            else if (c == 'L') x--;
            else if (c == 'R') x++;

            if (x == 1 && y == 1) {
                found = true;
                break;
            }
        }

        cout << (found ? "YES" : "NO") << endl;
    }

    return 0;
}
*/