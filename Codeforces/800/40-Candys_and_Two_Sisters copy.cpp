#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n[t];
    for (int i=0;i<t;i++){
        cin>>n[i];
    }
    int b[t];
    for(int i=0;i<t;i++){
        // This thing is told by AI, otherwise I wasn't able to do this.
        b[i]=((n[i]-1)/2);
        cout<<b[i]<<endl;
    }

    return 0;
}