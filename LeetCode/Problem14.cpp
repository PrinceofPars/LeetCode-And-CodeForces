#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    string prefix=strs[0];
    int i=1,n=strs.size();
    if (n==0) return "";
    while(i<strs.size()){
        int l=0;
        while(l<prefix.size() and l<strs[i].size() and strs[i][l]==prefix[l]){l++;}
        prefix.erase(l,prefix.size()-l);
        if (prefix.size()==0) return "";
        i++;
    }
    return prefix;
}
int main(){
    int n;
    cin>>n;
    vector<string> strs(n);
    for(int i=0;i<n;i++){
        cin>>strs[i];
        cout<<strs[i]<<" ";
    }
    cout<<longestCommonPrefix(strs);
}