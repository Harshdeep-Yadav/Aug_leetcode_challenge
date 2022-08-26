class Solution {
public:
     int count(int x){
      int ret = 0;
      while(x){
         ret += pow(10, x % 10);
         x /= 10;
      }
      return ret;
   }
    bool reorderedPowerOf2(int n) {
         int x = count(n);
      for(int i = 0; i < 32; i++){
         if(count(1 << i) == x) return true;
      }
      return false;   
    }
};