class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size=citations.size();
        sort(citations.begin(),citations.end());
        for(int i=0;i<size;i++){
            if(size-i<=citations[i]){
                return size-i;
            }
        }
        return 0;
    }
};