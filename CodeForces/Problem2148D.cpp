#include <bits/stdc++.h>
using namespace std;
long long int question(){
    int f;
    cin>>f;
    long long int a;
    long long int sum=0;
    vector <long long int> v;
    for (int i=0;i<f;i++){
        cin>>a;
        if (a%2==1) v.push_back(a);
        else sum+=a;
    }
    if (v.size()==0) sum=0;
    else {
        sort(v.begin(),v.end());
        if( v.size()==1) {
            sum+=v[0];
            return sum;
        }
        for(int i=v.size()-1;i>=v.size()/2;i--){
            sum+=v[i];
        }
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++) cout<< question()<<endl;
    return 0;
}
