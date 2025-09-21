#include<bits/stdc++.h>
using namespace std;
int question(int n,int p){
    int c=0,s;
    int a[n];
    for (int i=0;i<n;i++){
        int in;
        cin>>in;
        a[i]=in;
        if (i==p-1)s=in;
    }
    for (int i=0;i<n;i++){
        if (a[i]>=s &&a[i]!=0) c++;
    }
    return c;
}
int main(){
    int n,pos;
    cin>>n>>pos;
    cout<<(question(n,pos));
    return 0;
}