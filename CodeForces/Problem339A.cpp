#include <bits/stdc++.h>
using namespace std;
void sol(string a){
    int n=a.length()/2+1;
    int arr[n];
    for(int i=0;i<a.length();i++){
        if(i%2==0){
            arr[i/2]=a[i]-'0';
        }
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
        if(i!=n-1){
            cout<<"+";
        }
    }
}
int main(){
    string math;
    cin>>math;
    sol(math);
    return 0;
}