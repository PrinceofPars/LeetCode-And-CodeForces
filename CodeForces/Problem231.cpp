#include<bits/stdc++.h>
using namespace std;
int question(int n){
    int c=0;
    for (int i=0;i<n;i++){
        int q=0;
        for (int j=0;j<3;j++){
            int ans;
            cin>>ans;
            if (ans) q++;
        }
        if (q>=2)c++;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    cout<<(question(n));

    return 0;
}