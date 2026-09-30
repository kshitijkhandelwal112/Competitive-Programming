#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    string s; cin>>s;
    int n = s.size();
    set<int> abc;
    for(int i=0;i<n;i++){
        abc.insert(s[i]);
    }
    if((int)abc.size()%2==0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
    return 0;
}