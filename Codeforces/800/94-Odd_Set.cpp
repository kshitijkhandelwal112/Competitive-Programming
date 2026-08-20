#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
       // int a[n]; This was silly mistake, because the array essentially had 2n elements and not n.
        int a[2*n];
        for(int i=0;i<(2*n);i++){
            cin>>a[i];
        }
        int odd=0,even=0;
        for(int i=0;i<(2*n);i++){
            if(a[i]%2==0) even++;
            else odd++;
        }
        if(even==odd) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
/* BEST CODE TOLD BY AI
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, odd = 0;
        cin >> n;

        for (int i = 0; i < 2 * n; i++) {
            int x;
            cin >> x;
            odd += x % 2;
        }

        cout << (odd == n ? "Yes\n" : "No\n");
    }

    return 0;
}
*/