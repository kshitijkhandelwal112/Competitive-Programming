#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n==1 || n==2){
            cout<<1<<endl;
        }else{
            int j = (n-2)/x;
            if((n-2)%x==0) cout<<j+1<<endl;
            else cout<<j+2<<endl;
        }
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
        int n, x;
        cin >> n >> x;

        cout << (n <= 2 ? 1 : (n - 3) / x + 2) << '\n';
    }
}
*/