class TimeMap {
public:
  unordered_map<string,map<int,string>> mp;
    TimeMap() {}
    
    void set(string key, string v, int time) {
        mp[key][time]=v;
    }
    
    string get(string key, int time) {
        auto& m=mp[key];
        auto it=m.upper_bound(time);
        if(it==m.begin())return "";
        return prev(it)->second;

    }
};
