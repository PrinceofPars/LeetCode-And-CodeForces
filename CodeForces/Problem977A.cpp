#include <bits/stdc++.h>
using namespace std;
void question(int n,int k){
    int count=0;
    for (int i=0;i<k;i++){
        if (n%10==0) n/=10;
        else n--;
    }
    cout<<n;
}
int main(){
    int n,k;
    cin>>n>>k;
    question(n,k);
    return 0;
}