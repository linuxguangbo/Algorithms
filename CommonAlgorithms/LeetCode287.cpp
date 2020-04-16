//hash table
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        int len = nums.size();
        for(int i = 0 ; i< len;i++){
            if(m.find(nums[i]) != m.end()){
                m[nums[i]] = m[nums[i]]+1;
            }else{
                m[nums[i]] = 1;
            }
        }
        int ans ;
        for(auto &n : m){
            if(n.second != 1){
                ans = n.first;
            }
        }
        return ans;
    }
};


//二分
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len = nums.size();
        int left = 0 ;
        int right = len-1;
        while(left < right){
            int mid = left + (right - left)/2;
            
            int count = 0;
            
            for(auto & n : nums){
                if(n <= mid){
                    count++;
                }
            }
            
            if(count > mid){
                right = mid;
            }else{
                left = mid+1;
            }
        }
        return left;
    }
};