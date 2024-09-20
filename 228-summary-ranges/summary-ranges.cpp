class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> output;
        string range="";
        for(int i=0;i<nums.size();i++){
            if(i+1==nums.size()){
                range+=to_string(nums[i]);
                output.push_back(range);
                return output;
            }
            if(nums[i+1]==nums[i]+1){
                if(range==""){range=to_string(nums[i])+"->";}
            }
            else if(nums[i+1]==nums[i]){continue;}
            else{
                range+=to_string(nums[i]);
                output.push_back(range);
                range="";
            }
        }
        return output;
    }
};