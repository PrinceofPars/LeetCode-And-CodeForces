#include <bits/stdc++.h>
using namespace std;
void question(int n,int t){
    int in;
    string s,ps;
    cin>>s;
    while(t--){
        ps=s;
        for(int i=0;i<n-1;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
        if (ps==s) break;
    }
    cout<<s<<endl;
}
int main(){
    int n,t;
    cin>>n>>t;
    question(n,t);
    return 0;
}