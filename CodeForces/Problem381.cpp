#include<bits/stdc++.h>
using namespace std;
void question(int a[],int n){
    int s1=0,s2=0;
    int *f,*r;
    f=a;
    r=a+n-1;
    int c=0;
    while(f<=r){
        if (c==0){
            if(*f>=*r){
                s1+=*f;
                f++;
            }
            else{
                s1+=*r;
                r--;
            }
            c=1;
        }
        else{
            if(*f>=*r){
                s2+=*f;
                f++;
            }
            else{
                s2+=*r;
                r--;
            }
            c=0;
        }
    }
    cout<<s1<<" "<<s2;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    question(a,n);
    return 0;
}