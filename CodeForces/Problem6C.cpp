#include<bits/stdc++.h>
using namespace std;
void question(int n){
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // To tired today to think of a better approach
    // i am trying to use two pointer approach but itdoesnt loook good tbh
    int l=-1,r=n;
    int lsum=0,rsum=0;
    while(l<r-1){
        while(lsum==rsum){
            if (l==r-2){
                l++;
                lsum+=arr[l];
                break;
            }
            l++;
            r--;
            lsum+=arr[l];
            rsum+=arr[r];
            if (l>=r-1)break;
        }
        while (lsum<rsum && l<r-1){
            l++;
            lsum+=arr[l];
        }
        while (rsum<lsum && l<r-1){
            r--;
            rsum+=arr[r];
        }
    }
    if (l==r){
        lsum+=arr[l];
    }
    cout<<l+1<<" "<<n-r<<endl;
}
int main(){
    int x;
    cin>>x;
    question(x);
}