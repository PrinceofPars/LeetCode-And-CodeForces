#include <bits/stdc++.h>
using namespace std;
void question(string n){
    int count=0;
    char prev='0';
    for(char i:n){
        if (prev==i) count++;
        else {
            prev=i;
            count=1;
        }
        // cout<<count<<" "<<i<<endl;
        if(count==7){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";

}
int main(){
    string n;
    cin>>n;
    question(n);
    return 0;
}