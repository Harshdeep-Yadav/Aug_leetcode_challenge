
// class Solution {
// public:
//     int kthSmallest(vector<vector<int>>& matrix, int k) {
//         priority_queue<int> pq;
//         for(int i=0;i<matrix.size();i++){
//             for(int j=0;j=matrix[0].size();j++){
//                 pq.push(matrix[i][j]);
//                 if(pq.size()>k){
//                     pq.pop();
//                 }
//             }
//         }
//         return pq.top();
//     }
// };


class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int l=matrix[0][0];
        int h=matrix[n-1][n-1];
        while(l<h){
            int count=0;
            int m=l+(h-l)/2;
            // upper bound concept
            for(int i=0;i<n;i++){
                count+=upper_bound(matrix[i].begin(),matrix[i].end(),m)-matrix[i].begin();
            }
                if(count<k)
                    l=m+1;
                else
                    h=m;
                    
                
        }
        
        return l;
    }
};














