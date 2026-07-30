// Last updated: 30/07/2026, 10:07:05
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // Use long long to handle potential INT_MIN values in the array
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;
        
        for (int num : nums) {
            // Skip duplicates
            if (num == first || num == second || num == third) {
                continue;
            }
            
            // Update maximums accordingly
            if (num > first) {
                third = second;
                second = first;
                first = num;
            } else if (num > second) {
                third = second;
                second = num;
            } else if (num > third) {
                third = num;
            }
        }
        
        // If a valid third maximum wasn't found, return the first maximum
        return (third == LLONG_MIN) ? first : third;
    }
};