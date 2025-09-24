#include <bits/stdc++.h>
using namespace std;
void gender(string a){
    unordered_map<int,int> m;
    int count=0;
    for(int i=0;i<a.length();i++){
        if(m[a[i]]==0){
            count++;
            m[a[i]]++;
        }
    }
    if (count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}
int main(){
    string name;
    cin>>name;
    gender(name);
    return 0;
}