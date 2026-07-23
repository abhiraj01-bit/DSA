/*gfg
class SpecialStack {
  public:
  stack<pair<int,int>>s;
    SpecialStack() {
        // Define Stack
    }

    void push(int x) {
        if(s.empty()){
            s.push({x,x});
        }
        else{
            if(s.top().second>x){
                int n=s.top().second;
                s.push({x,n});
            }
            else{
                s.push({x,x});
            }
        }
    }

    void pop() {
        if(!s.empty()){
            s.pop();
        }
    }

    int peek() {
        // Returns the top element
        if(!s.empty()){
            return s.top().first;
        }
        else{
            return -1;
        }
    }

    bool isEmpty() {
        if(!s.empty()){
            return false;
        }
        else{
            return true;
        }
    }

    int getMax() {
        if(!s.empty()){
            return s.top().second;
        }
        else{
            return -1;
        }
    }
};*/