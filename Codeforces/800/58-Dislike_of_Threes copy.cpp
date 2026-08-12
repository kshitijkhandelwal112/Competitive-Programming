#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int k[t];
    for (int i=0;i<t;i++){
        cin>>k[i];
    }
    int like[1000];
    int j=0;
    for (int i=1;j<1000;i++){// S.M. made condition in this for loop too i<t
        if(i%10!=3 && i%3!=0){ // S.M. wrote || instead of && but that was for opposite case.
            like[j]=i;
            j++;
        }else{
            continue;
        }
    }
    for (int i=0;i<t;i++){
        cout<<like[k[i]-1]<<endl;
    }// Silly mistake: Forgot this -1 after k[i]
    return 0;
}