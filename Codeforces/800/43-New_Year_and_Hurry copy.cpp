#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int time = 0;
    int ProblemsSolved = 0;
    while(time<=240-k-((ProblemsSolved+1)*5) && ProblemsSolved<n){
        // AI told that in above, I needed to keep (ProblemsSolved+1)*5 and <= instead of <.
        // Before that I did many mistakes (and final solution finding was complicated for me...)
        ProblemsSolved++;
        time = time + ProblemsSolved*5;
    }
    cout<<ProblemsSolved<<endl;
    return 0;
}