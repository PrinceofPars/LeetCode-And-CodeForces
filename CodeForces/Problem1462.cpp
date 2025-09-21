#include<bits/stdc++.h>
using namespace std;
void question(int n){
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,r=n-1;
    while(l<=r){
        cout<<arr[l++]<<" ";
        if (r>=l) cout<<arr[r--]<<" ";
    }
    cout<<endl;
}
int main(){
    int n,length;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>length;
        question(length);
    }
    return 0;
}