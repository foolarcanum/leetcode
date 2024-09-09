class Solution {
public:
    int candy(vector<int>& ratings) {
        int size=ratings.size();
        int candy=size;
        int i=1;
        while(i<size){
            if(ratings[i]==ratings[i-1]){
                i++;
                continue;
            }
            int peak=0;
            while(ratings[i]>ratings[i-1]){
                peak++;
                candy+=peak;
                i++;
                if(i==size){return candy;}
            }
            int valley=0;
            while(i<size&&ratings[i]<ratings[i-1]){
                valley++;
                candy+=valley;
                i++;
            }
            candy-=min(peak, valley);
        }
        return candy;
    }
};