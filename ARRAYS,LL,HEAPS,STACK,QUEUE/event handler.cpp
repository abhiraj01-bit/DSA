/*class EventManager {
public:
struct comparator{
    bool operator()(const pair<int,int>&a,const pair<int,int>&b)const{
        if(a.first!=b.first){
            return a.first<b.first;
        }
        return a.second>b.second;
    }
};
priority_queue<pair<int,int>,vector<pair<int,int>>,comparator>pq;
unordered_map<int,int>mp;
    EventManager(vector<vector<int>>& events) {
        for(auto &e:events){
            int i=e[0];
            int p=e[1];
            mp[i]=p;
            pq.push({p,i});
        }
    }
    void updatePriority(int eventId, int newPriority) {
        if(mp.find(eventId)!=mp.end()){
            mp[eventId]=newPriority;
        }
        pq.push({newPriority,eventId});
    }
    
    int pollHighest() {
    while(!pq.empty()){
        int i=pq.top().second;
        int p=pq.top().first;
        if(mp.find(i)!=mp.end()&&mp[i]==p){
            pq.pop();
            mp.erase(i);
            return i;
        }
        pq.pop();
    }
    return -1;
    }
};

/**
 * Your EventManager object will be instantiated and called as such:
 * EventManager* obj = new EventManager(events);
 * obj->updatePriority(eventId,newPriority);
 * int param_2 = obj->pollHighest();
 */*/