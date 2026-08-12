#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int rating[t];
    for(int i=0;i<t;i++){
        cin>>rating[i];
    }
    for (int j=0;j<t;j++){
        if (rating[j]>=1900){
            cout<<"Division 1"<<endl;
        }else if(rating[j]<1900 && rating[j]>=1600){
            cout<<"Division 2"<<endl;
        }else if(rating[j]<1600 && rating[j]>=1400){
            cout<<"Division 3"<<endl;
        }else if(rating[j]<1400){
            cout<<"Division 4"<<endl;
        }
    }
    return 0;
}