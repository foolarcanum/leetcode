class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        if(k==0||size==1){return;}
        vector<int>hold;
        k=k%size;
        for(int n=0;n<k;n++){
            hold.push_back(nums.at(size-k+n));
        }
        for(int n=0;n<size-k;n++){
            hold.push_back(nums[n]);
        }
        nums.swap(hold);
        hold.clear();
    }
};