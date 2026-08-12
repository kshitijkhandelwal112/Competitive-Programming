#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    for(int i=1; i<=n; i++){
    string s;
    cin>> s;
    if (s=="++X"){
        ++x;
    }else if(s=="--X"){
        --x;
    }else if(s=="X++"){
        x++;
    }else if(s=="X--"){
        x--;
    }
    }
    cout<<x<<endl;
    return 0;
}