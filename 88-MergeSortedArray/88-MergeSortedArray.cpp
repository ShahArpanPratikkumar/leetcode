// Last updated: 30/07/2026, 10:08:37
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;         // last element in nums1's original part
        int j = n - 1;         // last element in nums2
        int k = m + n - 1;     // last position in nums1

        while (j >= 0) {       // only need to check nums2
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
    }
};