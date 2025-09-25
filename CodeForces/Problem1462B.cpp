#include <bits/stdc++.h>
using namespace std;
int sol(string a){
    int l=0,r=a.size()-1;
    string b="2020";
    int top=0, rev=3;
    int c=0;
    while (l<r and top<=rev){
        if ((a[l]==b[top]) and (a[r]==b[rev])){
            top++;
            rev--;
            r--;
            l++;
            c+=2;
        }
        else if ((a[r]==b[rev])){
            rev--;
            r--;
            c++;
        }
        else if ((a[l]==b[top])){
            top++;
            l++;
            c++;
        }
        else {
            break;
        }
    }
    if (c==4) return 1;
    else return 0;
}
int main(){
    string word;
    int n,size;
    cin>>n;

    for (int i=0;i<n;i++){
        cin>>size>>word;
        if (sol(word))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}