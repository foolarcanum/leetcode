class Solution {
public:
    bool canJump(vector<int>& nums) {
        int move=0;
        for(int n=0;n<=move;n++){
            move=max(move,n+nums[n]);
            if(move>=nums.size()-1){return true;}
        }
        return false;
    }
};