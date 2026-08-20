#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int p[n];
    if(n%2!=0) cout<<-1<<endl;
    else{
        for(int i=0;i<n;i++){
            if((i+1)%2==0) p[i]=i;
            else p[i]=i+2;
        }
        for(int i=0;i<n-1;i++){
            cout<<p[i]<<" ";
        }
        cout<<n-1<<endl;
    }
    return 0;
}
/* BEST SOLUTION GIVEN BY AI
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2) {
        cout << -1 << '\n';
        return 0;
    }

    for (int i = 1; i <= n; i += 2)
        cout << i + 1 << ' ' << i << ' ';

    cout << '\n';
}
*/