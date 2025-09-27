#include <bits/stdc++.h>
using namespace std;
void question(int n){
    int prev;
    int count=1,m=0;
    for(int i=0;i<n;i++){
        int in;
        cin>>in;
        if (i==0) prev=in;
        else {
            if (in>=prev) count++;
            else {
                m=max(m,count);
                count=1;
            }
        }
        prev=in;
    }
    cout<<max(m,count);
}

int main(){
    int n;
    cin>>n;
    question(n);
    return 0;
}
