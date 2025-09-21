#include<bits/stdc++.h>
using namespace std;
void question(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int ans=0;
    sort(arr,arr+size);
    int l=0,r=size-1;
    while (l<r){
        ans+=arr[r--]-arr[l++];
    }
    cout<<ans<<endl;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        question();
    }
    return 0;
}