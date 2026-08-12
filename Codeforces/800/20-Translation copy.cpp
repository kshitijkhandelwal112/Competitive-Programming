#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,t;
    cin>>s;
    cin>>t;
    int l=s.length();
    // Length of string can be used in this above way.
    string r(l,' ');
    // Use this notation of r(l,' ') to create a string of length l and character under single quotes repeated l times.
    // string j(5,' ') means that string contains 5 times spaces. If it were 'a' then aaaaa would be the string.
    // Also, don't write '' instead of ' '.
    for (int i=0;i<l;i++){
        r[i]=s[l-i-1];
    }
    if (t==r){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}