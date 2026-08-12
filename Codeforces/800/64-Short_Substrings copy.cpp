#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string a[t];
    string b[t];
    for (int i=0;i<t;i++){
        cin>>b[i];
    }
    for (int i=0;i<t;i++){
        int k=0;
        for(int j=0;j<b[i].length();j=j+2){
            a[i]+=b[i][j]; // This told by AI; as string length initially considered 0 while defining, so we can't use a[i][k] as k can't be above 0.
            k++;
        }
        a[i]+=b[i][(b[i].length()-1)];
    }
    for (int i=0;i<t;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}