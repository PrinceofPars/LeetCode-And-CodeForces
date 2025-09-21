#include<bits/stdc++.h>
using namespace std;
int reverse(int x) {
        int power=0;
        long int ans=0;
        int ite;
        while(x){
            ite=(x%10);
            ans=ans*10+ite;
            x/=10;
        }
        if (ans>INT_MAX or ans<INT_MIN) return 0;
        return (int)ans;
}
int main(){
    int x;
    cin>>x;
    cout<<reverse(x);
}