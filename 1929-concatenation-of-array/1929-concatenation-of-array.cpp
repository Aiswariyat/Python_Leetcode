#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        vector<int> result;
        
        for(int i=0;i<size(nums);i++){
            
            result.push_back(nums[i]);
            
            
        }
        
        result.insert(result.begin(),nums.begin(),nums.end());
        
        return result;
        
    }
};