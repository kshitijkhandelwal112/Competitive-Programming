#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mg[n];
    for (int i=0;i<n;i++){
        cin>>mg[i];
    }
    int grp=0;
    for (int j=0;j<n;j++){
        if (mg[j]==mg[j+1]){
            continue;
        }else{
            grp++;
        }
    }
    cout<<grp<<endl;
    return 0;
}