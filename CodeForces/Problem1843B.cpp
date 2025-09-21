#include<bits/stdc++.h>
using namespace std;
void question(){
    int size;
    cin>>size;
    int arr[size];
    long long int ans=0;
    int c=0,negative=0;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        ans+=abs(arr[i]);
    }
    int l=0;
    while(l<size){
        if (arr[l] < 0) {
            c++;
            while (l < size && arr[l] <= 0) l++;
        }
        else{
        l++;
        }
    }

    cout<<ans<<" "<<c<<endl;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        question();
    }
    return 0;
}