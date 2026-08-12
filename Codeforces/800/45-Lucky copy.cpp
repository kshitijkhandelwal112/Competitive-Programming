#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string str[t];
    for (int i=0;i<t;i++){
        cin>>str[i];
    }
    for (int i=0;i<t;i++){
        string a=str[i];
        if(a[0]+a[1]+a[2]==a[3]+a[4]+a[5]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}