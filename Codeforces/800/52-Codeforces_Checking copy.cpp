#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    char ltr[t];
    for (int i=0;i<t;i++){
        cin>>ltr[i];
    }
    for (int i=0;i<t;i++){
        if (ltr[i]=='c'||ltr[i]=='o'||ltr[i]=='d'||ltr[i]=='e'){
            cout<<"YES"<<endl;
        }else if(ltr[i]=='f'||ltr[i]=='r'||ltr[i]=='s'){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}