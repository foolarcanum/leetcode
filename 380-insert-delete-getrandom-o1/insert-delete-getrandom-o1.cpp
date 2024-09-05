class RandomizedSet {
public:
    unordered_map<int,int>umap;
    int size;
    RandomizedSet() {
        size=0;
    }
    
    bool insert(int val) {
        if(umap.count(val)!=0){return false;}
        umap[val]=val;
        size++;
        return true;
    }
    
    bool remove(int val) {
        if(umap.count(val)==0){return false;}
        umap.erase(val);
        size--;
        return true;
    }
    
    int getRandom() {
        return next(umap.begin(),rand()%size)->first;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */