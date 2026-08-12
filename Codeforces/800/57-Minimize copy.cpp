#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t],b[t];
    for (int i=0;i<t;i++){
        cin>>a[i]>>b[i];
    }
    for (int i=0;i<t;i++){
        cout<<b[i]-a[i]<<endl;
    }
    return 0;
}