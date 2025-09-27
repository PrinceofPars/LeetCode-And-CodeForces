#include <bits/stdc++.h>
using namespace std;
void question(){
    long long int n,k;
    cin>>n>>k;
    long long int mid;
    if (n%2==0) mid=n/2;
    else mid=n/2+1;
    if (k<=mid) cout<<2*k-1;
    else cout<<2*(k-mid);
}
int main(){
    question();
    return 0;
}