#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string strA[t],strB[t];
    for (int i=0;i<t;i++){
        cin>>strA[i]>>strB[i];
    }
    for (int i=0;i<t;i++){
        char a=strA[i][0];
        char b=strB[i][0];
        strA[i][0]=b;
        strB[i][0]=a;
        cout<<strA[i]<<" "<<strB[i]<<endl;
    }
    return 0;
}