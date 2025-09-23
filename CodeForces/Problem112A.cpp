#include<bits/stdc++.h>
using namespace std;
int question(string s1,string s2){
    int n=s1.length();
    int diff=0;
    int c1,c2;
    for(int i=0;i<n;i++){
        if (s1[i]>='a' and s1[i]<='z') c1=s1[i]-'a';
        else c1=s1[i]-'A';
        if (s2[i]>='a' and s2[i]<='z') c2=s2[i]-'a';
        else c2=s2[i]-'A';
        diff+=c1-c2;
        // cout<<diff<<" ";
        if (diff>0) return 1;
        else if (diff<0) return -1;
    }
    cout<<endl;
    return 0;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<question(s1,s2);
    return 0;
}