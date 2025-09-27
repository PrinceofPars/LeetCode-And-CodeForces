#include <bits/stdc++.h>
using namespace std;
void question(int a,int cut){
    int cur=0,temp;
    int ans=0;
    for(int i=0;i<a;i++){
        cin>>cur;
        if (cur<=cut) ans++;
        else {
            if (cur%cut==0) ans+=cur/cut;
            else ans+=cur/cut+1;
        }
    }
    cout<<ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    question(a,b);
    return 0;
}