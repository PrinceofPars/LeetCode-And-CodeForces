#include<bits/stdc++.h>
using namespace std;
int myAtoi(string s) {
        int n=s.length();
        int negative=0;
        int cond=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if (s[i]=='-' and cond==0){
                negative=1;
                cond=1;
            }
            else if (s[i]=='+' and cond==0){
                negative=0;
                cond=1;
            }            
            else if('0'<=s[i] and s[i]<='9'){
                int digit = s[i] - '0';
                // Overflow check
                if (!negative && ans > (INT_MAX - digit) / 10) return INT_MAX;
                if (negative && ans > (INT_MAX - digit) / 10) return INT_MIN;
                
                ans = ans * 10 + digit;
                cond=1;
            }
            else if(('a'<=s[i] and s[i]<='z') or ('A'<=s[i] and s[i]<='Z')) break;
            else if(s[i]==' ' and cond==0);
            else break;
        }
        return negative? -ans : ans;
}
int main(){
    string s;
    getline(cin,s);
    cout<<myAtoi(s);
}