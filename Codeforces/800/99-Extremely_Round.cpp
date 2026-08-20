#include <iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n<10) cout<<n<<endl;
        else if(n>=10 && n<100) cout<< 9 + (n/10)<<endl;
        else if(n>=100 && n<1000) cout<< 18 + (n/100)<<endl;
        else if(n>=1000 && n<10000) cout<< 27 + (n/1000)<<endl;
        else if(n>=10000 && n<100000) cout<< 36 + (n/10000)<<endl;
        else if(n>=100000 && n<1000000) cout<< 45 + (n/100000)<<endl;
    }
    // AI suggested that in "else if" the cacse of n>=() is already considered, so only second inequality is to be written.
    return 0;
}
/* BEST SOLUTION GIVEN BY AI
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int digits = 0;
        int temp = n;

        while (temp >= 10) {
            temp /= 10;
            digits++;
        }

        cout << digits * 9 + temp << endl;
    }

    return 0;
}
*/