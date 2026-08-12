#include <iostream>
using namespace std;
int main(){
    int x[4];
    for(int i=0;i<4;i++){
        cin>>x[i];
    }
    int max=x[0];
    int imax=0;
    for (int i=0;i<4;i++){
        if (x[i]>max){
            max = x[i];
            imax=i;
        }
    }
    int num[3];
    int j=0;
    for (int i=0;i<4;i++){
        if (x[i]!=max){
            num[j]=max-x[i];
            j++;
            // This correction in usage of j was told by AI. Before I was using 2 loops, 2nd one with j and it was complicated.
        }
    }
    
    for(int i=0;i<3;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}