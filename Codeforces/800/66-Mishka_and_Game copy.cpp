#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m[n],c[n];
    int mishka=0;
    int chris=0;
    for(int i=0;i<n;i++){
        cin>>m[i]>>c[i];
    }
    for (int i=0;i<n;i++){
        if (m[i]>c[i]){
            mishka++;
        }else if(m[i]<c[i]){
            chris++;
        }else{
            continue;
        }
    }
    if(mishka>chris){
        cout<<"Mishka"<<endl;
    }else if(chris>mishka){
        cout<<"Chris"<<endl;
    }else{
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}