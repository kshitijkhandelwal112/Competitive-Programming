#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string str[t];
    int a[t],b[t];
    for (int i=0;i<t;i++){
        cin>>str[i];
    }
    for (int i=0;i<t;i++){
        a[i]=str[i][0] - '0';
        b[i]=str[i][2] - '0';
        // Learnt new thing: -'0' has to be done while converting digits in string into int because otherwise, ASCII code is considered.
        cout<<a[i]+b[i]<<endl;
    }
    return 0;
}
