#include <iostream>
#include <string>
using namespace std;
int main(){
    int a[4];
    for (int i=0;i<4;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    int calories=0;
    for(int i=0;i<s.length();i++){
        int x=s[i]-'1';
        // This method (above) was told by AI, to convert char into int.
        calories = calories + a[x];
    }// S.M. I was unnecessarily doing a[x]*s[i], that was not to be done.
    cout<<calories<<endl;
    return 0;
}