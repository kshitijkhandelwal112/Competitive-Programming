#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int layer[100000];
    int i=0;
    while(n>=layer[i]){
        layer[i]=((i+2)*(i+1)/2);
        n=n-layer[i];
        i++;
    }
    cout<<i-1<<endl;
    return 0;
}