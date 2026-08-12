#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string snake(m,'#');
    string blank1(m-1,'.');
    string blank2 = "#";
    for(int i=0;i<n;i++){
        if (i%2==0){
            cout<<snake<<endl;
        }else if((i+1)%4==0){
            cout<<blank2+blank1<<endl;
        }else{
            cout<<blank1+blank2<<endl;
        }
    }
    return 0;
}