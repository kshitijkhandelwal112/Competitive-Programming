#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    int min = A[0];
    int B[N];
    int max=0;
    for(int i=0;i<N;i++){
        if(A[i]<0){
            B[i]=A[i]*(-1);
        }else{
            B[i]=A[i];
        }
    }
    int minimum=B[0];
    for(int i=1;i<N;i++){
        if(B[i]<minimum) minimum=B[i];
    }
    cout<<minimum<<endl;
    return 0;
}
/* BEST SOLUTION GIVEN BY AI
#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int answer = 1000000;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;

        answer = min(answer, abs(x));
    }

    cout << answer << endl;

    return 0;
}
*/