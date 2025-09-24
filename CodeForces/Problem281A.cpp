#include <bits/stdc++.h>
using namespace std;
void sol(string a){
    string b;
    b.push_back(toupper(a[0]));
    b.insert(b.end(),a.begin()+1,a.end());
    cout<<b;
}
int main(){
    string word;
    cin>>word;
    sol(word);
    return 0;
}