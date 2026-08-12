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
        int a=n[i]/10;
        int b=n[i]%10;
        cout<<a+b<<endl;
    }
    return 0;
}