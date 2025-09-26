#include <bits/stdc++.h>
using namespace std;
void question(string a,string b){
    reverse(a.begin(),a.end());
    if (a==b) cout<<"YES";
    else cout<<"NO";
}
int main(){
    string a,b;
    cin>>a>>b;
    question(a,b);
    return 0;
}