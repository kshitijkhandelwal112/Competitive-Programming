#include <iostream>
using namespace std;
int main(){
    long long int n;
    // Nice thing learnt, when numbers may be added to large values, this is one case where
    // long long is used.
    cin>>n;
    int b=0;
    for (int i=0;n>10 || n==7 || n==4;i++){
        if (n%10==7 || n%10==4){
            b++;
            n = (n-(n%10))/10;
        }else{
            n = (n-(n%10))/10;
        }
    }
    if (b==4 || b==7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}