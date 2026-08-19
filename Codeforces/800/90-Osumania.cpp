#include <iostream>
#include <string>
using namespace std;
// I did a lot of mistakes here and took help of AI to repair them.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string str[n]; // This is better than using array of string str[n] as told by AI.
        for(int i=0;i<n;i++){
            cin>>str[i];
        }
        string mystring((2*n)-1,' '); // Don't put " " here instead ' ' for characters.
        int k=0; // This is not to be written inside the below loop.
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<str[i].length();j++){
                if(str[i][j]=='#'){
                    mystring[k]=j+1+'0'; // String is array of characters, not numbers so take special care, ASCII code used. So write + '0'
                    k+=2;
                }
            }
        }
        cout<<mystring<<endl;
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
        int n;
        cin >> n;

        vector<string> grid(n);

        for (auto &row : grid)
            cin >> row;

        for (int i = n - 1; i >= 0; i--) {
            cout << grid[i].find('#') + 1 << " ";
        }

        cout << '\n';
    }
}
*/