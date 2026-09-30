#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        int j=1;
        vector<int> round;
        while(n>0){
            if(n%10!=0) round.push_back((n%10)*j);
            n/=10;
            j*=10;
        }
        cout<<round.size()<<"\n";
        for(int i=0;i<(int)round.size();i++) cout<<round[i]<<" ";
        cout<<"\n";
    }
    return 0;
}