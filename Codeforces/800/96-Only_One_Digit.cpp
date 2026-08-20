#include <iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int x; cin>>x;
        if(x==1000){
            cout<<0<<endl;
        /*}else if(x<10){
            cout<<x<<endl;    */ // I introduced this to eliminate error caused due to single digit numbers. But now found better way.
        }else{
            int a=x%10;
            int b=(x/10)%10;
            int c=(x/100);
            if(c==0 && b==0){b=9;c=9;}
            else if(c==0 && b!=0) c=9;
            // if(c==0 && b==0) b=9; This is why I wasn;t getting answer before. This line should be written above.
            if(a<=b && a<=c) cout<<a<<endl;
            else if(b<=a && b<=c) cout<<b<<endl;
            else if(c<=a && c<=b) cout<<c<<endl;
        }
    }
    return 0;
}