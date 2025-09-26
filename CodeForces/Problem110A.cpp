#include <bits/stdc++.h>
using namespace std;
int lucky(int n){
    if (n==0) return 0;
    while(n){
        if (n%10==4 or n%10==7);
        else{
            return 0;
        }
        n/=10;
    }
    return 1;
}
void question(long long int n){
    int count=0;
    while(n){
        if (n%10==4 or n%10==7) count++;
        n/=10;
    }
    if (lucky(count))cout<<"YES";
    else cout<<"NO";
}
int main(){
    long long int n;
    cin>>n;
    question(n);
    return 0;
}