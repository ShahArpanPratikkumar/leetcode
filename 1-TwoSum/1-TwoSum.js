// Last updated: 30/07/2026, 10:09:32
function twoSum(nums, target) {
    const map = {};  // value -> index

    for (let i = 0; i < nums.length; i++) {
        const complement = target - nums[i];

        // check if complement already seen
        if (map.hasOwnProperty(complement)) {
            return [map[complement], i];
        }

        // store current number with index
        map[nums[i]] = i;
    }
}