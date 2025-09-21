#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
        unordered_map<char,pair<int,int>> mpp;
        int len,max=0,f=0;
        for (int i=0;i<s.length();i++){
            if (mpp[s[i]].second==0){
                mpp[s[i]]={i,1};
            }
            else{
                if (f<(mpp[s[i]].first+1)) f=mpp[s[i]].first+1;
                mpp[s[i]].first=i;
            }
            if (max<(i-f+1)) max=i-f+1;
        }
        return max;
    }
int main(){
    string s;
    getline(cin,s);
    cout<<lengthOfLongestSubstring(s);
}