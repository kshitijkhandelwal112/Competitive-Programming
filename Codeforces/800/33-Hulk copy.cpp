#include <iostream>
#include <string>
using namespace std;
string f(int n){
    string h="I hate";
    string l="I love";
    string it=" it";
    string that=" that ";
    string cd = h+that+l;
    string A="";
    if (n==1){
        return h+it;
    }else if(n==2){
        return cd+it;
    }else{
        if (n%2!=0){
            for(int i=1;i<=n/2;i++){
            A = A+cd+that;
        }return A+h+it;
        }else{
            for (int i=1;i<n/2;i++){
                A=A+cd+that;
            }return A+h+that+l+it;
        }
    }
}


/*
        for(int i=1;i<=n/2;i++){
            A = A+cd+that;
        }
        if (n%2!=0){
           // cout<<h+it<<endl;
           return A+h+it;
        }else{
           // cout<<l+it<<endl;
           return A+l+it;
        }
    }
} */
int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}