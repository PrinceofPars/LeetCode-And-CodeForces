#include<bits/stdc++.h>
using namespace std;
string word(string a){
    int c=0;
    string res="";
    if (a.length()<=10){
        return a;
    }
    for (int i =0;i<a.length();i++){
        if (i==0) {res+=a[i];
            continue;
        }
        else if ((i==a.length()-1)) res=res+to_string(c)+a[i];
        c++;
    }
    return res;

}
int main(){
    int n;
    string x;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>x;
            
    cout<<(word(x))<<endl;}

    return 0;
}