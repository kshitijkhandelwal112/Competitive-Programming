#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int P[n];
    int ans[n];
    for(int i=0;i<n;i++){
        cin>>P[i];
        for(int j=1;j<=n;j++){
            if(P[i]==j) ans[j-1]=i+1;
        }
    }
    for(int i=0;i<n;i++){if(i<n-1) cout<<ans[i]<<" ";else if(i==n-1) cout<<ans[i]<<"\n";}
    return 0;
}
// AI suggested that better to directly write:
// ans[P[i]-1]=i+1; rather than writing the conditional statement.