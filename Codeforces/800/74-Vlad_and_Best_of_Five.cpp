#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string str[t];
    for(int i=0;i<t;i++){
        cin>>str[i];
    }
    for(int i=0;i<t;i++){
        int a=0;
        int b=0;
        for(int j=0;j<5;j++){
            if(str[i][j]=='A'){
                a++;
            }else if(str[i][j]=='B'){
                b++;
            }
        }
        if(a>b){
            cout<<'A'<<endl;
        }else if(a<b){
            cout<<'B'<<endl;
        }
    }
    return 0;
}