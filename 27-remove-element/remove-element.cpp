class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int n=0;n<nums.size();n++){
            if(nums[n]==val){
                nums.erase(nums.begin()+n);
                n--;
            }
        }
        return nums.size();
    }
};