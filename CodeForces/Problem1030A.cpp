#include <bits/stdc++.h>
using namespace std;
void question(int a){
    int in;
    for (int i=0;i<a;i++){
        cin>>in;
        if (in==1) {
            cout<<"HARD";
            return;
        }
    }
    cout<<"EASY";
}
int main(){
    int a;
    cin>>a;
    question(a);
    return 0;
}