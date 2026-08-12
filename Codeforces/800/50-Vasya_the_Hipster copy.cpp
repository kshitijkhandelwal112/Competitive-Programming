#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b;
    if (a>=b){
        c=b;
        d=(a-b)/2;
    }else{
        c=a;
        d=(b-a)/2;
    }
    cout<<c<<" "<<d<<endl;
    return 0;
}