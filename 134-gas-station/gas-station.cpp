class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int size=gas.size();
        int max=0;
        int tank=0;
        int index=0;
        for(int i=0;i<size;i++){
            max+=gas[i]-cost[i];
            tank+=gas[i]-cost[i];
            if(tank<0){
                tank=0;
                index=i+1;
            }
        }
        if(max<0){return -1;}
        return index;
    }    
};