#include <iostream>
using namespace std;
int main(){
    int s[4];
    for (int i=0;i<4;i++){
        cin>>s[i];
    }
    int d=0;
    for (int j=0;j<4;j++){
        if(s[j]==s[j+1]){
            d++;
        }else if(s[j]==s[j+2]){
            d++;
        }else if(s[j]==s[j+3]){
            d++;
        }
    }
    cout<<d<<endl;
    return 0;
}