#include <iostream>
#include <string>
using namespace std;
int main(){
    string S1;
    string S2;
    cin>>S1;
    cin>>S2;
    int l = S1.length();
    string S3(l,'0');
    for(int i=0;i<S1.length();i++){
        if(S1[i]==S2[i]){
            S3[i]='0';
        }else{
            S3[i]='1';
        }
    }
    cout<<S3<<endl;
    return 0;
}