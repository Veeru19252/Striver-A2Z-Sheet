# Array Problems — C++ STL Solutions

A comprehensive collection of array-based problems solved using C++ Standard Template Library.  
Covers brute-force, optimal, and STL-idiomatic approaches with time/space complexity.

---

## Table of Contents

1. [Two Sum](#1-two-sum)
2. [Two Sum II (Sorted)](#2-two-sum-ii-sorted)
3. [Two Sum III (Multiple Queries)](#3-two-sum-iii-multiple-queries)
4. [Two Sum (All Unique Pairs)](#4-two-sum-all-unique-pairs)
5. [Three Sum](#5-three-sum)
6. [Three Sum Closest](#6-three-sum-closest)
7. [Three Sum Smaller](#7-three-sum-smaller)
8. [Four Sum](#8-four-sum)
9. [Maximum Subarray (Kadane's Algorithm)](#9-maximum-subarray-kadanes-algorithm)
10. [Maximum Product Subarray](#10-maximum-product-subarray)
11. [Rotate Array](#11-rotate-array)
12. [Reverse Array](#12-reverse-array)
13. [Merge Sorted Arrays](#13-merge-sorted-arrays)
14. [Intersection of Two Arrays](#14-intersection-of-two-arrays)
15. [Union of Two Arrays](#15-union-of-two-arrays)
16. [Find Duplicates in Array](#16-find-duplicates-in-array)
17. [Find All Duplicates in Array](#17-find-all-duplicates-in-array)
18. [Missing Number](#18-missing-number)
19. [Find All Missing Numbers](#19-find-all-missing-numbers)
20. [Majority Element (Moore's Voting)](#20-majority-element-moores-voting)
21. [Majority Element II](#21-majority-element-ii)
22. [Next Permutation](#22-next-permutation)
23. [Container With Most Water](#23-container-with-most-water)
24. [Trapping Rain Water](#24-trapping-rain-water)
25. [Best Time to Buy and Sell Stock](#25-best-time-to-buy-and-sell-stock)
26. [Best Time to Buy and Sell Stock II](#26-best-time-to-buy-and-sell-stock-ii)
27. [Subarray Sum Equals K](#27-subarray-sum-equals-k)
28. [Subarray with Given XOR](#28-subarray-with-given-xor)
29. [Longest Consecutive Sequence](#29-longest-consecutive-sequence)
30. [Longest Subarray with Sum K](#30-longest-subarray-with-sum-k)
31. [Merge Intervals](#31-merge-intervals)
32. [Non-Overlapping Intervals](#32-non-overlapping-intervals)
33. [Insert Interval](#33-insert-interval)
34. [Meeting Rooms](#34-meeting-rooms)
35. [Meeting Rooms II](#35-meeting-rooms-ii)
36. [Partition Array into Disjoint Intervals](#36-partition-array-into-disjoint-intervals)
37. [Overlap Interval](#37-overlap-interval)
38. [Remove Duplicates from Sorted Array](#38-remove-duplicates-from-sorted-array)
39. [Move Zeroes](#39-move-zeroes)
40. [Sort Colors (Dutch Flag)](#40-sort-colors-dutch-flag)
41. [First Missing Positive](#41-first-missing-positive)
42. [Find Peak Element](#42-find-peak-element)
43. [Search in Rotated Sorted Array](#43-search-in-rotated-sorted-array)
44. [Find Minimum in Rotated Sorted Array](#44-find-minimum-in-rotated-sorted-array)
45. [Kth Largest Element](#45-kth-largest-element)
46. [Kth Smallest Element](#46-kth-smallest-element)
47. [Median of Two Sorted Arrays](#47-median-of-two-sorted-arrays)
48. [Sliding Window Maximum](#48-sliding-window-maximum)
49. [Sliding Window Median](#49-sliding-window-median)
50. [Product of Array Except Self](#50-product-of-array-except-self)
51. [Maximum Gap (Bucket Sort)](#51-maximum-gap-bucket-sort)
52. [Count of Smaller Numbers After Self](#52-count-of-smaller-numbers-after-self)
53. [Largest Rectangle in Histogram](#53-largest-rectangle-in-histogram)
54. [Maximal Rectangle](#54-maximal-rectangle)
55. [Find the Duplicate Number](#55-find-the-duplicate-number)
56. [Subarray Sums Divisible by K](#56-subarray-sums-divisible-by-k)
57. [Continuous Subarray Sum](#57-continuous-subarray-sum)
58. [Maximum Size Subarray Sum Equals K](#58-maximum-size-subarray-sum-equals-k)
59. [Smallest Subarray with Sum ≥ K](#59-smallest-subarray-with-sum--k)
60. [Fruit Into Baskets](#60-fruit-into-baskets)
61. [Longest Repeating Character Replacement](#61-longest-repeating-character-replacement)
62. [Permutation in String](#62-permutation-in-string)
63. [Find Anagrams in String](#63-find-anagrams-in-string)
64. [Number of Subarrays with Bounded Maximum](#64-number-of-subarrays-with-bounded-maximum)
65. [Minimum Swaps to Group All 1's Together](#65-minimum-swaps-to-group-all-1s-together)

---

## 1. Two Sum

**Problem:** Given an array of integers `nums` and an integer `target`, return indices of two numbers that add up to `target`.

**Example:**  
Input: `nums = [2,7,11,15], target = 9`  
Output: `[0,1]`

```cpp
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (map.count(complement))
            return {map[complement], i};
        map[nums[i]] = i;
    }
    return {};
}
```

**Time:** O(n) | **Space:** O(n)

---

## 2. Two Sum II (Sorted)

**Problem:** Given a 1-indexed sorted array, find two numbers that sum to target.

**Example:**  
Input: `numbers = [2,7,11,15], target = 9`  
Output: `[1,2]`

```cpp
#include <vector>

std::vector<int> twoSumSorted(const std::vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) return {left + 1, right + 1};
        if (sum < target) ++left;
        else --right;
    }
    return {};
}
```

**Time:** O(n) | **Space:** O(1)

---

## 3. Two Sum III (Multiple Queries)

**Problem:** Design a data structure that supports adding numbers and finding if a pair sums to a target.

```cpp
#include <unordered_map>
#include <vector>

class TwoSum {
    std::unordered_map<int, int> freq;
public:
    void add(int number) {
        freq[number]++;
    }

    bool find(int value) {
        for (const auto& [num, count] : freq) {
            int complement = value - num;
            if (complement == num) {
                if (count > 1) return true;
            } else if (freq.count(complement)) {
                return true;
            }
        }
        return false;
    }
};
```

**Time:** O(1) add, O(n) find | **Space:** O(n)

---

## 4. Two Sum (All Unique Pairs)

**Problem:** Find all unique pairs in an array that sum to target.

```cpp
#include <vector>
#include <unordered_set>
#include <algorithm>

std::vector<std::vector<int>> twoSumAllPairs(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    std::vector<std::vector<int>> result;
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            result.push_back({nums[left], nums[right]});
            while (left < right && nums[left] == nums[left + 1]) ++left;
            while (left < right && nums[right] == nums[right - 1]) --right;
            ++left; --right;
        } else if (sum < target) ++left;
        else --right;
    }
    return result;
}
```

**Time:** O(n log n) | **Space:** O(1) (excluding output)

---

## 5. Three Sum

**Problem:** Find all unique triplets that sum to zero.

**Example:**  
Input: `nums = [-1,0,1,2,-1,-4]`  
Output: `[[-1,-1,2],[-1,0,1]]`

```cpp
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    std::vector<std::vector<int>> result;
    int n = nums.size();
    for (int i = 0; i < n - 2; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left + 1]) ++left;
                while (left < right && nums[right] == nums[right - 1]) --right;
                ++left; --right;
            } else if (sum < 0) ++left;
            else --right;
        }
    }
    return result;
}
```

**Time:** O(n²) | **Space:** O(1) (excluding output)

---

## 6. Three Sum Closest

**Problem:** Find triplet whose sum is closest to target.

```cpp
#include <vector>
#include <algorithm>
#include <climits>

int threeSumClosest(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    int n = nums.size(), closest = nums[0] + nums[1] + nums[2];
    for (int i = 0; i < n - 2; ++i) {
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (std::abs(sum - target) < std::abs(closest - target))
                closest = sum;
            if (sum < target) ++left;
            else if (sum > target) --right;
            else return target;
        }
    }
    return closest;
}
```

**Time:** O(n²) | **Space:** O(1)

---

## 7. Three Sum Smaller

**Problem:** Count triplets with sum less than target.

```cpp
#include <vector>
#include <algorithm>

int threeSumSmaller(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    int count = 0, n = nums.size();
    for (int i = 0; i < n - 2; ++i) {
        int left = i + 1, right = n - 1;
        while (left < right) {
            if (nums[i] + nums[left] + nums[right] < target) {
                count += right - left;
                ++left;
            } else {
                --right;
            }
        }
    }
    return count;
}
```

**Time:** O(n²) | **Space:** O(1)

---

## 8. Four Sum

**Problem:** Find all unique quadruplets summing to target.

```cpp
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    std::vector<std::vector<int>> result;
    int n = nums.size();
    for (int i = 0; i < n - 3; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < n - 2; ++j) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            int left = j + 1, right = n - 1;
            while (left < right) {
                long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                if (sum == target) {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) ++left;
                    while (left < right && nums[right] == nums[right - 1]) --right;
                    ++left; --right;
                } else if (sum < target) ++left;
                else --right;
            }
        }
    }
    return result;
}
```

**Time:** O(n³) | **Space:** O(1) (excluding output)

---

## 9. Maximum Subarray (Kadane's Algorithm)

**Problem:** Find contiguous subarray with largest sum.

**Example:**  
Input: `nums = [-2,1,-3,4,-1,2,1,-5,4]`  
Output: `6` (subarray `[4,-1,2,1]`)

```cpp
#include <vector>
#include <algorithm>

int maxSubArray(const std::vector<int>& nums) {
    int maxEnding = nums[0], maxSoFar = nums[0];
    for (size_t i = 1; i < nums.size(); ++i) {
        maxEnding = std::max(nums[i], maxEnding + nums[i]);
        maxSoFar = std::max(maxSoFar, maxEnding);
    }
    return maxSoFar;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 10. Maximum Product Subarray

**Problem:** Find contiguous subarray with largest product.

```cpp
#include <vector>
#include <algorithm>

int maxProduct(const std::vector<int>& nums) {
    int maxProd = nums[0], minProd = nums[0], result = nums[0];
    for (size_t i = 1; i < nums.size(); ++i) {
        int cand1 = maxProd * nums[i];
        int cand2 = minProd * nums[i];
        maxProd = std::max({nums[i], cand1, cand2});
        minProd = std::min({nums[i], cand1, cand2});
        result = std::max(result, maxProd);
    }
    return result;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 11. Rotate Array

**Problem:** Rotate array to right by k steps.

**Example:**  
Input: `nums = [1,2,3,4,5,6,7], k = 3`  
Output: `[5,6,7,1,2,3,4]`

```cpp
#include <vector>
#include <algorithm>

void rotate(std::vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;
    std::reverse(nums.begin(), nums.end());
    std::reverse(nums.begin(), nums.begin() + k);
    std::reverse(nums.begin() + k, nums.end());
}
```

**Time:** O(n) | **Space:** O(1)

---

## 12. Reverse Array

```cpp
#include <vector>
#include <algorithm>

void reverseArray(std::vector<int>& nums) {
    std::reverse(nums.begin(), nums.end());
}

// In-place without std::reverse
void reverseArrayManual(std::vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        std::swap(nums[left++], nums[right--]);
    }
}
```

**Time:** O(n) | **Space:** O(1)

---

## 13. Merge Sorted Arrays

**Problem:** Merge two sorted arrays into the first array (which has extra space).

```cpp
#include <vector>

void merge(std::vector<int>& nums1, int m, const std::vector<int>& nums2, int n) {
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j])
            nums1[k--] = nums1[i--];
        else
            nums1[k--] = nums2[j--];
    }
    while (j >= 0) nums1[k--] = nums2[j--];
}
```

**Time:** O(m+n) | **Space:** O(1)

---

## 14. Intersection of Two Arrays

**Problem:** Return unique elements present in both arrays.

```cpp
#include <vector>
#include <unordered_set>

std::vector<int> intersection(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::unordered_set<int> set(nums1.begin(), nums1.end());
    std::vector<int> result;
    for (int num : nums2) {
        if (set.erase(num))
            result.push_back(num);
    }
    return result;
}
```

**Time:** O(m+n) | **Space:** O(min(m,n))

---

## 15. Union of Two Arrays

**Problem:** Return sorted union of two arrays.

```cpp
#include <vector>
#include <set>

std::vector<int> unionArrays(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::set<int> s(nums1.begin(), nums1.end());
    s.insert(nums2.begin(), nums2.end());
    return std::vector<int>(s.begin(), s.end());
}
```

**Time:** O((m+n) log(m+n)) | **Space:** O(m+n)

---

## 16. Find Duplicates in Array

**Problem:** Find one duplicate in an array of size n+1 where elements are in [1,n].

```cpp
#include <vector>

int findDuplicate(const std::vector<int>& nums) {
    // Floyd's Tortoise and Hare (cycle detection)
    int slow = nums[0], fast = nums[0];
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 17. Find All Duplicates in Array

**Problem:** Find all elements that appear twice.

```cpp
#include <vector>
#include <cmath>

std::vector<int> findDuplicates(std::vector<int>& nums) {
    std::vector<int> result;
    for (int num : nums) {
        int idx = std::abs(num) - 1;
        if (nums[idx] < 0) result.push_back(idx + 1);
        nums[idx] = -nums[idx];
    }
    return result;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 18. Missing Number

**Problem:** Find missing number in array of size n containing numbers 0..n.

```cpp
#include <vector>

int missingNumber(const std::vector<int>& nums) {
    int n = nums.size();
    int expected = n * (n + 1) / 2;
    int actual = 0;
    for (int num : nums) actual += num;
    return expected - actual;
    // XOR approach:
    // int xorVal = nums.size();
    // for (int i = 0; i < nums.size(); ++i)
    //     xorVal ^= i ^ nums[i];
    // return xorVal;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 19. Find All Missing Numbers

**Problem:** Find all numbers missing from 1..n.

```cpp
#include <vector>

std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        int idx = std::abs(nums[i]) - 1;
        if (nums[idx] > 0) nums[idx] = -nums[idx];
    }
    std::vector<int> result;
    for (int i = 0; i < n; ++i)
        if (nums[i] > 0) result.push_back(i + 1);
    return result;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 20. Majority Element (Moore's Voting)

**Problem:** Find element that appears more than ⌊n/2⌋ times.

```cpp
#include <vector>

int majorityElement(const std::vector<int>& nums) {
    int count = 0, candidate = 0;
    for (int num : nums) {
        if (count == 0) candidate = num;
        count += (num == candidate) ? 1 : -1;
    }
    return candidate;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 21. Majority Element II

**Problem:** Find elements appearing more than ⌊n/3⌋ times.

```cpp
#include <vector>

std::vector<int> majorityElementII(const std::vector<int>& nums) {
    int c1 = 0, c2 = 0, n1 = 0, n2 = 0;
    for (int num : nums) {
        if (num == n1) ++c1;
        else if (num == n2) ++c2;
        else if (c1 == 0) { n1 = num; c1 = 1; }
        else if (c2 == 0) { n2 = num; c2 = 1; }
        else { --c1; --c2; }
    }
    c1 = c2 = 0;
    for (int num : nums) {
        if (num == n1) ++c1;
        else if (num == n2) ++c2;
    }
    std::vector<int> result;
    if (c1 > nums.size() / 3) result.push_back(n1);
    if (c2 > nums.size() / 3) result.push_back(n2);
    return result;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 22. Next Permutation

**Problem:** Rearrange into lexicographically next greater permutation.

```cpp
#include <vector>
#include <algorithm>

void nextPermutation(std::vector<int>& nums) {
    int n = nums.size(), i = n - 2;
    while (i >= 0 && nums[i] >= nums[i + 1]) --i;
    if (i >= 0) {
        int j = n - 1;
        while (nums[j] <= nums[i]) --j;
        std::swap(nums[i], nums[j]);
    }
    std::reverse(nums.begin() + i + 1, nums.end());
}
```

**Time:** O(n) | **Space:** O(1)

---

## 23. Container With Most Water

**Problem:** Find two lines that together with x-axis form a container holding maximum water.

```cpp
#include <vector>
#include <algorithm>

int maxArea(const std::vector<int>& height) {
    int left = 0, right = height.size() - 1, maxWater = 0;
    while (left < right) {
        int water = std::min(height[left], height[right]) * (right - left);
        maxWater = std::max(maxWater, water);
        if (height[left] < height[right]) ++left;
        else --right;
    }
    return maxWater;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 24. Trapping Rain Water

**Problem:** Compute total trapped rainwater between bars.

```cpp
#include <vector>
#include <algorithm>

int trap(const std::vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int leftMax = 0, rightMax = 0, total = 0;
    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] >= leftMax) leftMax = height[left];
            else total += leftMax - height[left];
            ++left;
        } else {
            if (height[right] >= rightMax) rightMax = height[right];
            else total += rightMax - height[right];
            --right;
        }
    }
    return total;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 25. Best Time to Buy and Sell Stock

**Problem:** Single transaction — maximize profit.

```cpp
#include <vector>
#include <algorithm>

int maxProfit(const std::vector<int>& prices) {
    int minPrice = INT_MAX, maxProfit = 0;
    for (int price : prices) {
        minPrice = std::min(minPrice, price);
        maxProfit = std::max(maxProfit, price - minPrice);
    }
    return maxProfit;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 26. Best Time to Buy and Sell Stock II

**Problem:** Unlimited transactions — maximize profit.

```cpp
#include <vector>

int maxProfitII(const std::vector<int>& prices) {
    int profit = 0;
    for (size_t i = 1; i < prices.size(); ++i)
        if (prices[i] > prices[i - 1])
            profit += prices[i] - prices[i - 1];
    return profit;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 27. Subarray Sum Equals K

**Problem:** Count subarrays whose sum equals K.

```cpp
#include <vector>
#include <unordered_map>

int subarraySum(const std::vector<int>& nums, int k) {
    std::unordered_map<int, int> prefixSum;
    prefixSum[0] = 1;
    int sum = 0, count = 0;
    for (int num : nums) {
        sum += num;
        if (prefixSum.count(sum - k))
            count += prefixSum[sum - k];
        prefixSum[sum]++;
    }
    return count;
}
```

**Time:** O(n) | **Space:** O(n)

---

## 28. Subarray with Given XOR

**Problem:** Count subarrays with XOR equal to K.

```cpp
#include <vector>
#include <unordered_map>

int subarrayXOR(const std::vector<int>& nums, int k) {
    std::unordered_map<int, int> freq;
    freq[0] = 1;
    int xorVal = 0, count = 0;
    for (int num : nums) {
        xorVal ^= num;
        int target = xorVal ^ k;
        if (freq.count(target))
            count += freq[target];
        freq[xorVal]++;
    }
    return count;
}
```

**Time:** O(n) | **Space:** O(n)

---

## 29. Longest Consecutive Sequence

**Problem:** Find length of longest consecutive sequence (unsorted).

**Example:**  
Input: `nums = [100,4,200,1,3,2]`  
Output: `4` (sequence `[1,2,3,4]`)

```cpp
#include <vector>
#include <unordered_set>

int longestConsecutive(const std::vector<int>& nums) {
    std::unordered_set<int> set(nums.begin(), nums.end());
    int longest = 0;
    for (int num : set) {
        if (!set.count(num - 1)) {
            int len = 1;
            while (set.count(num + len)) ++len;
            longest = std::max(longest, len);
        }
    }
    return longest;
}
```

**Time:** O(n) | **Space:** O(n)

---

## 30. Longest Subarray with Sum K

**Problem:** Find length of longest subarray summing to K (with positive numbers).

```cpp
#include <vector>
#include <unordered_map>

int longestSubarraySumK(const std::vector<int>& nums, int k) {
    std::unordered_map<int, int> prefixSum;
    int sum = 0, maxLen = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum == k) maxLen = i + 1;
        if (prefixSum.count(sum - k))
            maxLen = std::max(maxLen, i - prefixSum[sum - k]);
        if (!prefixSum.count(sum))
            prefixSum[sum] = i;
    }
    return maxLen;
}
```

**Time:** O(n) | **Space:** O(n)

---

## 31. Merge Intervals

**Problem:** Merge overlapping intervals.

**Example:**  
Input: `[[1,3],[2,6],[8,10],[15,18]]`  
Output: `[[1,6],[8,10],[15,18]]`

```cpp
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
    if (intervals.empty()) return {};
    std::sort(intervals.begin(), intervals.end());
    std::vector<std::vector<int>> result;
    result.push_back(intervals[0]);
    for (size_t i = 1; i < intervals.size(); ++i) {
        if (intervals[i][0] <= result.back()[1])
            result.back()[1] = std::max(result.back()[1], intervals[i][1]);
        else
            result.push_back(intervals[i]);
    }
    return result;
}
```

**Time:** O(n log n) | **Space:** O(n)

---

## 32. Non-Overlapping Intervals

**Problem:** Find minimum intervals to remove for non-overlapping set.

```cpp
#include <vector>
#include <algorithm>

int eraseOverlapIntervals(std::vector<std::vector<int>>& intervals) {
    if (intervals.empty()) return 0;
    std::sort(intervals.begin(), intervals.end(),
         [](const auto& a, const auto& b) { return a[1] < b[1]; });
    int count = 0, end = intervals[0][1];
    for (size_t i = 1; i < intervals.size(); ++i) {
        if (intervals[i][0] < end) ++count;
        else end = intervals[i][1];
    }
    return count;
}
```

**Time:** O(n log n) | **Space:** O(1)

---

## 33. Insert Interval

**Problem:** Insert new interval into sorted non-overlapping intervals.

```cpp
#include <vector>

std::vector<std::vector<int>> insert(
    std::vector<std::vector<int>>& intervals,
    std::vector<int> newInterval) {
    std::vector<std::vector<int>> result;
    int i = 0, n = intervals.size();
    while (i < n && intervals[i][1] < newInterval[0])
        result.push_back(intervals[i++]);
    while (i < n && intervals[i][0] <= newInterval[1]) {
        newInterval[0] = std::min(newInterval[0], intervals[i][0]);
        newInterval[1] = std::max(newInterval[1], intervals[i][1]);
        ++i;
    }
    result.push_back(newInterval);
    while (i < n) result.push_back(intervals[i++]);
    return result;
}
```

**Time:** O(n) | **Space:** O(n)

---

## 34. Meeting Rooms

**Problem:** Can a person attend all meetings?

```cpp
#include <vector>
#include <algorithm>

bool canAttendMeetings(std::vector<std::vector<int>>& intervals) {
    std::sort(intervals.begin(), intervals.end());
    for (size_t i = 1; i < intervals.size(); ++i)
        if (intervals[i][0] < intervals[i - 1][1])
            return false;
    return true;
}
```

**Time:** O(n log n) | **Space:** O(1)

---

## 35. Meeting Rooms II

**Problem:** Minimum number of conference rooms required.

```cpp
#include <vector>
#include <algorithm>
#include <queue>

int minMeetingRooms(std::vector<std::vector<int>>& intervals) {
    if (intervals.empty()) return 0;
    std::sort(intervals.begin(), intervals.end());
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    pq.push(intervals[0][1]);
    for (size_t i = 1; i < intervals.size(); ++i) {
        if (intervals[i][0] >= pq.top()) pq.pop();
        pq.push(intervals[i][1]);
    }
    return pq.size();
}
```

**Time:** O(n log n) | **Space:** O(n)

---

## 36. Partition Array into Disjoint Intervals

**Problem:** Partition array such that left part is ≤ right part.

```cpp
#include <vector>
#include <algorithm>

int partitionDisjoint(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> minRight(n);
    minRight[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; --i)
        minRight[i] = std::min(nums[i], minRight[i + 1]);
    int maxLeft = nums[0];
    for (int i = 0; i < n - 1; ++i) {
        maxLeft = std::max(maxLeft, nums[i]);
        if (maxLeft <= minRight[i + 1])
            return i + 1;
    }
    return n;
}
```

**Time:** O(n) | **Space:** O(n)

---

## 37. Overlap Interval

**Problem:** Check if any two intervals overlap.

```cpp
#include <vector>
#include <algorithm>

bool hasOverlap(std::vector<std::vector<int>>& intervals) {
    std::sort(intervals.begin(), intervals.end());
    for (size_t i = 1; i < intervals.size(); ++i)
        if (intervals[i][0] < intervals[i - 1][1])
            return true;
    return false;
}
```

**Time:** O(n log n) | **Space:** O(1)

---

## 38. Remove Duplicates from Sorted Array

**Problem:** Remove duplicates in-place and return new length.

```cpp
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) return 0;
    int k = 1;
    for (size_t i = 1; i < nums.size(); ++i)
        if (nums[i] != nums[k - 1])
            nums[k++] = nums[i];
    return k;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 39. Move Zeroes

**Problem:** Move all zeroes to end while maintaining relative order.

```cpp
#include <vector>
#include <algorithm>

void moveZeroes(std::vector<int>& nums) {
    int pos = 0;
    for (size_t i = 0; i < nums.size(); ++i)
        if (nums[i] != 0)
            std::swap(nums[pos++], nums[i]);
}
```

**Time:** O(n) | **Space:** O(1)

---

## 40. Sort Colors (Dutch Flag)

**Problem:** Sort array of 0s, 1s, and 2s in-place.

```cpp
#include <vector>
#include <algorithm>

void sortColors(std::vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high) {
        if (nums[mid] == 0)
            std::swap(nums[low++], nums[mid++]);
        else if (nums[mid] == 1)
            ++mid;
        else
            std::swap(nums[mid], nums[high--]);
    }
}
```

**Time:** O(n) | **Space:** O(1)

---

## 41. First Missing Positive

**Problem:** Find smallest missing positive integer.

```cpp
#include <vector>

int firstMissingPositive(std::vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; ++i)
        if (nums[i] <= 0) nums[i] = n + 1;
    for (int i = 0; i < n; ++i) {
        int val = std::abs(nums[i]);
        if (val >= 1 && val <= n && nums[val - 1] > 0)
            nums[val - 1] = -nums[val - 1];
    }
    for (int i = 0; i < n; ++i)
        if (nums[i] > 0) return i + 1;
    return n + 1;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 42. Find Peak Element

**Problem:** Find a peak element (greater than neighbors).

```cpp
#include <vector>

int findPeakElement(const std::vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] > nums[mid + 1])
            right = mid;
        else
            left = mid + 1;
    }
    return left;
}
```

**Time:** O(log n) | **Space:** O(1)

---

## 43. Search in Rotated Sorted Array

**Problem:** Search target in rotated sorted array.

```cpp
#include <vector>

int searchRotated(const std::vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) return mid;
        if (nums[left] <= nums[mid]) {
            if (target >= nums[left] && target < nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        } else {
            if (target > nums[mid] && target <= nums[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return -1;
}
```

**Time:** O(log n) | **Space:** O(1)

---

## 44. Find Minimum in Rotated Sorted Array

```cpp
#include <vector>

int findMinRotated(const std::vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] > nums[right])
            left = mid + 1;
        else
            right = mid;
    }
    return nums[left];
}
```

**Time:** O(log n) | **Space:** O(1)

---

## 45. Kth Largest Element

**Problem:** Find kth largest element in array.

```cpp
#include <vector>
#include <queue>

int findKthLargest(std::vector<int>& nums, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    for (int num : nums) {
        pq.push(num);
        if (pq.size() > k) pq.pop();
    }
    return pq.top();
}
```

**Time:** O(n log k) | **Space:** O(k)

---

## 46. Kth Smallest Element

```cpp
#include <vector>
#include <queue>

int findKthSmallest(std::vector<int>& nums, int k) {
    std::priority_queue<int> pq;
    for (int num : nums) {
        pq.push(num);
        if (pq.size() > k) pq.pop();
    }
    return pq.top();
}
```

**Time:** O(n log k) | **Space:** O(k)

---

## 47. Median of Two Sorted Arrays

**Problem:** Find median of two sorted arrays in O(log(min(m,n))).

```cpp
#include <vector>
#include <algorithm>
#include <climits>

double findMedianSortedArrays(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    if (nums1.size() > nums2.size())
        return findMedianSortedArrays(nums2, nums1);
    int m = nums1.size(), n = nums2.size();
    int left = 0, right = m;
    while (left <= right) {
        int i = left + (right - left) / 2;
        int j = (m + n + 1) / 2 - i;
        int maxLeft1 = (i == 0) ? INT_MIN : nums1[i - 1];
        int minRight1 = (i == m) ? INT_MAX : nums1[i];
        int maxLeft2 = (j == 0) ? INT_MIN : nums2[j - 1];
        int minRight2 = (j == n) ? INT_MAX : nums2[j];
        if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
            if ((m + n) % 2 == 0)
                return (std::max(maxLeft1, maxLeft2) + std::min(minRight1, minRight2)) / 2.0;
            else
                return std::max(maxLeft1, maxLeft2);
        } else if (maxLeft1 > minRight2) {
            right = i - 1;
        } else {
            left = i + 1;
        }
    }
    return 0.0;
}
```

**Time:** O(log(min(m,n))) | **Space:** O(1)

---

## 48. Sliding Window Maximum

**Problem:** Return max of each sliding window of size k.

```cpp
#include <vector>
#include <deque>

std::vector<int> maxSlidingWindow(const std::vector<int>& nums, int k) {
    std::deque<int> dq;
    std::vector<int> result;
    for (int i = 0; i < nums.size(); ++i) {
        while (!dq.empty() && dq.front() <= i - k) dq.pop_front();
        while (!dq.empty() && nums[dq.back()] <= nums[i]) dq.pop_back();
        dq.push_back(i);
        if (i >= k - 1) result.push_back(nums[dq.front()]);
    }
    return result;
}
```

**Time:** O(n) | **Space:** O(k)

---

## 49. Sliding Window Median

```cpp
#include <vector>
#include <set>

std::vector<double> medianSlidingWindow(const std::vector<int>& nums, int k) {
    std::multiset<int> window(nums.begin(), nums.begin() + k);
    std::vector<double> result;
    auto mid = std::next(window.begin(), k / 2);
    for (int i = k; ; ++i) {
        if (k % 2)
            result.push_back(*mid);
        else
            result.push_back((*(double*)&(*mid) + *(double*)&(*prev(mid))) / 2.0);
        if (i == nums.size()) break;
        window.insert(nums[i]);
        if (nums[i] < *mid) --mid;
        if (nums[i - k] <= *mid) ++mid;
        window.erase(window.lower_bound(nums[i - k]));
    }
    return result;
}
```

**Time:** O(n log k) | **Space:** O(k)

[NOTE: The above code is simplified; a production version would use two multisets or heaps with lazy deletion.]

---

## 50. Product of Array Except Self

**Problem:** Return array where output[i] = product of all elements except nums[i].

```cpp
#include <vector>

std::vector<int> productExceptSelf(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> result(n, 1);
    int left = 1;
    for (int i = 0; i < n; ++i) {
        result[i] = left;
        left *= nums[i];
    }
    int right = 1;
    for (int i = n - 1; i >= 0; --i) {
        result[i] *= right;
        right *= nums[i];
    }
    return result;
}
```

**Time:** O(n) | **Space:** O(1) (excluding output)

---

## 51. Maximum Gap (Bucket Sort)

**Problem:** Find maximum difference between successive sorted elements.

```cpp
#include <vector>
#include <algorithm>
#include <climits>

int maximumGap(std::vector<int>& nums) {
    int n = nums.size();
    if (n < 2) return 0;
    int minVal = *std::min_element(nums.begin(), nums.end());
    int maxVal = *std::max_element(nums.begin(), nums.end());
    int gap = std::max(1, (maxVal - minVal) / (n - 1));
    int buckets = (maxVal - minVal) / gap + 1;
    std::vector<int> bucketMin(buckets, INT_MAX);
    std::vector<int> bucketMax(buckets, INT_MIN);
    for (int num : nums) {
        int idx = (num - minVal) / gap;
        bucketMin[idx] = std::min(bucketMin[idx], num);
        bucketMax[idx] = std::max(bucketMax[idx], num);
    }
    int maxGap = 0, prevMax = minVal;
    for (int i = 0; i < buckets; ++i) {
        if (bucketMin[i] == INT_MAX) continue;
        maxGap = std::max(maxGap, bucketMin[i] - prevMax);
        prevMax = bucketMax[i];
    }
    return maxGap;
}
```

**Time:** O(n) | **Space:** O(n)

---

## 52. Count of Smaller Numbers After Self

**Problem:** Count smaller elements to the right of each element.

```cpp
#include <vector>
#include <algorithm>

struct BIT {
    std::vector<int> tree;
    BIT(int n) : tree(n + 1, 0) {}
    void update(int idx, int val) {
        for (++idx; idx < tree.size(); idx += idx & -idx)
            tree[idx] += val;
    }
    int query(int idx) {
        int sum = 0;
        for (++idx; idx > 0; idx -= idx & -idx)
            sum += tree[idx];
        return sum;
    }
};

std::vector<int> countSmaller(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> sorted(nums), result(n);
    std::sort(sorted.begin(), sorted.end());
    sorted.erase(std::unique(sorted.begin(), sorted.end()), sorted.end());
    BIT bit(n);
    for (int i = n - 1; i >= 0; --i) {
        int idx = std::lower_bound(sorted.begin(), sorted.end(), nums[i]) - sorted.begin();
        result[i] = bit.query(idx - 1);
        bit.update(idx, 1);
    }
    return result;
}
```

**Time:** O(n log n) | **Space:** O(n)

---

## 53. Largest Rectangle in Histogram

**Problem:** Find largest rectangle in a histogram.

```cpp
#include <vector>
#include <stack>
#include <algorithm>

int largestRectangleArea(const std::vector<int>& heights) {
    std::stack<int> st;
    int maxArea = 0, i = 0, n = heights.size();
    while (i < n) {
        if (st.empty() || heights[st.top()] <= heights[i]) {
            st.push(i++);
        } else {
            int h = heights[st.top()]; st.pop();
            int w = st.empty() ? i : i - st.top() - 1;
            maxArea = std::max(maxArea, h * w);
        }
    }
    while (!st.empty()) {
        int h = heights[st.top()]; st.pop();
        int w = st.empty() ? i : i - st.top() - 1;
        maxArea = std::max(maxArea, h * w);
    }
    return maxArea;
}
```

**Time:** O(n) | **Space:** O(n)

---

## 54. Maximal Rectangle

**Problem:** Find largest rectangle containing only 1s in binary matrix.

```cpp
#include <vector>
#include <stack>
#include <algorithm>

int maximalRectangle(const std::vector<std::vector<char>>& matrix) {
    if (matrix.empty()) return 0;
    int m = matrix.size(), n = matrix[0].size(), maxArea = 0;
    std::vector<int> heights(n, 0);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            heights[j] = (matrix[i][j] == '1') ? heights[j] + 1 : 0;
        std::stack<int> st;
        int idx = 0;
        while (idx < n) {
            if (st.empty() || heights[st.top()] <= heights[idx]) {
                st.push(idx++);
            } else {
                int h = heights[st.top()]; st.pop();
                int w = st.empty() ? idx : idx - st.top() - 1;
                maxArea = std::max(maxArea, h * w);
            }
        }
        while (!st.empty()) {
            int h = heights[st.top()]; st.pop();
            int w = st.empty() ? idx : idx - st.top() - 1;
            maxArea = std::max(maxArea, h * w);
        }
    }
    return maxArea;
}
```

**Time:** O(mn) | **Space:** O(n)

---

## 55. Find the Duplicate Number

**Problem:** Find duplicate number without modifying array, constant space.

(Already covered in #16 — Floyd's Tortoise and Hare.)

```cpp
// See problem #16 for the implementation.
```

---

## 56. Subarray Sums Divisible by K

**Problem:** Count subarrays whose sum is divisible by K.

```cpp
#include <vector>
#include <unordered_map>

int subarraysDivByK(const std::vector<int>& nums, int k) {
    std::unordered_map<int, int> modCount;
    modCount[0] = 1;
    int prefix = 0, result = 0;
    for (int num : nums) {
        prefix = (prefix + num % k + k) % k;
        result += modCount[prefix];
        modCount[prefix]++;
    }
    return result;
}
```

**Time:** O(n) | **Space:** O(k)

---

## 57. Continuous Subarray Sum

**Problem:** Does there exist a subarray of length ≥ 2 whose sum is multiple of k?

```cpp
#include <vector>
#include <unordered_map>

bool checkSubarraySum(const std::vector<int>& nums, int k) {
    std::unordered_map<int, int> modMap;
    modMap[0] = -1;
    int prefix = 0;
    for (int i = 0; i < nums.size(); ++i) {
        prefix = (prefix + nums[i]) % k;
        if (modMap.count(prefix)) {
            if (i - modMap[prefix] > 1) return true;
        } else {
            modMap[prefix] = i;
        }
    }
    return false;
}
```

**Time:** O(n) | **Space:** O(min(n,k))

---

## 58. Maximum Size Subarray Sum Equals K

```cpp
#include <vector>
#include <unordered_map>

int maxSubArrayLen(const std::vector<int>& nums, int k) {
    std::unordered_map<int, int> prefixMap;
    prefixMap[0] = -1;
    int prefix = 0, maxLen = 0;
    for (int i = 0; i < nums.size(); ++i) {
        prefix += nums[i];
        if (prefixMap.count(prefix - k))
            maxLen = std::max(maxLen, i - prefixMap[prefix - k]);
        if (!prefixMap.count(prefix))
            prefixMap[prefix] = i;
    }
    return maxLen;
}
```

**Time:** O(n) | **Space:** O(n)

---

## 59. Smallest Subarray with Sum ≥ K

```cpp
#include <vector>
#include <climits>
#include <algorithm>

int minSubArrayLen(int target, const std::vector<int>& nums) {
    int left = 0, sum = 0, minLen = INT_MAX;
    for (int right = 0; right < nums.size(); ++right) {
        sum += nums[right];
        while (sum >= target) {
            minLen = std::min(minLen, right - left + 1);
            sum -= nums[left++];
        }
    }
    return minLen == INT_MAX ? 0 : minLen;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 60. Fruit Into Baskets

**Problem:** Longest subarray with at most 2 distinct values.

```cpp
#include <vector>
#include <unordered_map>

int totalFruit(const std::vector<int>& fruits) {
    std::unordered_map<int, int> count;
    int left = 0, maxLen = 0;
    for (int right = 0; right < fruits.size(); ++right) {
        count[fruits[right]]++;
        while (count.size() > 2) {
            if (--count[fruits[left]] == 0)
                count.erase(fruits[left]);
            ++left;
        }
        maxLen = std::max(maxLen, right - left + 1);
    }
    return maxLen;
}
```

**Time:** O(n) | **Space:** O(1) (at most 3 entries)

---

## 61. Longest Repeating Character Replacement

**Problem:** Longest substring with repeating char after k replacements.

```cpp
#include <string>
#include <vector>
#include <algorithm>

int characterReplacement(const std::string& s, int k) {
    std::vector<int> count(26, 0);
    int left = 0, maxCount = 0, maxLen = 0;
    for (int right = 0; right < s.size(); ++right) {
        maxCount = std::max(maxCount, ++count[s[right] - 'A']);
        while (right - left + 1 - maxCount > k) {
            count[s[left] - 'A']--;
            ++left;
        }
        maxLen = std::max(maxLen, right - left + 1);
    }
    return maxLen;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 62. Permutation in String

**Problem:** Does s2 contain a permutation of s1?

```cpp
#include <string>
#include <vector>

bool checkInclusion(const std::string& s1, const std::string& s2) {
    int n1 = s1.size(), n2 = s2.size();
    if (n1 > n2) return false;
    std::vector<int> count1(26, 0), count2(26, 0);
    for (int i = 0; i < n1; ++i) {
        count1[s1[i] - 'a']++;
        count2[s2[i] - 'a']++;
    }
    if (count1 == count2) return true;
    for (int i = n1; i < n2; ++i) {
        count2[s2[i] - 'a']++;
        count2[s2[i - n1] - 'a']--;
        if (count1 == count2) return true;
    }
    return false;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 63. Find Anagrams in String

**Problem:** Find all start indices of anagrams of p in s.

```cpp
#include <string>
#include <vector>

std::vector<int> findAnagrams(const std::string& s, const std::string& p) {
    int ns = s.size(), np = p.size();
    if (np > ns) return {};
    std::vector<int> pCount(26, 0), sCount(26, 0), result;
    for (char c : p) pCount[c - 'a']++;
    for (int i = 0; i < ns; ++i) {
        sCount[s[i] - 'a']++;
        if (i >= np) sCount[s[i - np] - 'a']--;
        if (sCount == pCount) result.push_back(i - np + 1);
    }
    return result;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 64. Number of Subarrays with Bounded Maximum

**Problem:** Count subarrays where max element is in [left, right].

```cpp
#include <vector>

int numSubarrayBoundedMax(const std::vector<int>& nums, int left, int right) {
    int count = 0, start = -1, lastValid = -1;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] > right) {
            start = i;
            lastValid = i;
        } else if (nums[i] < left) {
            count += i - lastValid;
        } else {
            lastValid = i;
            count += i - start;
        }
    }
    return count;
}
```

**Time:** O(n) | **Space:** O(1)

---

## 65. Minimum Swaps to Group All 1's Together

**Problem:** Minimum adjacent swaps to group all 1s together.

```cpp
#include <vector>
#include <algorithm>

int minSwaps(const std::vector<int>& data) {
    int ones = std::count(data.begin(), data.end(), 1);
    if (ones <= 1) return 0;
    int zeros = 0;
    for (int i = 0; i < ones; ++i)
        if (data[i] == 0) ++zeros;
    int minZeros = zeros;
    for (int i = ones; i < data.size(); ++i) {
        if (data[i] == 0) ++zeros;
        if (data[i - ones] == 0) --zeros;
        minZeros = std::min(minZeros, zeros);
    }
    return minZeros;
}
```

**Time:** O(n) | **Space:** O(1)

---

# Additional Utility Patterns

## Prefix Sum Template

```cpp
#include <vector>
#include <numeric>

std::vector<int> buildPrefixSum(const std::vector<int>& nums) {
    std::vector<int> prefix(nums.size() + 1, 0);
    std::partial_sum(nums.begin(), nums.end(), prefix.begin() + 1);
    return prefix;
}
// Subarray sum O(1): prefix[r+1] - prefix[l]
```

## Two Pointers Template

```cpp
#include <vector>

std::vector<int> twoPointers(const std::vector<int>& sorted, int target) {
    int i = 0, j = sorted.size() - 1;
    while (i < j) {
        int sum = sorted[i] + sorted[j];
        if (sum == target) return {i, j};
        sum < target ? ++i : --j;
    }
    return {};
}
```

## Binary Search Template

```cpp
#include <vector>

int binarySearch(const std::vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) return mid;
        if (nums[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
```

## Sliding Window Template

```cpp
#include <vector>

int slidingWindow(const std::vector<int>& nums, int k) {
    int left = 0, sum = 0, maxSum = 0;
    for (int right = 0; right < nums.size(); ++right) {
        sum += nums[right];
        if (right - left + 1 == k) {
            maxSum = std::max(maxSum, sum);
            sum -= nums[left++];
        }
    }
    return maxSum;
}
```

---

*End of Array Problems — 65+ patterns with C++ STL solutions.*
