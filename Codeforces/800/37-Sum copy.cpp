#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t],b[t],c[t];
    for (int i=0;i<t;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    int d[t];
    for(int i=0;i<t;i++){
      //  d[i]=(a[i]+b[i]+c[i])/2; this is wrong because it may take GIF too.
        d[i]=(a[i]+b[i]+c[i]);
        if(d[i]%2!=0){
            cout<<"NO"<<endl;
        }else if (d[i]/2==a[i] || d[i]/2==b[i]||d[i]/2==c[i]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}