class Solution {
public:
    int jump(vector<int>& nums) {
        int next=0;
        int reach=0;
        int jump=0;
        while(reach<nums.size()-1){
            int move=0;
            for(int n=next;n<=reach;n++){
                move=max(move,n+nums[n]);
            }
            next=reach+1;
            reach=move;
            jump++;
        }
        return jump;
    }
};