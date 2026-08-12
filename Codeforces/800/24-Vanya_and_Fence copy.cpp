#include <iostream>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int heights[n];
    int width[n];
    int WidthSum=0;
    for (int i=0;i<n;i++){
        cin>>heights[i];
        // New thing learnt: in above statement, even if we write all things ith spaces or in new lines, it doesn't matter.
        if (heights[i]>h){
            width[i]= 2;
        }else{
            width[i]=1;
        }
    }
    // New thing learnt: sum of elements of array.
    for (int num:width){
        WidthSum += num;
    }
    cout<<WidthSum<<endl;
    return 0;
}