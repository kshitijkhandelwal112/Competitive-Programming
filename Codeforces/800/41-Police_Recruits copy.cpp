#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int crime=0;
    int police = 0;
    for (int j=0;j<n;j++){
        if (arr[j]>0){
            police = police + arr[j];
        }else if(police>=1){
            police--;
        }else{
            crime++;
        }
    }
    cout<<crime<<endl;
    return 0;
}