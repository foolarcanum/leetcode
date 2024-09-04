class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size=citations.size();
        for(int i=size;i>=0;i--){
            int check=0;
            for(int j=0;j<size;j++){
                if(citations[j]>=i){
                    check++;
                }
                if(check==i){
                    return i;
                }
            }
        }
        return 0;
    }
};