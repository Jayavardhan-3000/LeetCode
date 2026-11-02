class Solution {
public:
    int getLeastFrequentDigit(int n) {       
      unordered_map<int,int> mp ;
        
        while(n > 0){
            int digit = n % 10;
            mp[digit]++;
            n /= 10;
        }
        vector<pair<int,int>> pairs(mp.begin(), mp.end());
        sort(pairs.begin(), pairs.end(), [](const pair<int,int> &a,const pair<int,int> &b){if(a.second == b.second) return a.first < b.first;
                                                                                           return a.second < b.second;});
        return pairs[0].first;
    }
};