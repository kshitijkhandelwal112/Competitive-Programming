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
        if(str[i][0]=='a' || str[i][1]=='b' || str[i][2]=='c'){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}