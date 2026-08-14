#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n[t];
    for (int i=0;i<t;i++){
        cin>>n[i];
    }
    for (int i=0;i<t;i++){
        cout<<n[i]-1<<endl;
    }
    return 0;
}