class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size=numbers.size();
        int i=0;
        int j=size-1;
        while(true){
            if(numbers[i]+numbers[j]==target){return {i+1,j+1};}
            else if(numbers[i]+numbers[j]>target){j--;}
            else{i++;}
        }
        return {-1,-1};
    }
};