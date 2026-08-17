#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int eff[n-1]; // Mistake: As n-1 values to be entered here, the size of array also needs to be n-1 and not n. We needn't write output in this array.
        // It took me a lot of time to realise that we just need a value that makes sum of all efficiencies 0.
        for(int i=0;i<n-1;i++){
            cin>>eff[i];
        }
        int sum=0;
        for(int num:eff){
            sum += num;
        }
        cout<<-1 * sum<< endl;
    }
    return 0;
}