#include <bits/stdc++.h>
using namespace std;
void question(){
   long long int a,b;
   cin>>a>>b;
//    vector <long long int> factors;
//    for(long long int i=1;i<=sqrt(b);i++){
//         if (b%i==0) {
//             factors.push_back(i);
//             factors.push_back(b/i);
//         }
//    }
//    for(auto i:factors){
//         sum=a*(b/i)+i;
//         if(sum%2==0) m_even=max(m_even,sum);
//    }
   long long int m_even=-1;
   long long int sum=0;
   long long int d1,d2;
    for(long long int i = 1; i*i <= b && i<1000000; i++){
        if(b % i == 0){
            d1 = i;
            d2 = b / i;
            sum = a*(b/d1) + d1;
            if(sum % 2 == 0) m_even = max(m_even, sum);
            sum = a*(b/d2) + d2;
            if(sum % 2 == 0) m_even = max(m_even, sum);
        }
    }
   cout<<m_even<<endl;
}

int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++) question();
    return 0;
}
