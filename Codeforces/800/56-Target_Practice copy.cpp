#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string str[t][10];
    for(int i=0;i<t;i++){
        for(int j=0;j<10;j++){
            cin>>str[i][j];
        }
    }
    // int points=0; is NOT to be done because this would be then added for all test cases.
    for(int i=0;i<t;i++){
        int points = 0;
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                if(str[i][j][k]=='X'){
                    if(k<5 && j<5 && k<=j){
                        points = points + (k+1);
                    }else if(k<5 && j<5 && j<=k){
                        points = points + (j+1);
                    }else if(k>=5 && j>=5 && k>=j){
                        points = points + (10-k);
                    }else if(k>=5 && j>=5 && k<=j){
                        points = points + (10-j);
                    }else if(k<5 && j>=5 && (k<=(9-j))){
                        points = points + (k+1);
                    }else if(k<5 && j>=5 && (k>=(9-j))){
                        points = points + (10-j);
                    }else if(k>=5 && j<5 && (j<=(9-k))){
                        points = points + (j+1);
                    }else if(k>=5 && j<5 && (j>=(9-k))){
                        points = points + (10-k);
                    }
                        
                    }
                }
            }
            cout<<points<<endl;
        }
    return 0;
}