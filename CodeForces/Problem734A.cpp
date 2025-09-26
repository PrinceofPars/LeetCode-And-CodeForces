#include <bits/stdc++.h>
using namespace std;
void question(int n,string inp){
    int a=0,d=0;
    for(char i : inp){
        if (i=='A')a++;
        else if (i=='D')d++;
    }
    if (a>d) cout<<"Anton";
    else if (a<d) cout<<"Danik";
    else cout<<"Friendship";
}
int main(){
    int n;
    string a;
    cin>>n>>a;
    question(n,a);
    return 0;
}