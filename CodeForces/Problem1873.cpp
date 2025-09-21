#include<bits/stdc++.h>
using namespace std;
void question(){
    string tc;
    int size, ite;
    cin>>size>>ite;
    cin>>tc;
    int l=0;
    int ans=0;
    while(l<size){
        if(tc[l]=='B') {
            ans++;
            l+=ite;
        }
        else l++;
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