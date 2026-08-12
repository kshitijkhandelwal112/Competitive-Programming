#include <iostream>
using namespace std;
int main(){
    int n; // Number of problems in the contest.
    cin>>n;
    int j=1;
    int done[1000]={};
    for (int i=0; i<n; i++){
        int a,b,c;
        cin>>a>>b>>c;
        if (a==1 && b==1 && c==0){
            done[i]=1;
        }else if(a==0 && b==1 && c==1){
            done[i]=1;
        }else if(a==1 && b==0 && c==1){
            done[i]=1;
        }else if(a==1 && b==1 && c==1){
            done[i]=1;
        }else{
            done[i]=0;
        }
    }
// Alternate much better solution is to use a+b+c>=2

    int sum=0; //New thing learnt- initialization of variable is required in such cases.
    // New thing learnt- How to add all elements of an array.
    for (int k=0;k<n;k++){
        sum += done[k];
    }
    cout<<sum<<endl;
    return 0;
}