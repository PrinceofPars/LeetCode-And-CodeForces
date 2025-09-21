#include<bits/stdc++.h>
using namespace std;
void question(){
    string tc,res;
    int size;
    cin>>size>>tc;
    int l=1;
    char c=tc[0];
    while (l<size){
        if (tc[l++]!=c){}
        else {
            res.push_back(c);
            c=tc[l++];
        }
    }
    cout<<res<<endl;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        question();
    }
    return 0;
}