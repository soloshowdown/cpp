//move zeros
//leetcode 283
class Solution {
public:
    vector<int> moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }

        if(j==-1) return nums;

        for(int i=j+1;i<n;i++){
            if(nums[i] !=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return nums;
    }

};
