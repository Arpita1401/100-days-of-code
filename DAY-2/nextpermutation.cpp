
// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
        
//      next_permutation(nums.begin(),nums.end());
//     }
// };

//time complexity: O(n!xn)



#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
    //  Write your code here.
    int ind1=-1,ind2=-1;
    for(int i=n-2;i>=0; i--)
    {
        if(p[i] < p[i+1]){
            ind1= i;
            break;
        }
    }
    if(ind1==-1)
    { reverse(p.begin(), p.end());
     return p;
    }
    for(int i=n-1;i>ind1; i--)
    {
        if(p[i] > p[ind1]){
            ind2= i;
            break;
        }
    }
    swap(p[ind1], p[ind2]);
    reverse(p.begin()+ind1+1, p.end());
    return p;
        
}
//time complexity- 3xO(n)  , O(n)
