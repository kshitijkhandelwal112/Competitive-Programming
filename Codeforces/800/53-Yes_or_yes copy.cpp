#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    int t;
    cin>>t;
    string str[t];
    for (int i=0;i<t;i++){
        cin>>str[i];
        for (int j=0;j<str[i].length();j++){
            str[i][j] = tolower(str[i][j]);
        }
    }
    for(int i=0;i<t;i++){
        if (str[i]=="yes"){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}