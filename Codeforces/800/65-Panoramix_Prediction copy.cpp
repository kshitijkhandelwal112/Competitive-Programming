#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    int next=0;
    bool NextPrime = false;
    for (int i=1;NextPrime==false;i++){
        int x=n+i;
        int div=0;
        for(int j=2;j<x;j++){
            if (x%j==0){
                NextPrime=false;
                div++;
            }else{
                continue;
            }
        }
        if(div>0){
            NextPrime=false;
            continue;
        }else{
            next=x;
            NextPrime=true;
        }
    }
    if(next == m){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}