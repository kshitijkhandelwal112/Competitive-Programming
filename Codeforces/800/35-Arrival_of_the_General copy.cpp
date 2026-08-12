#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int height[n];
    for (int i=0;i<n;i++){
        cin>>height[i];
    }
    int s=0;
    int l=0;
    int j=0;
    while (j<n){
        if(height[j]>height[l]){
            l=j;
        }
        if(height[j]<=height[s]){
            s=j;
        }
        j++;
    }
    l++;
    s++;
    int time = l+(n-1-s);

    // This last if statement was told by ChatGPT.
    if (l>s){
        time--;
    }
    cout<<time<<endl;
    return 0;
}