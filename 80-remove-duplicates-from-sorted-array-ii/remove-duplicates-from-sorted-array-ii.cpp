class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int hold=nums[0];
        for(int i=1;i<nums.size();i++){
            if(hold==nums[i]&&i+1<nums.size()&&hold==nums[i+1]){
                nums.erase(nums.begin()+i+1);
                i--;
            }
            else{
                hold=nums[i];
            }
        }
        return nums.size();
    }
};