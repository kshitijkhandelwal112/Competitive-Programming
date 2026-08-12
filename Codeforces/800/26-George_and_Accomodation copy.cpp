#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p[n];
    int q[n];
    int d=0;
    for (int i=0;i<n;i++){
        cin>>p[i]>>q[i];
        if (q[i]-p[i]>=2){
            d++;
        }
    }
    cout<<d<<endl;
    return 0;
}