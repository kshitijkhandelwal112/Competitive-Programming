#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a = n%10;
    if (k<=a){
        n = n-k;
        cout<<n;
    }else{
        int i=1;
        while (i<=k){
            if(n%10==0){
                n = n/10;
                i++;
            }else{
                n = n-1;
                i++;
            }
        }
        cout<<n<<endl;
    }// This is a nice way to talk about digits of a given number.
    return 0;
}