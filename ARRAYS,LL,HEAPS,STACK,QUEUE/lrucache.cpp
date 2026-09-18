/*class LRUCache {
public:
        list<int>l;
        unordered_map<int,int>mp;
        int capacity;
    LRUCache(int capacity) {
        this->capacity=capacity;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            l.remove(key);
            l.push_front(key);
            return mp[key];
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.size()!=0){
            if(mp.find(key)!=mp.end()){
                l.remove(key);
                l.push_front(key);
                mp[key]=value;
                return;
            }
        }
        if(l.size()<capacity){
            l.push_front(key);
            mp[key]=value;
        }
        else{
            l.push_front(key);
            mp[key]=value;
            int m=l.back();
            l.pop_back();
            mp.erase(m);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */