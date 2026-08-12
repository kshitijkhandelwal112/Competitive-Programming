#include <iostream>
// I couldn't crack this method, although it is simple, but I went much complicated and thought
// that this method might not be good (without trying, although I thought of this method)
using namespace std;
int main(){
    int n;
    cin>>n;
    while(true){
        n++;
        int a = (n-(n%1000))/1000; // Thousand Digit // This is my method of getting any digit.
        int b = (n/100)%10; // Hundreds Digit // This is correct method of getting any digit.
        int c = (n/10)%10; // Tens Digit
        int d = n%10; //Ones Digit
        if (a!=b && b!=c && c!=d && d!=a && a!=c && b!=d){
            cout<<n<<endl;
            break;
            return 0;
        }
    }
}