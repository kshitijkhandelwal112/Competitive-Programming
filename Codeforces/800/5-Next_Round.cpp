#include <iostream>
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cutoff=a[k-1];
    if(a[k-1]<=0){
        int winner=0;
        for(int i=0;i<n;i++){
            if(a[i]>0) winner++; // Silly mistake: Forgot this one, so it showed: Wrong Answer on test 7.
        }
        cout<<winner<<endl;
        return 0;
    }
    else{
        int winners=0;
        for(int i=0;i<n;i++){
            if(a[i]>=a[k-1]) winners++;
        }
        cout<<winners<<endl;
    }
    return 0;
}
/* BEST SOLUTION GIVEN BY AI
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int &x : a)
        cin >> x;

    int ans = 0;

    for (int x : a) {
        if (x >= a[k - 1] && x > 0)
            ans++;
    }

    cout << ans << '\n';

    return 0;
}
*/