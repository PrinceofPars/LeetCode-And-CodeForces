#include <bits/stdc++.h>
using namespace std;
void question(string s,int n){
    if (n>1){
        int count=0;
        for (int i=0;i<n-1;i++){
                if (s[i]==s[i+1]) count++;
        }
        cout<<count<<endl;
        return;
    }
    else cout<<0<<endl;
}
int main(){
    int n;
    string s;
    cin>>n>>s;
    question(s,n);
    return 0;
}