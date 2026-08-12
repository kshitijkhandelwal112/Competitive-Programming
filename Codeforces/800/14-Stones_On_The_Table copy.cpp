#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int d=0;
    for (int i=1;i<n;i++){
        if (s[n-i]==s[n-i-1]){
            d++;
        }else{
            continue;
        }
    }
    cout<<d<<endl;
    return 0;
}