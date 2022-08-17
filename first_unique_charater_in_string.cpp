class Solution {
public:
    int firstUniqChar(string s) {
       int n=s.size();
       unordered_map<char,int> map;
        
        // putting every thing in the map with counting the indexes.
        
        for(int i=0;i<n;i++){
            map[s[i]]++;
        }
        
        
        // checking for index if is there any character with 1 occurance return that otherwise -1
        for(int i=0;i<n;i++)
            if(map[s[i]]==1)
                return i;
        return -1;
    }
};