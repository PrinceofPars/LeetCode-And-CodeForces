#include <bits/stdc++.h>
using namespace std;
void question(int a){
    int in=0,out=0,cur=0;
    int m=0;
    for(int i=0;i<a;i++){
        cin>>out>>in;
        cur+=in-out;
        m=max(m,cur);
    }
    cout<<m;
}
int main(){
    int a;
    cin>>a;
    question(a);
    return 0;
}