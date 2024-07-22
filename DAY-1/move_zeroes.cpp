#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int n=nums.size();
         int j=0;
         for(int i=0; i<n; i++){
            if(nums[i]!=0){
                      nums[j]=nums[i];
                      j++;
            }
         }
         for(int i=j; i<n; i++){
            nums[i]=0;
         }
         cout<<"[";
         for(int i=0; i<n; i++){
            cout<<nums[i]<<",";
         }
         cout<<"]";
    }
};
int main(){
    Solution s;
    vector<int> nums={0,1,0,3,12};
    s.moveZeroes(nums);
    return 0;
    
}