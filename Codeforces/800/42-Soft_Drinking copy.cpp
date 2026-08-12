#include <iostream>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    /*  n friends
        k soft drink bottles
        l millilitres
        c limes
        d slices of each
        p grams salt

        // For Toast
        nl millilitres of soft drink req
        1 slice lime req
        np grams of salt
        To find: Number of toasts each friend can make.
    */
    int e = c*d; // total number of slices of lime
    int f = k*l; // total volume of soft drinks
    // total salt is p grams
    int i=0;
    while(e>=n && f>=(n*nl) && p>=(n*np)){
        // My mistake: I took e>0, f>0, p>0 here, so there might be case when initially they're greater than 0 but not enough for making 1 toast for all students.
        f = f-(n*nl);
        e = e-n;
        p = p-(n*np);
        i++;
    }
    cout<<i<<endl;
    return 0;
}