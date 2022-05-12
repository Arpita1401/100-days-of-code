// Question link: https://leetcode.com/problems/set-matrix-zeroes/

//Solution using extra space of O(r+c):
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         if(matrix.size()==0)
//             return;
//         int r=matrix.size();
//         int c=matrix[0].size();
//         vector<int> rf(r, 0);
//         vector<int> cf(c, 0);
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 if(matrix[i][j]==0)
//                 {rf[i]=1;
//                  cf[j]=1;
//                 }
//             }
//         }
//         for(int i=0;i<r;i++){
//             if(rf[i]==1){
//                 for(int j=0;j<c;j++)
//                     matrix[i][j]=0;
//             }
//         }
        
//          for(int j=0;j<c;j++){
//             if(cf[j]==1){
//                 for(int i=0;i<r;i++)
//                     matrix[i][j]=0;
//             }
//         }
        
//     }
// };


//Solution without using extra space


