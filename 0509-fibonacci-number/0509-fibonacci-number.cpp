#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        
        int j=0, sum=0;
        int arr[n+1];
        
        arr[0] = 0;
        
        if(n>0){
            
            arr[1] =1;
            for(int i=2;i<=n;i++){
            
                arr[i]= arr[i-1]+arr[i-2];
            }
        }
        
        

            
        // while (j<sizeof(arr)/sizeof(arr[0])){
        //     sum = sum+arr[j];
        //     j++;
        // }
        // return sum;
        
        return arr[n];
    }
    
};