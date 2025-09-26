#include <bits/stdc++.h>
using namespace std;
void question(string a){
    int u=0,l=0;
    for (int i=0;i<a.size();i++){
        if (a[i]>='A' and a[i]<='Z') u++;
        else l++;
    }
    if (u>l){
        transform(a.begin(),a.end(),a.begin(),::toupper);
        cout<<a;
    }
    else {
        transform(a.begin(),a.end(),a.begin(),::tolower);
        cout<<a;
    }
}
int main(){
    string a;
    cin>>a;
    question(a);
    return 0;
}