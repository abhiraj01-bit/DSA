/*leetcode
class CustomStack {
public:
vector<int>arr;
int maxSize;
    CustomStack(int maxSize) {
        this->maxSize=maxSize;
    }
    
    void push(int x) {
        if(arr.size()<maxSize){
            arr.push_back(x);
        }
    }
    
    int pop() {
        if(arr.size()!=0){
            int n=arr.back();
            arr.pop_back();
            return n;
        }
        else{
            return -1;
        }
    }
    
    void increment(int k, int val) {
        int x=arr.size();
        int mini=min(k,x);
        for(int i=0;i<mini;i++){
            arr[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */