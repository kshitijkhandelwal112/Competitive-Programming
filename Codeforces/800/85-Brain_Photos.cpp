#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char grid[n][m];
    int colour=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
            // Chatgpt suggested that instead of making a variable length array/grid, better to simply replace grid[i][j] by 'x'. No need to form array here.
            if (grid[i][j]!='W' && grid[i][j]!='B'&& grid[i][j]!='G'){
                colour++;
            }
        }
    }
    if(colour>0){
        cout<<"#Color"<<endl;
    }else{
        cout<<"#Black&White"<<endl;
    }
    return 0;
}