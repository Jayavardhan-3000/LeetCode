class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string>> answer;
        unordered_map<string, int> m;
        
        int j = 0;
        for (int i = 0; i < strs.size(); i++) {
            
            string temp = strs[i];
            sort(temp.begin(),temp.end());        
            
            if(m.find(temp) == m.end()) {
                m.insert({temp, j});
                answer.push_back({strs[i]});
                j++;
            }
            else {                              
                answer[m[temp]].push_back(strs[i]);
            }
        }
        
        return answer;
    }
};