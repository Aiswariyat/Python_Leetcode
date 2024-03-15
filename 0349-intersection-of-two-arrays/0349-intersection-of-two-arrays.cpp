#include <set>
using namespace std;


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> set1;
        set<int> s;
        
        for(int i=0;i<nums1.size();i++){
            
            s.insert(nums1[i]);
            
        }
        
        
        for(int j=0;j<nums2.size();j++){
            
            if(s.find(nums2[j])!=s.end()){
                
                set1.insert(nums2[j]);
                
            }
            
        }
        
        
        vector<int> vc(set1.begin(),set1.end());
        return vc;
        
        
        
        
    }
};