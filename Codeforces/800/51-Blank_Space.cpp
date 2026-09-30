#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        vector<int> a(n);
        vector<int> blanksp;
        int l=0; blanksp.push_back(l);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0) l++;
            else if(a[i]==1){
                blanksp.push_back(l);
                l=0;
            }
        }
        blanksp.push_back(l);
        auto z = max_element(blanksp.begin(),blanksp.end());
        cout<<(*z)<<"\n";
    }
    return 0;
}