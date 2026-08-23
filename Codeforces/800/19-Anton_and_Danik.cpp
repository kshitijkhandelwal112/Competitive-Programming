#include <iostream>
#include <string>
using namespace std;
int main(){
    int n; cin>>n;
    string str;
    cin>>str;
    int A=0,D=0;
    for(int i=0;i<n;i++){
        if(str[i]=='A') A++;
        else if(str[i]=='D') D++;
    }
    if(A>D) cout<<"Anton\n";
    else if(D>A) cout<<"Danik\n";
    else cout<<"Friendship\n";
    return 0;
}