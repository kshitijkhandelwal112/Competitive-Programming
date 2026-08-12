#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t],b[t],c[t],d[t];
    for (int i=0;i<t;i++){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    int opp[t];
    for(int i=0;i<t;i++){
        opp[i]=0;
        if(b[i]>a[i]){
            opp[i]++;
        }if(c[i]>a[i]){
            opp[i]++;
        }if(d[i]>a[i]){
            opp[i]++;
        }
        // Silly Mistake: DON'T USE ELSE IF UNLESS YOU WANT TO DISCARD PREVIOUS CONDITION WHILE MOVING TO NEXT ONE.
        cout<<opp[i]<<endl;
    }
    return 0;
}