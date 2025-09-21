#include<bits/stdc++.h>
using namespace std;
int question(){
    int size;
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    int l,r;
    l=r=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]==r+1){
            r++;
        }
        else if(arr[i]==l-1){
            l--;
        }
        else{
            return 1;
        }
    }
    return 0;      
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(question()){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}