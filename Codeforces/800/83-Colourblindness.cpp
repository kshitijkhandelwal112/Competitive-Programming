#include <iostream>
#include <string>
using namespace std;
int main(){
    int t; cin>>t;
    string str1, str2;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cin>>str1>>str2;
        int g=0;
        for(int j=0;j<n;j++){
            if(str1[j]==str2[j]){
                g++;
            }else if(str1[j]=='B'&& str2[j]=='G'){
                g++;
            }else if(str1[j]=='G'&& str2[j]=='B'){
                g++;
            }
        }
        if(g==n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
/* BEST SOLUTION BY AI
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        for (char &c : a) {
            if (c == 'G')
                c = 'B';
        }

        for (char &c : b) {
            if (c == 'G')
                c = 'B';
        }

        if (a == b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
*/