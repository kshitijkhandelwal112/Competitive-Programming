#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int d = a+b+c+n;
        if(a>d/3 || b>d/3 || c>d/3) cout<<"NO"<<endl;
        else if(d%3!=0) cout<<"NO"<<endl;
        else if(n<((d/3) - a) || n<((d/3)-b) || n<((d/3)-c)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
/* BEST SOLUTION BY AI
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int total = a + b + c + n;

        if (total % 3 != 0) {
            cout << "NO\n";
            continue;
        }

        int target = total / 3;

        if (a > target || b > target || c > target) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
*/