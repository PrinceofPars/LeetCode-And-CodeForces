#include<bits/stdc++.h>
using namespace std;
void question(int n){
    string a;
    cin>>a;
    int l=0,r=n-1;
    while(l<r){
        if(a[l]=='0' and a[r]=='1'){
            l++;
            r--;
        }
        else if(a[l]=='1' and a[r]=='0'){
            l++;
            r--;
        }
        else{
            break;
        }
    }
    cout<<r-l+1<<endl;
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