#include <bits/stdc++.h>
using namespace std;
void question(int a){
    int count=0;
    while (a>0){
        if (a>=5) a-=5;
        else if (a>=4) a-=4;
        else if (a>=3) a-=3;
        else if (a>=2) a-=2;
        else if (a>=1) a-=1;
        count++;
    }
    cout<<count<<endl;
}
int main(){
    int n;
    cin>>n;
    question(n);
    return 0;
}