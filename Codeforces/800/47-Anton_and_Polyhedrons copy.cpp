#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str[n];
    for (int i=0;i<n;i++){
        cin>>str[i];
    }
    int faces=0;
    for (int i=0;i<n;i++){
        if (str[i]=="Tetrahedron"){
            faces = faces+4;
        }else if(str[i]=="Octahedron"){
            faces = faces+8;
        }else if(str[i]=="Cube"){
            faces = faces+6;
        }else if(str[i]=="Dodecahedron"){
            faces = faces+12;
        }else if(str[i]=="Icosahedron"){
            faces = faces+20;
        }
    }
    cout<<faces<<endl;
    return 0;
}