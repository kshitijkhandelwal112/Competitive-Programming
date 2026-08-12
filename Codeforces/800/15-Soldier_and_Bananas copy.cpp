#include <iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int TotalCost=w*k*(w+1)/2;
    if (n>=(TotalCost)){
        cout<<0<<endl;
    }else{
        cout<<TotalCost-n<<endl;
        // I am mad idk WHY did I complicate it very very much...........
        // He simply want's the extra money that he didn't have and not money corresponding to extra bananas.
        // I thought that after a certain number of bananas remaining cost would be shifted to friend.
        // but rather that certain number of bananas was also not required to be calculated.
    }
    return 0;
}