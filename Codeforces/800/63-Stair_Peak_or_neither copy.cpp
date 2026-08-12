#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t],b[t],c[t];
    for (int i=0;i<t;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    for (int i=0;i<t;i++){
        if (a[i]<b[i] && b[i]<c[i]){
            cout<<"STAIR"<<endl;
        }else if(a[i]<b[i] && b[i]>c[i]){
            cout<<"PEAK"<<endl;
        }else{
            cout<<"NONE"<<endl;
        }
    }
    return 0;
}