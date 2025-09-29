#include <bits/stdc++.h>
using namespace std;
long long int question(){
    int n,k;
    cin>>n>>k;
    vector <long long int> p;
    vector <int> d;
    long long int a;
    cout<<n<<" "<<k<<endl;
    for (int i=0;i<n;i++){
        cin>>a;
        p.push_back(a);
    }
    for (int i=0;i<k;i++){
        cin>>a;
        d.push_back(a);
    }
    sort(p.begin(),p.end());
    sort(d.begin(),d.end());
    int l=0,r=p.size()-1;
    long long int cost=0;
    while(r>=0 and l<d.size()){
        cout<<"   "<<cost<<r<<endl;
        for(int i=0;i<d[l]-1;i++){
            cout<<"      "<<p[r]<<endl;
            if (r<0) continue;
            cost+=p[r--];
        }
        r--;
        l++;
    }
    while(r>=0){
        cout<<"   "<<cost<<r<<endl;
        cost+=p[r--];
    }
    return cost;
}

int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++) cout<< question()<<endl;
    return 0;
}
