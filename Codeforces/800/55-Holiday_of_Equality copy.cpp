#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int largest = a[0];
    for(int i=0;i<n;i++){
        if (a[i]>largest){
            largest = a[i];
        }
    }
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=largest-a[i];
    }
    int sum=0;
    for (int i=0;i<n;i++){
        sum +=b[i];
    }
    // alternately we could directly write sum += largest-a[i], no need to introduce new array.
    cout<<sum<<endl;
    return 0;
}