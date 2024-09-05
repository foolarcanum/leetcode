class RandomizedSet {
public:
    unordered_map<int,int>umap;
    vector<int>vec;
    int size;
    RandomizedSet() {
        size=0;
    }
    
    bool insert(int val) {
        if(umap.count(val)!=0){return false;}
        size++;
        vec.push_back(val);
        umap[val]=size-1;
        return true;
    }
    
    bool remove(int val) {
        if(umap.count(val)==0){return false;}
        int index=umap[val];
        int last=vec.back();
        vec[index]=last;
        vec.pop_back();
        umap[last]=index;
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