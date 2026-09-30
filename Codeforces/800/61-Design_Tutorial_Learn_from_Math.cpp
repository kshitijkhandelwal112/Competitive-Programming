#include <iostream>
using namespace std;
int main(){
    // Learnt from AI, how to access prime numbers using code.

    //TRY AGAIN
    long int n;
    cin>>n;
    long int isNotPrime[n];
    int k=0;
    for (int i=4;i<n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                isNotPrime[k]=i;
                k++;
                break;
            }
        }
    }
    for (long int i=4;i<n;i++){
        long int j=0;
        if((n-i)==isNotPrime[j]){
            int l=0;
            while(l<n){
                if(i==isNotPrime[l]){
                cout<<i<<" "<<n-i<<endl;
                break;
            }else{
                j++;
            }
            l++;
            }
        }
    }
    return 0;
}