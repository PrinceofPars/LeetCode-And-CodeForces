#include <bits/stdc++.h>
using namespace std;
void question(int a){
    unordered_map<int,int> mpp;
    a++;
    while(a<9013){  
        int temp=a;      
        for(int i=0;i<4;i++){
            int rem=temp%10;
            temp/=10;
            if (mpp[rem]==0) mpp[rem]++;
            else break;
        }
        if (mpp.size()==4) {
            cout<<a;
            break;
        }
        else {
            mpp.clear();
            a++;
        }
    }
}
int main(){
    int a;
    cin>>a;
    question(a);
    return 0;
}