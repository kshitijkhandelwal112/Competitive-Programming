#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string S1;
    string S2;
    cin>>S1;
    cin>>S2;
    for (int i=0;i<S1.length();i++){
        S1[i]=tolower(S1[i]);
        S2[i]=tolower(S2[i]);
        // Learnt how to change case of letters
        // Learnt that ASCII has already made enabled to compare characters.
    }
    for (int i=0;i<S1.length();i++){
        if (S1[i]==S2[i] && i!=(S1.length()-1)){
            continue;
        }else if(S1==S2){
            cout<<0<<endl;
            break;
        }else{
            if(S1[i]>S2[i]){
                cout<<1<<endl;
            }else if(S1[i]<S2[i]){
                cout<<-1<<endl;
            }
            break;
        }
    }
    return 0;
}