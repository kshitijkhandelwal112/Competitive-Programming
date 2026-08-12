#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a=x/5;
    int b=(x-5*a)/4;
    int c=(x-5*a-4*b)/3;
    int d=(x-5*a-4*b-3*c)/2;
    int e=(x-5*a-4*b-3*c-2*d);
    cout<<a+b+c+d+e<<endl;
    return 0;
}