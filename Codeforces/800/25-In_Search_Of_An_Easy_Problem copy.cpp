#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int bit[n];
    for (int i=0;i<n;i++){
        cin>>bit[i];
    }
    int sum=0;
    for (int num:bit){
        sum += num;
    }
    if (sum!=0){
        cout<<"HARD"<<endl;
    }else{
        cout<<"EASY"<<endl;
    }
    return 0;
}