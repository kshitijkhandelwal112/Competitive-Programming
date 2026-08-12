#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if (i==0){
            arr[i]=b-a;
        }else{
            arr[i] = arr[i-1]+b-a;
        }
    }
   // New thing learnt: Comparison of elements among an array.
    int max=arr[0];
    for (int j=0;j<n;j++){
        if (arr[j]>max){
            max = arr[j];
        }
    }
    cout<<max<<endl;
    return 0;
}