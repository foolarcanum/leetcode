class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size=nums.size();
        vector<int>product(size);
        product[0]=1;
        for(int i=1;i<size;i++){
            product[i]=product[i-1]*nums[i-1];
        }
        int right=1;
        for(int i=size-2;i>=0;i--){
            right*=nums[i+1];
            product[i]*=right;
        }
        return product;
    }
};