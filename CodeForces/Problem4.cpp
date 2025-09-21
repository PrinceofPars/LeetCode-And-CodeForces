#include<bits/stdc++.h>
using namespace std;
bool watermelon(int a){
    if (a==2){
        return false;
    }
    if (a%2==0) {
        // if ((a-a/2)%2==0)return true;
        return true;
    }
    return false;
}
int main(){
    int x;
    cin>>x;
    if (watermelon(x))cout<<"YES";
    else cout<<"NO";
}