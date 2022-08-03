class MyCalendar {
public:
     map<int,int> times;
    MyCalendar() {
        
    }
    bool book(int start, int end) {
       auto t=times.lower_bound(start);
        cout<<(*t).first<<(*t).second;
        if(t!=times.end() && (t->first == start || t->first < end))
            return false;
        if(t !=times.begin())
        {
            --t;
            if(t->second > start)
                return false;
        }
        times[start] = end;
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */