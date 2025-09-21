#include<bits/stdc++.h>
using namespace std;
int question(int n){
    int c=0;
    for (int i=0;i<n;i++){
        string a;
        cin>>a;
        if (a.find("+")<=a.length()) c++;
        else c--;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    cout<<(question(n));

    return 0;
}