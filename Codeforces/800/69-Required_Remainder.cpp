#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x[t],y[t],n[t];
    for(int i=0;i<t;i++){
        cin>>x[i]>>y[i]>>n[i];
    }
    int k[t];
    for(int i=0;i<t;i++){
        k[i]=0;
        int kmax;
        // Below while loop caused some time complexity issues, so gemini told another solution, as mine exceeded time limit:
        /* while(k[i]<=n[i]){
            if(k[i]%x[i]==y[i]){
                kmax=k[i];
                k[i]++;
            }else{
                k[i]++;
            }
        } */ 
       // One line told by gemini:
       kmax = ((n[i] - y[i]) / x[i]) * x[i] + y[i];
       // Basically k = (Integral multiple of x) + y (obvious)
       // And kmax <= n; so integral part of (n-y)/x when multiplied by x and added y, it becomes nothing but kmax.
       // And as we know, when the variables are defined int, then all calculations directly yield integral part only (for positive numbers).
        cout<<kmax<<endl;
    }
    return 0;
}