#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        if(n%2==0) cout<<n/2<<endl;
        else cout<<(n+1)/2<<endl;
        // AI suggested that instead of if/else, we can directly output (n+1)/2 that would simply give answer.
        }
    return 0;
}