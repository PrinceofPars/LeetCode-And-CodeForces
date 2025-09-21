#include<bits/stdc++.h>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    vector <int> vec1,vec2,vec;
    while (l1!=NULL){
        vec1.push_back(l1->val);
        l1=l1->next;
    }
    while (l2!=NULL){
        vec2.push_back(l2->val);
        l2=l2->next;
    }
    int carry=0,pus;
    for(int i=0 ,j=0;((i<vec1.size())||(j<vec2.size())||carry!=0);i++,j++){
        if (j>=vec2.size() && i<vec1.size()) {
            pus=(vec1[i]+carry)%10;
            carry=(vec1[i]+carry)/10;
            vec.push_back(pus);
        }
        else if (i>=vec1.size() && j<vec2.size()){
            pus=(vec2[j]+carry)%10;
            carry=(vec2[j]+carry)/10;
            vec.push_back(pus);
        }
        else if(i<vec1.size() && j<vec2.size()) {
            pus=(vec1[i]+vec2[j]+carry)%10;
            carry=(vec1[i]+vec2[j]+carry)/10;
            vec.push_back(pus);
            }
        else {
            vec.push_back(carry);
            carry=0;
        }
    }
    ListNode *head =nullptr;
    ListNode *cur=nullptr;
    for(int i=0;i<vec.size();i++){
        ListNode* temp1=new ListNode(vec[i],NULL);
        if (head==nullptr){
            head=temp1;
            cur=temp1;
            continue;
        }
        cur->next=temp1;
        cur=temp1;
    }
    return head;
    }
int main(){
    int n,m;
    cin>>n>>m;
    ListNode *l1=nullptr;
    ListNode *l2=nullptr;
    ListNode *cur1=nullptr;
    ListNode *cur2=nullptr;
    for (int i=0;i<n;i++){
        int x;cin>>x;
        ListNode* temp1=new ListNode(x,NULL);
        if (l1==nullptr){
            l1=temp1;
            cur1=temp1;
            continue;
        }
        cur1->next=temp1;
        cur1=temp1;
    }
    for (int i=0;i<m;i++){
        int x;cin>>x;
        ListNode* temp2=new ListNode(x,NULL);
        if (l2==nullptr){
            l2=temp2;
            cur2=temp2;
            continue;
        }
        cur2->next=temp2;
        cur2=temp2;
    }
    ListNode* ans=addTwoNumbers(l1,l2);
    while(ans!=NULL){
        cout<<ans->val<<" ";
        ans=ans->next;
    }
}