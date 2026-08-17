#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int w=0;
        int k=0;
        while(k<n){
            if(a[k]==2){
                w++;
            }
            k++;
        }
        if(w%2!=0){
            cout<<-1<<endl;
        }else{
            int p=0; // Silly mistake, before I took this variable as n.
            int i_0=0;
            for(int i=0;i<n;i++){
                if(a[i]==2){
                    p++;
                }
                if(p==(w/2)){
                    i_0 = i;
                    cout<<i_0+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
/*BEST SOLUTION TOLD BY AI
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int cnt = 0;

        for (int &x : a) {
            cin >> x;
            cnt += (x == 2);
        }

        if (cnt % 2) {
            cout << -1 << '\n';
            continue;
        }

        int need = cnt / 2;

        for (int i = 0; i < n; i++) {
            if (a[i] == 2) {
                need--;
            }

            if (need == 0) {
                cout << i + 1 << '\n';
                break;
            }
        }
    }
}
*/