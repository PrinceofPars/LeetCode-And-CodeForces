#include<bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int n=nums1.size(),m=nums2.size();
        vector<int> nums;
        while(n>i and m>j){
            if (nums1[i]<=nums2[j]) nums.push_back(nums1[i++]);
            else nums.push_back(nums2[j++]);
        }
        while(i<n) nums.push_back(nums1[i++]);
        while(j<m) nums.push_back(nums2[j++]);
        int total=n+m;
        if (total%2==0){
            return (nums[total/2]+nums[total/2-1])*1.0/2;
        }
        return nums[total/2];
    }
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> nums1(n),nums2(m);
    for (int i=0;i<n;i++) cin>>nums1[i];
    for (int i=0;i<m;i++) cin>>nums2[i];
    cout<<findMedianSortedArrays(nums1,nums2);
}