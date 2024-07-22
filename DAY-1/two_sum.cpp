#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> a;
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
            if(nums[i]+nums[j]==target){
                a.push_back(i);
                a.push_back(j);
            }
            }
        }
        return a;
    }
};
int main(){
    Solution s;
    vector<int> nums={2,7,11,15};
    int target=9;
    vector<int> a=s.twoSum(nums,target);
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
        }
        cout<<endl; 
    return 0;
}