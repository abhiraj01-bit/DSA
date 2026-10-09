/*leetcode
class MyCalendar {
public:
set<pair<int,int>>s;
bool check(set<pair<int,int>>&s,int st,int end){
    for(auto &e:s){
        if((st<=e.first&&end>=e.second)||(st>e.first&&end<e.second)||(st>e.first&&st<e.second)||(end>e.first&&end<e.second)){
            return false;
            break;
        }
    }
    s.insert({st,end});
    return true;
}
    MyCalendar() {
        
    }
    
    bool book(int startTime, int endTime) {
        if(s.size()==0){
            s.insert({startTime,endTime});
            return true;
        }
        return check(s,startTime,endTime);
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */