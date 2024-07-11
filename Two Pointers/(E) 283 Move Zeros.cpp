class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int numsSize = nums.size();
        int reader, writer = 0;
        for (reader = 0; reader < numsSize; reader++) {
            if (nums[reader] != 0) {
                nums[writer] = nums[reader];
                writer++;
            }
        }
        for (int i=writer; i<numsSize; i++) {
            nums[i] = 0;
        }
    }
};
