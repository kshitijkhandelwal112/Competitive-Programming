#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int rptd=0;
        if(a[0]==a[1] || a[0]==a[2]) rptd=a[0];
        else if(a[1]==a[2]) rptd=a[1];
        int spy=0; // AI told that this initialization wasn't required.
        for(int i=0;i<n;i++){
            if(a[i]!=rptd){spy=i+1;break;}
        }
        cout<<spy<<"\n";
    }
    return 0;
}