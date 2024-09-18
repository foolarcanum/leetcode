class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=0;
        int size=nums.size();
        int mini=size+1;
        while(j<size){
            sum+=nums[j];
            while(sum>=target){
                if(mini==1){return mini;}
                sum-=nums[i];
                mini=min(mini,j-i+1);
                i++;
            }
            j++;
        }
        if(mini==size+1){return 0;}
        return mini;
    }
};