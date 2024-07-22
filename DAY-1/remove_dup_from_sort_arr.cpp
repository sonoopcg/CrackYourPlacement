#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if (n==0) return 0;
        int  j=1;
        for(int i=1; i<n; i++){
            if(nums[i]!=nums[i-1]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};
int main(){
    Solution s;
    vector<int> nums={0,0,1,1,1,2,2,
    3,3,4};
    cout<<s.removeDuplicates(nums);
    return 0;
}