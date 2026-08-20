#include <iostream>
using namespace std;
int main(){
    int grid[5][5];
    int xops=0,yops=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>grid[i][j];
            if(grid[i][j]==1){
                if(i>=2) xops=(i-2);
                else xops=(2-i);
                if(j>=2) yops=(j-2);
                else yops=(2-j);
            }
        }
    }
    cout<<xops+yops<<endl;
    return 0;
}