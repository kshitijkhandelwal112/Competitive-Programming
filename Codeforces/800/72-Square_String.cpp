#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string str[t];
    for (int i=0;i<t;i++){
        cin>>str[i];
    }
    // AI taught me the usage of text.substr(starting_position.length_of_substring) to access a specific portion of a string.
    for (int i=0;i<t;i++){
        if (str[i].length()%2!=0){
            cout<<"NO"<<endl;
        }else if(str[i].substr(0,(str[i].length())/2)==str[i].substr((str[i].length())/2,str[i].length()/2)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}