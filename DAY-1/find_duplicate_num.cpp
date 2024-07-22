#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int flag;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-1; i++){
          if(nums[i]==nums[i+1]){
            flag=nums[i];
            break;
          }
        }
        return flag;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,3,4,2,2};
    cout<<s.findDuplicate(nums);
    

    return 0;
}