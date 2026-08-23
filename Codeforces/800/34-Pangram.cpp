#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int n; cin>>n;
    string str; cin>>str;
    for(int i=0;i<n;i++) str[i]=tolower(str[i]);
    bool abc[26]={false}; // This hint taken from solution.
    for(int i=0;i<n;i++){
        for(int j=97;j<123;j++){
            if(str[i]==j) abc[j-97]=true;
        }
    }
    int x=0;
    for(int i=0;i<26;i++){
        if(abc[i]==false) x++;
    }
    if(x>0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}