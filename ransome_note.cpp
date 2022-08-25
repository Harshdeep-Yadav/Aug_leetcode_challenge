class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mapp;
        for(int i=0;i<magazine.size();i++){
            mapp[magazine[i]]++;
        }
        
        if(magazine.size()<ransomNote.size()) return false;
        
        for(int i=0;i<ransomNote.size();i++){
            if(mapp[ransomNote[i]]!=0){
                mapp[ransomNote[i]]--;
            } 
            else
                return false;
        }
        return true;
    }
};