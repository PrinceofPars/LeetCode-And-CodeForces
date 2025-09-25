#include <bits/stdc++.h>    
using namespace std;

int main(){
    float a,b;
    cin>>a>>b;
    float ans=(log(b/a)/log(1.5));
    if (ans==ceil(ans)) cout<<ans+1<<endl;
    else cout<<ceil(ans)<<endl;
    return 0;
}