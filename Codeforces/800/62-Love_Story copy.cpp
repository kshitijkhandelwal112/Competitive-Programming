#include <iostream>
#include <string>
using namespace std;
int main (){
    int t;
    cin>>t;
    string str[t];
    string actual = "codeforces";
    for (int i=0;i<t;i++){
        cin>>str[i];
    }
    int d[t];
    for (int i=0;i<t;i++){
        d[i]=0; // I had to introduce this to avoid garbage values.
        int j=0;
        while(j<str[i].length()){
            if(str[i][j]!=actual[j]){
                d[i]++;
            }
            j++;
        }
    }
    for(int i=0;i<t;i++){
        cout<<d[i]<<endl;
    }
    return 0;
}