class UndergroundSystem {
public:
    /*
        LEARN DESIGN AND HASHSET
    */
    unordered_map<int,pair<string,int>>ci; 
    unordered_map<string,pair<int,int>> co;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        ci[id] = {stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto cIn = ci[id];
        ci.erase(id);
        string route = cIn.first + "_" + stationName;
        co[route].first += t - cIn.second;
        co[route].second += 1; 
    }
    
    double getAverageTime(string startStation, string endStation) {
        string route  = startStation + "_" + endStation;
        auto time = co[route];
        return (double)time.first/time.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */