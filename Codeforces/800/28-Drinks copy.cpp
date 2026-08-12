#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long double percent[n];
    for (int i=0;i<n;i++){
        cin>>percent[i];
    }
    // Let 100 = volume of single bottle. n bottles were added-> n*100 is total volume and sum of array is vol. of orange juice
    long double sum=0;
    for (long double num:percent){
        sum += num;
    }
    long double f = (sum*100)/(100*n);
    cout<<f<<endl;
    return 0;
}