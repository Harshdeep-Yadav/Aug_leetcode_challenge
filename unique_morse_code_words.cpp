class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> ans={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string,int> map;
        for(int i=0;i<words.size();i++){
            string s=" ";
            for(int j=0;j<words[i].size();j++){
                s+=ans[words[i][j]-'a'];
            }
            map[s]=1;
        }
        return map.size();
    }
};