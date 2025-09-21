#include<bits/stdc++.h>
using namespace std;
void question(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sarr[size];
    for(int i=0;i<size;i++){
        sarr[i]=arr[i];
    }
    sort(sarr,sarr+size);
    int l1=0,l2=0;
    while(l1<size){
        if((arr[l1]%2==0)and (sarr[l2]%2==0)){
            l1++;
            l2++;
        }
        else if((arr[l1]%2!=0)and (sarr[l2]%2!=0)){
            l1++;
            l2++;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        question();
    }
    return 0;
}