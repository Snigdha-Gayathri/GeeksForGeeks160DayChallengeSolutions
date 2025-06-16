class LRUCache {
  private:
  int capacity;
  list<pair<int,int>> lruList;
  unordered_map<int, list<pair<int,int>>::iterator> cacheMap;
  
  public:
    LRUCache(int cap) {
        // code here
        capacity=cap;
        lruList.clear();
        cacheMap.clear();
        
    }

    int get(int key) {

        
        // code here
        if(cacheMap.find(key)==cacheMap.end())
        {
            return -1;
        }
        auto it=cacheMap[key];
        int value=it->second;
        lruList.erase(it);
        lruList.push_front({key,value});
        cacheMap[key]=lruList.begin();
        return value;
    }

        
    void put(int key, int value) {
        // code here
        if(cacheMap.find(key)!=cacheMap.end())
        {
           
            lruList.erase(cacheMap[key]);
            
        }
        else if((int)lruList.size()==capacity)
        {
            auto lru=lruList.back();
            cacheMap.erase(lru.first);
            lruList.pop_back();
        }
        lruList.push_front({key,value});
        cacheMap[key]=lruList.begin();
    }
};