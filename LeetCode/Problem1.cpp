#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        vector <pair <int,int> >nums1;
        for (int i=0;i<nums.size();i++){
            nums1.push_back({nums[i],i});
        }
        int f=0;
        int r=nums1.size()-1;
        sort(nums1.begin(),nums1.end());
        while(f<r){
            if (nums1[f].first+nums1[r].first>target) r--;
            else if (nums1[f].first+nums1[r].first<target) f++;
            else {vector<int> v;
                v.push_back(nums1[f].second);
                v.push_back(nums1[r].second);
                return v;
            }
           
        }
         return {};
}
int main(){
    int n,target;
    cin>>n>>target;
    vector<int> nums(n);
    for (int i=0;i<n;i++) cin>>nums[i];
    vector<int> ans=twoSum(nums,target);
    for (int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}