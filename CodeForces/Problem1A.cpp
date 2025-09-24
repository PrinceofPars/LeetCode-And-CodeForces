#include <iostream>
using namespace std;
void question(int m,int n,int a){
    long long int ans=0;
    if (m%a==0) ans+=m/a;
    else ans+=m/a+1;
    if (n%a==0) ans*=n/a;
    else ans*=n/a+1;
    cout<<ans;
}
int main(){
    int m,n,a;
    cin>>m>>n>>a;
    question(m,n,a);
    return 0;
}