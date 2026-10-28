class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
int p1 = static_cast<unsigned int>(nums.size())-2;

while(p1>=0 && nums[p1] >= nums[p1+1]){
    p1--;
}
int p2 = static_cast<unsigned int>(nums.size())-1;

if(p1 >= 0){ 
    while(p1 >= p1 && nums[p1]>=nums[p2]){
        p2--;
    }
    std::swap(nums[p1], nums[p2]);
}
std::reverse(nums.begin()+p1+1, nums.end());
    }

    
};