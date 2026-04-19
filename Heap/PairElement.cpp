// pair wala chiaye isme!..

bool cmp()(vector<pair<int, string>> &a, vector<pair<int, string>> &b){
       if(a.first != b.first){
            return a.first > b.first; // min heap ban rhi hai isse!.. jo chota hoga wo upar ayega!.
       }
       return a.second > b.second;
} 

priority_queue<pair<int, string>, vector<pair<int, string>>, cmp> pq;