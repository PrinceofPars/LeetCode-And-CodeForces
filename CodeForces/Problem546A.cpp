#include <bits/stdc++.h>
using namespace std;
int question(int cost,int ini,int number){
    int borrow=0;
    int count=1,tc=0;
    while(count<=number){
        tc+=count*cost;
        count++;
    }
    return tc>ini?tc-ini:0;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<question(a,b,c);
    return 0;
}