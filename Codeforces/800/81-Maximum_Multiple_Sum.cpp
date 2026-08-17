#include <iostream>
using namespace std;
int main(){
    int t; cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int sum[n-1]; //AI: Variable length arrays must not be commonly used in C++.
        for(int x=2;x<=n;x++){
            int k=1;
            while(k*x<=n) k++;
            sum[x-2]=((k-1)*k/2)*x;
        }
        int max=sum[0];
        int J=0;
        for(int j=1;j<n-1;j++){
            if(sum[j]>=max){
                max=sum[j];
                J=j;
            }
        }
        cout<<J+2<<endl;
    }
    return 0;
}
/* BEST SOLUTION GIVEN BY AI
Observation: For every n>=4 the answer is always coming x=2.

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n == 3)
            cout << 3 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}
*/