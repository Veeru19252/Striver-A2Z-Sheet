# 50 Array Problems Solved in C++

A comprehensive collection of 50 curated array problems with detailed solutions, C++ implementations using STL, and complexity analysis. Problems are grouped into 6 levels — from Warm-up to Hard — covering the most frequently asked coding interview patterns.

---

## Table of Contents

- [Level 1: Warm-up (1–10)](#level-1-warm-up-1-10)
- [Level 2: Easy (11–20)](#level-2-easy-11-20)
- [Level 3: Medium-Easy (21–30)](#level-3-medium-easy-21-30)
- [Level 4: Medium (31–40)](#level-4-medium-31-40)
- [Level 5: Medium-Hard (41–45)](#level-5-medium-hard-41-45)
- [Level 6: Hard (46–50)](#level-6-hard-46-50)

---

## Level 1: Warm-up (1–10)

---

### 1. Largest Element

**Problem:** Find the maximum element in an array.

**Approach:** Initialize `max` with `INT_MIN` (or the first element). Traverse the array once, updating `max` whenever a larger element is encountered. This is a simple linear scan.

```cpp
#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& arr) {
    int maxVal = INT_MIN;
    for (int x : arr) {
        if (x > maxVal) maxVal = x;
    }
    return maxVal;
}

int main() {
    vector<int> arr = {3, 7, 2, 9, 5, 1, 8};
    cout << "Largest element: " << largestElement(arr) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 2. Second Largest

**Problem:** Find the second largest element in an array in a single pass.

**Approach:** Maintain two variables `largest` and `secondLargest`. Traverse the array once, updating both appropriately. If current element is greater than `largest`, shift `largest` to `secondLargest` and update `largest`. Else if it is greater than `secondLargest`, update `secondLargest`.

```cpp
#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>& arr) {
    int largest = INT_MIN, second = INT_MIN;
    for (int x : arr) {
        if (x > largest) {
            second = largest;
            largest = x;
        } else if (x > second && x != largest) {
            second = x;
        }
    }
    return second;
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << "Second largest: " << secondLargest(arr) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 3. Sorted Check

**Problem:** Check if an array is non-decreasing (sorted in ascending order).

**Approach:** Traverse the array and check if any element is greater than the next element. If such a pair is found, the array is not sorted.

```cpp
#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i - 1] > arr[i]) return false;
    }
    return true;
}

int main() {
    vector<int> arr1 = {1, 2, 2, 3, 5};
    cout << (isSorted(arr1) ? "Sorted" : "Not sorted") << "\n";
    vector<int> arr2 = {1, 3, 2, 4};
    cout << (isSorted(arr2) ? "Sorted" : "Not sorted") << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 4. Remove Duplicates

**Problem:** Remove duplicates in-place from a sorted array and return the new length.

**Approach:** Use two pointers — `i` for the position to place the next unique element, and `j` to scan the array. When `arr[j] != arr[i]`, increment `i` and copy `arr[j]` to `arr[i]`.

```cpp
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& arr) {
    if (arr.empty()) return 0;
    int i = 0;
    for (int j = 1; j < (int)arr.size(); ++j) {
        if (arr[j] != arr[i]) {
            ++i;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5};
    int newLen = removeDuplicates(arr);
    cout << "New length: " << newLen << "\n";
    for (int i = 0; i < newLen; ++i) cout << arr[i] << " ";
    cout << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 5. Left Rotate by One

**Problem:** Shift all elements of the array left by one position. The first element moves to the end.

**Approach:** Store the first element in a temporary variable, shift all elements one position left, then place the temporary at the last position.

```cpp
#include <bits/stdc++.h>
using namespace std;

void leftRotateByOne(vector<int>& arr) {
    if (arr.empty()) return;
    int temp = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        arr[i - 1] = arr[i];
    }
    arr[arr.size() - 1] = temp;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    leftRotateByOne(arr);
    for (int x : arr) cout << x << " ";
    cout << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 6. Left Rotate by K

**Problem:** Rotate the array left by K positions.

**Approach:** Reverse the first K elements, reverse the remaining n − K elements, then reverse the entire array. This three-reversal technique achieves rotation in O(n) time with O(1) extra space.

```cpp
#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>& arr, int l, int r) {
    while (l < r) swap(arr[l++], arr[r--]);
}

void leftRotate(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) return;
    k %= n;
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    leftRotate(arr, 3);
    for (int x : arr) cout << x << " ";
    cout << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 7. Move Zeroes

**Problem:** Move all zeroes to the end of the array while preserving the relative order of non-zero elements.

**Approach:** Use a pointer `j` to track the position where the next non-zero element should go. Traverse the array; whenever a non-zero is encountered, swap it with the element at index `j` and increment `j`. This effectively shifts all non-zeros to the front.

```cpp
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& arr) {
    int j = 0;
    for (int i = 0; i < (int)arr.size(); ++i) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            ++j;
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    moveZeroes(arr);
    for (int x : arr) cout << x << " ";
    cout << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 8. Linear Search

**Problem:** Find the first occurrence of a given element in the array. Return its index, or -1 if not found.

**Approach:** Traverse the array from left to right and return the index when the element matches. If no match is found after scanning all elements, return -1.

```cpp
#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& arr, int target) {
    for (int i = 0; i < (int)arr.size(); ++i) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int main() {
    vector<int> arr = {4, 2, 7, 1, 9, 3};
    cout << "Index of 7: " << linearSearch(arr, 7) << "\n";
    cout << "Index of 5: " << linearSearch(arr, 5) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 9. Missing Number

**Problem:** Given an array containing n distinct numbers taken from 0 .. n, find the one missing number.

**Approach:** Compute the expected sum (n × (n+1)/2) and subtract the actual sum of the array. The difference is the missing number.

```cpp
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& arr) {
    int n = arr.size();
    int expected = n * (n + 1) / 2;
    int actual = accumulate(arr.begin(), arr.end(), 0);
    return expected - actual;
}

int main() {
    vector<int> arr = {3, 0, 1};
    cout << "Missing number: " << missingNumber(arr) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 10. Max Consecutive Ones

**Problem:** Find the maximum number of consecutive 1s in a binary array.

**Approach:** Traverse the array, maintaining a running count of the current streak of 1s. Reset the count when a 0 is encountered. Update the global maximum when a longer streak is found.

```cpp
#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& arr) {
    int maxCount = 0, curr = 0;
    for (int x : arr) {
        if (x == 1) {
            ++curr;
            maxCount = max(maxCount, curr);
        } else {
            curr = 0;
        }
    }
    return maxCount;
}

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1};
    cout << "Max consecutive 1s: " << findMaxConsecutiveOnes(arr) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

## Level 2: Easy (11–20)

---

### 11. Two Sum

**Problem:** Return indices of two numbers in an array that add up to a given target.

**Approach:** Use an unordered_map to store each element's index as we traverse. For each element, compute its complement (target − arr[i]) and check if it exists in the map. If found, return the pair of indices.

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < (int)arr.size(); ++i) {
        int complement = target - arr[i];
        if (mp.count(complement)) {
            return {mp[complement], i};
        }
        mp[arr[i]] = i;
    }
    return {};
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    vector<int> res = twoSum(arr, target);
    cout << "Indices: " << res[0] << " " << res[1] << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(n)

---

### 12. Single Number

**Problem:** Every element appears twice except one; find the unique element. Use XOR.

**Approach:** XOR all elements together. Since `a ^ a = 0` and `a ^ 0 = a`, elements appearing twice cancel out, leaving the single element.

```cpp
#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& arr) {
    int res = 0;
    for (int x : arr) res ^= x;
    return res;
}

int main() {
    vector<int> arr = {4, 1, 2, 1, 2};
    cout << "Single number: " << singleNumber(arr) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 13. Intersection of Two Arrays

**Problem:** Return the common elements (unique) between two arrays.

**Approach:** Insert all elements of the first array into an unordered_set. Then traverse the second array: if an element exists in the set, add it to the result and erase it from the set to avoid duplicates.

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
    unordered_set<int> st(arr1.begin(), arr1.end());
    vector<int> res;
    for (int x : arr2) {
        if (st.count(x)) {
            res.push_back(x);
            st.erase(x);
        }
    }
    return res;
}

int main() {
    vector<int> arr1 = {1, 2, 2, 1};
    vector<int> arr2 = {2, 2, 3};
    vector<int> res = intersection(arr1, arr2);
    for (int x : res) cout << x << " ";
    cout << "\n";
    return 0;
}
```

**Time Complexity:** O(n + m)  
**Space Complexity:** O(n)

---

### 14. Union of Two Sorted

**Problem:** Return the union (unique elements) of two sorted arrays.

**Approach:** Use a two-pointer technique. Compare elements at both pointers; add the smaller one to the result and advance its pointer (skip duplicates by checking the last added element). When one array is exhausted, copy the remaining elements from the other.

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> unionSorted(vector<int>& a, vector<int>& b) {
    vector<int> res;
    int i = 0, j = 0;
    int na = a.size(), nb = b.size();
    while (i < na && j < nb) {
        if (a[i] < b[j]) {
            if (res.empty() || res.back() != a[i]) res.push_back(a[i]);
            ++i;
        } else if (a[i] > b[j]) {
            if (res.empty() || res.back() != b[j]) res.push_back(b[j]);
            ++j;
        } else {
            if (res.empty() || res.back() != a[i]) res.push_back(a[i]);
            ++i; ++j;
        }
    }
    while (i < na) {
        if (res.empty() || res.back() != a[i]) res.push_back(a[i]);
        ++i;
    }
    while (j < nb) {
        if (res.empty() || res.back() != b[j]) res.push_back(b[j]);
        ++j;
    }
    return res;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 5, 6, 7};
    vector<int> res = unionSorted(a, b);
    for (int x : res) cout << x << " ";
    cout << "\n";
    return 0;
}
```

**Time Complexity:** O(n + m)  
**Space Complexity:** O(n + m)

---

### 15. Number That Appears Once

**Problem:** Every element appears twice except one; find the unique element using XOR.

**Approach:** This is identical to Problem 12. XOR all elements together; duplicates cancel out, leaving the single number.

```cpp
#include <bits/stdc++.h>
using namespace std;

int appearsOnce(vector<int>& arr) {
    int res = 0;
    for (int x : arr) res ^= x;
    return res;
}

int main() {
    vector<int> arr = {2, 3, 5, 4, 5, 3, 4};
    cout << "Appears once: " << appearsOnce(arr) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 16. Longest Subarray Sum K (positive)

**Problem:** Find the length of the longest subarray whose sum equals K. (All elements are positive.)

**Approach:** Use a sliding window with two pointers `l` and `r`. Expand `r` to add elements to the current sum. If the sum exceeds K, shrink from the left by incrementing `l`. When the sum equals K, update the maximum length.

```cpp
#include <bits/stdc++.h>
using namespace std;

int longestSubarraySumK(vector<int>& arr, int k) {
    int n = arr.size();
    int l = 0, sum = 0, maxLen = 0;
    for (int r = 0; r < n; ++r) {
        sum += arr[r];
        while (sum > k && l <= r) {
            sum -= arr[l];
            ++l;
        }
        if (sum == k) {
            maxLen = max(maxLen, r - l + 1);
        }
    }
    return maxLen;
}

int main() {
    vector<int> arr = {1, 2, 3, 1, 1, 1, 4, 2};
    int k = 5;
    cout << "Longest subarray length: " << longestSubarraySumK(arr, k) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 17. Sort Colors

**Problem:** Sort an array containing only 0s, 1s, and 2s in-place (Dutch National Flag algorithm).

**Approach:** Use three pointers: `low` (boundary for 0), `mid` (current), and `high` (boundary for 2). If `arr[mid] == 0`, swap with `arr[low]` and advance both `low` and `mid`. If `arr[mid] == 1`, just advance `mid`. If `arr[mid] == 2`, swap with `arr[high]` and decrement `high`.

```cpp
#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& arr) {
    int low = 0, mid = 0, high = arr.size() - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            ++low; ++mid;
        } else if (arr[mid] == 1) {
            ++mid;
        } else {
            swap(arr[mid], arr[high]);
            --high;
        }
    }
}

int main() {
    vector<int> arr = {2, 0, 2, 1, 1, 0};
    sortColors(arr);
    for (int x : arr) cout << x << " ";
    cout << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 18. Majority Element

**Problem:** Find the element that appears more than ⌊n/2⌋ times (Boyer-Moore Voting Algorithm).

**Approach:** Maintain a candidate and a count. Traverse the array: if count is 0, set the current element as candidate. If current equals candidate, increment count; else decrement count. The candidate at the end is the majority element.

```cpp
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& arr) {
    int candidate = 0, count = 0;
    for (int x : arr) {
        if (count == 0) {
            candidate = x;
            count = 1;
        } else if (x == candidate) {
            ++count;
        } else {
            --count;
        }
    }
    return candidate;
}

int main() {
    vector<int> arr = {3, 2, 3, 1, 3, 3, 2, 3};
    cout << "Majority element: " << majorityElement(arr) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 19. Maximum Subarray (Kadane's Algorithm)

**Problem:** Find the contiguous subarray with the largest sum.

**Approach:** Maintain `currentSum` (reset to 0 when negative) and `maxSum`. Iterate through the array, adding each element to `currentSum`. Update `maxSum` if `currentSum > maxSum`. If `currentSum` becomes negative, reset it to 0.

```cpp
#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int>& arr) {
    int maxSum = INT_MIN, currSum = 0;
    for (int x : arr) {
        currSum += x;
        maxSum = max(maxSum, currSum);
        if (currSum < 0) currSum = 0;
    }
    return maxSum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum subarray sum: " << maxSubarraySum(arr) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 20. Best Time to Buy/Sell Stock

**Problem:** Given an array where `arr[i]` is the stock price on day `i`, find the maximum profit with at most one transaction.

**Approach:** Track the minimum price seen so far. For each price, compute the profit if sold today (price − minPrice) and update the maximum profit.

```cpp
#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX, maxProfit = 0;
    for (int p : prices) {
        minPrice = min(minPrice, p);
        maxProfit = max(maxProfit, p - minPrice);
    }
    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Max profit: " << maxProfit(prices) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

## Level 3: Medium-Easy (21–30)

---

### 21. Subarray Sum Equals K

**Problem:** Count the number of subarrays whose sum equals K. (Array may contain negative numbers.)

**Approach:** Use a prefix-sum technique with an unordered_map. Compute cumulative sum as we traverse. For each sum `cum`, the number of subarrays ending at the current index that sum to K is the frequency of `cum − K` in the map. Update the map with the current cumulative sum.

```cpp
#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& arr, int k) {
    unordered_map<int, int> mp;
    mp[0] = 1;
    int cum = 0, count = 0;
    for (int x : arr) {
        cum += x;
        if (mp.count(cum - k)) count += mp[cum - k];
        ++mp[cum];
    }
    return count;
}

int main() {
    vector<int> arr = {1, 1, 1};
    int k = 2;
    cout << "Count: " << subarraySum(arr, k) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(n)

---

### 22. Majority Element II

**Problem:** Find all elements that appear more than ⌊n/3⌋ times (at most two such elements exist).

**Approach:** Extended Boyer-Moore algorithm with two candidates and two counts. First pass: identify potential candidates. Second pass: verify their counts exceed n/3.

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElementII(vector<int>& arr) {
    int c1 = 0, c2 = 0, cnt1 = 0, cnt2 = 0;
    for (int x : arr) {
        if (x == c1) ++cnt1;
        else if (x == c2) ++cnt2;
        else if (cnt1 == 0) { c1 = x; cnt1 = 1; }
        else if (cnt2 == 0) { c2 = x; cnt2 = 1; }
        else { --cnt1; --cnt2; }
    }
    cnt1 = cnt2 = 0;
    for (int x : arr) {
        if (x == c1) ++cnt1;
        else if (x == c2) ++cnt2;
    }
    vector<int> res;
    int n = arr.size();
    if (cnt1 > n / 3) res.push_back(c1);
    if (cnt2 > n / 3) res.push_back(c2);
    return res;
}

int main() {
    vector<int> arr = {1, 1, 1, 2, 2, 2, 3};
    vector<int> res = majorityElementII(arr);
    for (int x : res) cout << x << " ";
    cout << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 23. Three Sum

**Problem:** Find all unique triplets in the array that sum to zero.

**Approach:** Sort the array. For each element `arr[i]` (skip duplicates), use two pointers `l = i+1` and `r = n-1` to find pairs that sum to `-arr[i]`. Skip duplicate values for both pointers.

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    vector<vector<int>> res;
    int n = arr.size();
    for (int i = 0; i < n - 2; ++i) {
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        int l = i + 1, r = n - 1;
        while (l < r) {
            int sum = arr[i] + arr[l] + arr[r];
            if (sum == 0) {
                res.push_back({arr[i], arr[l], arr[r]});
                while (l < r && arr[l] == arr[l + 1]) ++l;
                while (l < r && arr[r] == arr[r - 1]) --r;
                ++l; --r;
            } else if (sum < 0) {
                ++l;
            } else {
                --r;
            }
        }
    }
    return res;
}

int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    auto res = threeSum(arr);
    for (auto& v : res) {
        cout << v[0] << " " << v[1] << " " << v[2] << "\n";
    }
    return 0;
}
```

**Time Complexity:** O(n²)  
**Space Complexity:** O(1) auxiliary (ignoring output)

---

### 24. Three Sum Closest

**Problem:** Find the sum of three integers that is closest to a given target.

**Approach:** Sort the array. For each `arr[i]`, use two pointers `l` and `r` to find the pair that makes the sum closest to `target`. Update the closest sum whenever the current sum is nearer.

```cpp
#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int closest = arr[0] + arr[1] + arr[2];
    for (int i = 0; i < n - 2; ++i) {
        int l = i + 1, r = n - 1;
        while (l < r) {
            int sum = arr[i] + arr[l] + arr[r];
            if (abs(sum - target) < abs(closest - target)) {
                closest = sum;
            }
            if (sum < target) ++l;
            else if (sum > target) --r;
            else return sum;
        }
    }
    return closest;
}

int main() {
    vector<int> arr = {-1, 2, 1, -4};
    int target = 1;
    cout << "Closest sum: " << threeSumClosest(arr, target) << "\n";
    return 0;
}
```

**Time Complexity:** O(n²)  
**Space Complexity:** O(1)

---

### 25. Four Sum

**Problem:** Find all unique quadruplets that sum to a given target.

**Approach:** Sort the array. Use two nested loops for the first two elements, then two pointers for the remaining pair. Skip duplicates at every level.

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());
    vector<vector<int>> res;
    int n = arr.size();
    for (int i = 0; i < n - 3; ++i) {
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        for (int j = i + 1; j < n - 2; ++j) {
            if (j > i + 1 && arr[j] == arr[j - 1]) continue;
            int l = j + 1, r = n - 1;
            while (l < r) {
                long long sum = (long long)arr[i] + arr[j] + arr[l] + arr[r];
                if (sum == target) {
                    res.push_back({arr[i], arr[j], arr[l], arr[r]});
                    while (l < r && arr[l] == arr[l + 1]) ++l;
                    while (l < r && arr[r] == arr[r - 1]) --r;
                    ++l; --r;
                } else if (sum < target) {
                    ++l;
                } else {
                    --r;
                }
            }
        }
    }
    return res;
}

int main() {
    vector<int> arr = {1, 0, -1, 0, -2, 2};
    int target = 0;
    auto res = fourSum(arr, target);
    for (auto& v : res) {
        cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << "\n";
    }
    return 0;
}
```

**Time Complexity:** O(n³)  
**Space Complexity:** O(1) auxiliary (ignoring output)

---

### 26. Longest Consecutive Sequence

**Problem:** Given an unsorted array, find the length of the longest consecutive elements sequence.

**Approach:** Insert all elements into an unordered_set. For each element, if it is the start of a sequence (its predecessor is not in the set), count the length of the consecutive sequence by repeatedly checking for the next number. Track the maximum length.

```cpp
#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& arr) {
    unordered_set<int> st(arr.begin(), arr.end());
    int maxLen = 0;
    for (int x : arr) {
        if (!st.count(x - 1)) {
            int curr = x;
            int len = 1;
            while (st.count(curr + 1)) {
                ++curr;
                ++len;
            }
            maxLen = max(maxLen, len);
        }
    }
    return maxLen;
}

int main() {
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    cout << "Longest consecutive length: " << longestConsecutive(arr) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(n)

---

### 27. Longest Subarray with Sum K (any)

**Problem:** Find the length of the longest subarray with sum equal to K. Array may contain negative numbers.

**Approach:** Use a prefix sum map (cumulative sum → first index). If `cum == k`, update `maxLen`. If `cum - k` exists in the map, update `maxLen`. Insert `cum` into the map only if it is not already present (to keep the earliest index).

```cpp
#include <bits/stdc++.h>
using namespace std;

int longestSubarraySumK(vector<int>& arr, int k) {
    unordered_map<int, int> mp;
    int cum = 0, maxLen = 0;
    for (int i = 0; i < (int)arr.size(); ++i) {
        cum += arr[i];
        if (cum == k) maxLen = i + 1;
        if (mp.count(cum - k)) {
            maxLen = max(maxLen, i - mp[cum - k]);
        }
        if (!mp.count(cum)) mp[cum] = i;
    }
    return maxLen;
}

int main() {
    vector<int> arr = {1, -1, 5, -2, 3};
    int k = 3;
    cout << "Longest subarray length: " << longestSubarraySumK(arr, k) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(n)

---

### 28. Subarray with XOR K

**Problem:** Count the number of subarrays whose XOR equals K.

**Approach:** Maintain a prefix XOR and an unordered_map storing the frequency of each prefix XOR value. For each element, if `prefixXor == k`, increment count. Also check if `prefixXor ^ k` exists in the map — if so, add its frequency. Then increment the frequency of the current prefix XOR.

```cpp
#include <bits/stdc++.h>
using namespace std;

int subarrayXorK(vector<int>& arr, int k) {
    unordered_map<int, int> mp;
    int xr = 0, count = 0;
    for (int x : arr) {
        xr ^= x;
        if (xr == k) ++count;
        if (mp.count(xr ^ k)) count += mp[xr ^ k];
        ++mp[xr];
    }
    return count;
}

int main() {
    vector<int> arr = {4, 2, 2, 6, 4};
    int k = 6;
    cout << "Count: " << subarrayXorK(arr, k) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(n)

---

### 29. Count Subarrays with XOR K

**Problem:** Count the number of subarrays whose XOR equals K. Same as above.

**Approach:** This is identical to Problem 28. Use prefix XOR with a hash map.

```cpp
#include <bits/stdc++.h>
using namespace std;

int countSubarrayXorK(vector<int>& arr, int k) {
    unordered_map<int, int> mp;
    int xr = 0, count = 0;
    for (int x : arr) {
        xr ^= x;
        if (xr == k) ++count;
        if (mp.count(xr ^ k)) count += mp[xr ^ k];
        ++mp[xr];
    }
    return count;
}

int main() {
    vector<int> arr = {5, 6, 7, 8, 9};
    int k = 5;
    cout << "Count: " << countSubarrayXorK(arr, k) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(n)

---

### 30. Next Permutation

**Problem:** Rearrange numbers into the next lexicographically greater permutation in-place.

**Approach:** Find the first decreasing element from the right (pivot). If no such element exists, reverse the entire array. Otherwise, find the next larger element to the right of the pivot and swap them. Finally, reverse the suffix after the pivot.

```cpp
#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& arr) {
    int n = arr.size();
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1]) --i;
    if (i >= 0) {
        int j = n - 1;
        while (arr[j] <= arr[i]) --j;
        swap(arr[i], arr[j]);
    }
    reverse(arr.begin() + i + 1, arr.end());
}

int main() {
    vector<int> arr = {1, 2, 3};
    nextPermutation(arr);
    for (int x : arr) cout << x << " ";
    cout << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

## Level 4: Medium (31–40)

---

### 31. Rotate Matrix 90°

**Problem:** Rotate an n × n matrix by 90 degrees clockwise in-place.

**Approach:** First transpose the matrix (swap `matrix[i][j]` with `matrix[j][i]`). Then reverse each row to achieve a 90° clockwise rotation.

```cpp
#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>>& mat) {
    int n = mat.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    for (int i = 0; i < n; ++i) {
        reverse(mat[i].begin(), mat[i].end());
    }
}

int main() {
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotateMatrix(mat);
    for (auto& row : mat) {
        for (int x : row) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
```

**Time Complexity:** O(n²)  
**Space Complexity:** O(1)

---

### 32. Set Matrix Zeroes

**Problem:** If an element in an m × n matrix is 0, set its entire row and column to 0 in-place.

**Approach:** Use the first row and first column as markers. Traverse the matrix; if `matrix[i][j] == 0`, mark `matrix[i][0]` and `matrix[0][j]`. Then, using those markers, set rows and columns to zero (excluding the first row/col). Finally, handle the first row and column separately.

```cpp
#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& mat) {
    int m = mat.size(), n = mat[0].size();
    bool firstRow = false, firstCol = false;
    for (int j = 0; j < n; ++j) if (mat[0][j] == 0) firstRow = true;
    for (int i = 0; i < m; ++i) if (mat[i][0] == 0) firstCol = true;
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (mat[i][j] == 0) {
                mat[i][0] = 0;
                mat[0][j] = 0;
            }
        }
    }
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (mat[i][0] == 0 || mat[0][j] == 0) mat[i][j] = 0;
        }
    }
    if (firstRow) for (int j = 0; j < n; ++j) mat[0][j] = 0;
    if (firstCol) for (int i = 0; i < m; ++i) mat[i][0] = 0;
}

int main() {
    vector<vector<int>> mat = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    setZeroes(mat);
    for (auto& row : mat) {
        for (int x : row) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
```

**Time Complexity:** O(m × n)  
**Space Complexity:** O(1)

---

### 33. Spiral Matrix

**Problem:** Return all elements of an m × n matrix in spiral order.

**Approach:** Maintain four boundaries: `top`, `bottom`, `left`, `right`. Traverse in four directions (right → down → left → up), shrinking the boundaries after each completed direction. Stop when boundaries cross.

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& mat) {
    if (mat.empty()) return {};
    vector<int> res;
    int top = 0, bottom = mat.size() - 1;
    int left = 0, right = mat[0].size() - 1;
    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; ++j) res.push_back(mat[top][j]);
        ++top;
        for (int i = top; i <= bottom; ++i) res.push_back(mat[i][right]);
        --right;
        if (top <= bottom) {
            for (int j = right; j >= left; --j) res.push_back(mat[bottom][j]);
            --bottom;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; --i) res.push_back(mat[i][left]);
            ++left;
        }
    }
    return res;
}

int main() {
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> res = spiralOrder(mat);
    for (int x : res) cout << x << " ";
    cout << "\n";
    return 0;
}
```

**Time Complexity:** O(m × n)  
**Space Complexity:** O(1) auxiliary (ignoring output)

---

### 34. Rearrange Pos/Neg

**Problem:** Rearrange an array so that positive and negative numbers alternate. Extra elements of one type are placed at the end.

**Approach:** Separate positive and negative numbers into two vectors, then merge them alternately. Alternatively, use two pointers to rearrange in-place by shifting elements.

```cpp
#include <bits/stdc++.h>
using namespace std;

void rearrangePosNeg(vector<int>& arr) {
    vector<int> pos, neg;
    for (int x : arr) {
        if (x >= 0) pos.push_back(x);
        else neg.push_back(x);
    }
    int i = 0, j = 0, k = 0;
    bool posTurn = true;
    while (i < (int)pos.size() && j < (int)neg.size()) {
        if (posTurn) arr[k++] = pos[i++];
        else arr[k++] = neg[j++];
        posTurn = !posTurn;
    }
    while (i < (int)pos.size()) arr[k++] = pos[i++];
    while (j < (int)neg.size()) arr[k++] = neg[j++];
}

int main() {
    vector<int> arr = {1, -2, 3, -4, -5, 6, 7};
    rearrangePosNeg(arr);
    for (int x : arr) cout << x << " ";
    cout << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(n)

---

### 35. Leaders in Array

**Problem:** An element is a leader if it is greater than all elements to its right. Find all leaders.

**Approach:** Traverse the array from right to left. Keep track of the maximum element seen so far. If the current element is greater than this maximum, it is a leader.

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int maxRight = INT_MIN;
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] > maxRight) {
            res.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> res = leaders(arr);
    for (int x : res) cout << x << " ";
    cout << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(n)

---

### 36. Container With Most Water

**Problem:** Given an array of heights, find two lines that together with the x‑axis form a container that holds the most water.

**Approach:** Use two pointers `l = 0` and `r = n-1`. Calculate the area as `min(height[l], height[r]) * (r - l)`. Move the pointer with the smaller height inward, because moving the taller one cannot increase the area.

```cpp
#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int l = 0, r = height.size() - 1, maxWater = 0;
    while (l < r) {
        int h = min(height[l], height[r]);
        maxWater = max(maxWater, h * (r - l));
        if (height[l] < height[r]) ++l;
        else --r;
    }
    return maxWater;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Max water: " << maxArea(height) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 37. Trapping Rain Water

**Problem:** Given an array of non-negative integers representing elevation heights, compute how much water can be trapped after raining.

**Approach:** Use two pointers. Maintain `leftMax` and `rightMax`. If `height[l] < height[r]`, water trapped at `l` is `leftMax - height[l]` (if positive), then move `l` inward. Else mirror for the right side.

```cpp
#include <bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int l = 0, r = height.size() - 1;
    int leftMax = 0, rightMax = 0, water = 0;
    while (l < r) {
        if (height[l] < height[r]) {
            if (height[l] >= leftMax) leftMax = height[l];
            else water += leftMax - height[l];
            ++l;
        } else {
            if (height[r] >= rightMax) rightMax = height[r];
            else water += rightMax - height[r];
            --r;
        }
    }
    return water;
}

int main() {
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Trapped water: " << trap(height) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 38. Product of Array Except Self

**Problem:** Return an array `res` such that `res[i]` is equal to the product of all elements except `arr[i]`. Solve without division in O(n).

**Approach:** Compute prefix products in the result array. Then traverse from the right with a suffix product variable, multiplying each element.

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& arr) {
    int n = arr.size();
    vector<int> res(n, 1);
    for (int i = 1; i < n; ++i) {
        res[i] = res[i - 1] * arr[i - 1];
    }
    int suffix = 1;
    for (int i = n - 1; i >= 0; --i) {
        res[i] *= suffix;
        suffix *= arr[i];
    }
    return res;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<int> res = productExceptSelf(arr);
    for (int x : res) cout << x << " ";
    cout << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1) auxiliary (ignoring output)

---

### 39. Maximum Product Subarray

**Problem:** Find the contiguous subarray with the maximum product.

**Approach:** Track the maximum and minimum product ending at each position (the minimum can become the maximum when multiplied by a negative). Update the global maximum product.

```cpp
#include <bits/stdc++.h>
using namespace std;

int maxProductSubarray(vector<int>& arr) {
    int maxProd = arr[0], minProd = arr[0], res = arr[0];
    for (int i = 1; i < (int)arr.size(); ++i) {
        if (arr[i] < 0) swap(maxProd, minProd);
        maxProd = max(arr[i], maxProd * arr[i]);
        minProd = min(arr[i], minProd * arr[i]);
        res = max(res, maxProd);
    }
    return res;
}

int main() {
    vector<int> arr = {2, 3, -2, 4};
    cout << "Max product: " << maxProductSubarray(arr) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 40. Find All Duplicates

**Problem:** Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others once. Find all elements that appear twice.

**Approach:** Use the index-negation technique. For each element `x = abs(arr[i])`, mark index `x-1` as negative. If `arr[x-1]` is already negative, then `x` has been seen before and is a duplicate.

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> findAllDuplicates(vector<int>& arr) {
    vector<int> res;
    for (int i = 0; i < (int)arr.size(); ++i) {
        int idx = abs(arr[i]) - 1;
        if (arr[idx] < 0) res.push_back(abs(arr[i]));
        else arr[idx] = -arr[idx];
    }
    return res;
}

int main() {
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> res = findAllDuplicates(arr);
    for (int x : res) cout << x << " ";
    cout << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1) auxiliary (ignoring output)

---

## Level 5: Medium-Hard (41–45)

---

### 41. First Missing Positive

**Problem:** Find the smallest positive integer that does not appear in the array.

**Approach:** Use cycle sort (index placement). Place each number `x` at index `x-1` if it is in the range `[1, n]`. Then scan for the first index where `arr[i] != i+1`; return `i+1`. If all are in place, return `n+1`.

```cpp
#include <bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        while (arr[i] >= 1 && arr[i] <= n && arr[i] != arr[arr[i] - 1]) {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }
    for (int i = 0; i < n; ++i) {
        if (arr[i] != i + 1) return i + 1;
    }
    return n + 1;
}

int main() {
    vector<int> arr = {3, 4, -1, 1};
    cout << "First missing positive: " << firstMissingPositive(arr) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 42. Merge Intervals

**Problem:** Given a collection of intervals `[start, end]`, merge all overlapping intervals.

**Approach:** Sort intervals by start time. Iterate through the sorted list: if the current interval overlaps with the last merged interval (i.e., `start <= lastEnd`), merge by updating the end to `max(end, lastEnd)`. Otherwise, add the current interval to the result.

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    if (intervals.empty()) return {};
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> res;
    res.push_back(intervals[0]);
    for (size_t i = 1; i < intervals.size(); ++i) {
        if (intervals[i][0] <= res.back()[1]) {
            res.back()[1] = max(res.back()[1], intervals[i][1]);
        } else {
            res.push_back(intervals[i]);
        }
    }
    return res;
}

int main() {
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    auto res = mergeIntervals(intervals);
    for (auto& v : res) cout << "[" << v[0] << "," << v[1] << "] ";
    cout << "\n";
    return 0;
}
```

**Time Complexity:** O(n log n)  
**Space Complexity:** O(n)

---

### 43. Non-overlapping Intervals

**Problem:** Find the minimum number of intervals to remove to make the rest non-overlapping.

**Approach:** Sort intervals by end time. Greedily select the interval with the earliest end that does not overlap with the previously selected interval. Count how many intervals must be removed (total − selected).

```cpp
#include <bits/stdc++.h>
using namespace std;

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    if (intervals.empty()) return 0;
    sort(intervals.begin(), intervals.end(),
         [](vector<int>& a, vector<int>& b) { return a[1] < b[1]; });
    int count = 1, lastEnd = intervals[0][1];
    for (size_t i = 1; i < intervals.size(); ++i) {
        if (intervals[i][0] >= lastEnd) {
            ++count;
            lastEnd = intervals[i][1];
        }
    }
    return intervals.size() - count;
}

int main() {
    vector<vector<int>> intervals = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
    cout << "Min removals: " << eraseOverlapIntervals(intervals) << "\n";
    return 0;
}
```

**Time Complexity:** O(n log n)  
**Space Complexity:** O(1)

---

### 44. Min Arrows to Burst Balloons

**Problem:** Given balloon intervals (start, end), find the minimum number of arrows needed to burst all balloons. An arrow can burst multiple overlapping balloons.

**Approach:** Sort intervals by end coordinate. Greedily shoot an arrow at the end of the first balloon. Iterate: if a balloon's start is beyond the last arrow position, shoot a new arrow at that balloon's end.

```cpp
#include <bits/stdc++.h>
using namespace std;

int findMinArrowShots(vector<vector<int>>& points) {
    if (points.empty()) return 0;
    sort(points.begin(), points.end(),
         [](vector<int>& a, vector<int>& b) { return a[1] < b[1]; });
    int arrows = 1, last = points[0][1];
    for (size_t i = 1; i < points.size(); ++i) {
        if (points[i][0] > last) {
            ++arrows;
            last = points[i][1];
        }
    }
    return arrows;
}

int main() {
    vector<vector<int>> points = {{10, 16}, {2, 8}, {1, 6}, {7, 12}};
    cout << "Min arrows: " << findMinArrowShots(points) << "\n";
    return 0;
}
```

**Time Complexity:** O(n log n)  
**Space Complexity:** O(1)

---

### 45. Max Sum of 3 Non-Overlapping Subarrays

**Problem:** Given an array and an integer k, find three non-overlapping subarrays of length k with the maximum possible sum. Return the starting indices.

**Approach:** Use DP with prefix sums and two auxiliary arrays (`left` and `right`). `left[i]` stores the best starting index for one subarray in [0, i]. `right[i]` stores the best starting index for one subarray in [i, n − k]. Then iterate the middle subarray to find the best triplet.

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> maxSumOfThreeSubarrays(vector<int>& arr, int k) {
    int n = arr.size();
    vector<int> sum(n + 1, 0);
    for (int i = 0; i < n; ++i) sum[i + 1] = sum[i] + arr[i];

    auto rangeSum = [&](int i) { return sum[i + k] - sum[i]; };

    vector<int> left(n, 0);
    int best = 0;
    for (int i = 0; i <= n - k; ++i) {
        if (rangeSum(i) > rangeSum(best)) best = i;
        left[i] = best;
    }

    vector<int> right(n, 0);
    best = n - k;
    for (int i = n - k; i >= 0; --i) {
        if (rangeSum(i) >= rangeSum(best)) best = i;
        right[i] = best;
    }

    vector<int> res = {-1, -1, -1};
    int maxTotal = 0;
    for (int mid = k; mid <= n - 2 * k; ++mid) {
        int l = left[mid - k];
        int r = right[mid + k];
        int total = rangeSum(l) + rangeSum(mid) + rangeSum(r);
        if (res[0] == -1 || total > maxTotal) {
            maxTotal = total;
            res = {l, mid, r};
        }
    }
    return res;
}

int main() {
    vector<int> arr = {1, 2, 1, 2, 6, 7, 5, 1};
    int k = 2;
    vector<int> res = maxSumOfThreeSubarrays(arr, k);
    cout << "Indices: " << res[0] << " " << res[1] << " " << res[2] << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(n)

---

## Level 6: Hard (46–50)

---

### 46. Count Inversions

**Problem:** Count pairs (i, j) such that i < j and arr[i] > arr[j] (inversions). Use merge sort.

**Approach:** During the merge step of merge sort, when an element from the right half is placed before an element from the left half, all remaining elements in the left half form inversions with it. Count and accumulate these.

```cpp
#include <bits/stdc++.h>
using namespace std;

long long mergeCount(vector<int>& arr, int l, int m, int r) {
    vector<int> temp;
    int i = l, j = m + 1;
    long long inv = 0;
    while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
            inv += (m - i + 1);
        }
    }
    while (i <= m) temp.push_back(arr[i++]);
    while (j <= r) temp.push_back(arr[j++]);
    for (int k = 0; k < (int)temp.size(); ++k) arr[l + k] = temp[k];
    return inv;
}

long long mergeSortCount(vector<int>& arr, int l, int r) {
    if (l >= r) return 0;
    int m = l + (r - l) / 2;
    long long inv = mergeSortCount(arr, l, m);
    inv += mergeSortCount(arr, m + 1, r);
    inv += mergeCount(arr, l, m, r);
    return inv;
}

long long countInversions(vector<int>& arr) {
    return mergeSortCount(arr, 0, arr.size() - 1);
}

int main() {
    vector<int> arr = {5, 3, 2, 4, 1};
    cout << "Inversions: " << countInversions(arr) << "\n";
    return 0;
}
```

**Time Complexity:** O(n log n)  
**Space Complexity:** O(n)

---

### 47. Reverse Pairs

**Problem:** Count pairs (i, j) such that i < j and arr[i] > 2 × arr[j].

**Approach:** Use a modified merge sort. During the merge step, before merging, count reverse pairs by scanning the left and right halves with two pointers. Then merge normally.

```cpp
#include <bits/stdc++.h>
using namespace std;

int mergeRevPairs(vector<int>& arr, int l, int m, int r) {
    int j = m + 1, count = 0;
    for (int i = l; i <= m; ++i) {
        while (j <= r && arr[i] > 2LL * arr[j]) ++j;
        count += (j - (m + 1));
    }
    inplace_merge(arr.begin() + l, arr.begin() + m + 1, arr.begin() + r + 1);
    return count;
}

int mergeSortRevPairs(vector<int>& arr, int l, int r) {
    if (l >= r) return 0;
    int m = l + (r - l) / 2;
    int count = mergeSortRevPairs(arr, l, m);
    count += mergeSortRevPairs(arr, m + 1, r);
    count += mergeRevPairs(arr, l, m, r);
    return count;
}

int reversePairs(vector<int>& arr) {
    return mergeSortRevPairs(arr, 0, arr.size() - 1);
}

int main() {
    vector<int> arr = {1, 3, 2, 3, 1};
    cout << "Reverse pairs: " << reversePairs(arr) << "\n";
    return 0;
}
```

**Time Complexity:** O(n log n)  
**Space Complexity:** O(n)

---

### 48. Maximum Gap

**Problem:** Find the maximum difference between consecutive elements in the sorted form of the array. Solve in O(n) time and O(n) space.

**Approach:** Use the Pigeonhole principle with bucket sort. Find the min and max. Create n − 1 buckets. Place each element (except min and max) into a bucket based on its value. Only track the min and max of each bucket. The maximum gap comes from comparing the max of one bucket with the min of the next non-empty bucket.

```cpp
#include <bits/stdc++.h>
using namespace std;

int maximumGap(vector<int>& arr) {
    int n = arr.size();
    if (n < 2) return 0;
    int mn = *min_element(arr.begin(), arr.end());
    int mx = *max_element(arr.begin(), arr.end());
    if (mn == mx) return 0;
    int bucketSize = max(1, (mx - mn) / (n - 1));
    int bucketCount = (mx - mn) / bucketSize + 1;
    vector<int> bucketMin(bucketCount, INT_MAX);
    vector<int> bucketMax(bucketCount, INT_MIN);
    vector<bool> used(bucketCount, false);
    for (int x : arr) {
        int idx = (x - mn) / bucketSize;
        bucketMin[idx] = min(bucketMin[idx], x);
        bucketMax[idx] = max(bucketMax[idx], x);
        used[idx] = true;
    }
    int maxGap = 0, prevMax = mn;
    for (int i = 0; i < bucketCount; ++i) {
        if (!used[i]) continue;
        maxGap = max(maxGap, bucketMin[i] - prevMax);
        prevMax = bucketMax[i];
    }
    return maxGap;
}

int main() {
    vector<int> arr = {3, 6, 9, 1};
    cout << "Maximum gap: " << maximumGap(arr) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(n)

---

### 49. Median of Two Sorted Arrays

**Problem:** Find the median of two sorted arrays in O(log(min(n, m))) time.

**Approach:** Binary search on the smaller array. Partition both arrays such that elements on the left side are ≤ elements on the right side. Adjust the partition using binary search until the correct partition is found. Then compute the median based on combined parity.

```cpp
#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
    if (a.size() > b.size()) return findMedianSortedArrays(b, a);
    int n = a.size(), m = b.size();
    int low = 0, high = n;
    while (low <= high) {
        int cut1 = (low + high) / 2;
        int cut2 = (n + m + 1) / 2 - cut1;
        int left1 = (cut1 == 0) ? INT_MIN : a[cut1 - 1];
        int left2 = (cut2 == 0) ? INT_MIN : b[cut2 - 1];
        int right1 = (cut1 == n) ? INT_MAX : a[cut1];
        int right2 = (cut2 == m) ? INT_MAX : b[cut2];
        if (left1 <= right2 && left2 <= right1) {
            if ((n + m) % 2 == 0) {
                return (max(left1, left2) + min(right1, right2)) / 2.0;
            } else {
                return max(left1, left2);
            }
        } else if (left1 > right2) {
            high = cut1 - 1;
        } else {
            low = cut1 + 1;
        }
    }
    return 0.0;
}

int main() {
    vector<int> a = {1, 3};
    vector<int> b = {2};
    cout << "Median: " << findMedianSortedArrays(a, b) << "\n";
    return 0;
}
```

**Time Complexity:** O(log(min(n, m)))  
**Space Complexity:** O(1)

---

### 50. Largest Rectangle in Histogram

**Problem:** Given an array of bar heights, find the largest rectangle that can be formed in the histogram.

**Approach:** Use a monotonic stack (increasing order of heights). Traverse each bar. While the current bar's height is less than the height of the bar at the top of the stack, pop the stack and compute the area using the popped height as the shortest bar. Use the index from the new stack top as the left boundary.

```cpp
#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    stack<int> st;
    int maxArea = 0;
    int n = heights.size();
    for (int i = 0; i <= n; ++i) {
        int h = (i == n) ? 0 : heights[i];
        while (!st.empty() && h < heights[st.top()]) {
            int height = heights[st.top()];
            st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, height * width);
        }
        st.push(i);
    }
    return maxArea;
}

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout << "Largest rectangle: " << largestRectangleArea(heights) << "\n";
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(n)

---

## Summary

| # | Problem | Technique | Time | Space |
|---|---------|-----------|------|-------|
| 1 | Largest Element | Linear scan | O(n) | O(1) |
| 2 | Second Largest | Single pass with two vars | O(n) | O(1) |
| 3 | Sorted Check | Adjacent comparison | O(n) | O(1) |
| 4 | Remove Duplicates | Two pointers | O(n) | O(1) |
| 5 | Left Rotate by One | Temp + shift | O(n) | O(1) |
| 6 | Left Rotate by K | Three reversals | O(n) | O(1) |
| 7 | Move Zeroes | Two-pointer swap | O(n) | O(1) |
| 8 | Linear Search | Linear scan | O(n) | O(1) |
| 9 | Missing Number | Sum formula | O(n) | O(1) |
| 10 | Max Consecutive Ones | Running count | O(n) | O(1) |
| 11 | Two Sum | Hash map | O(n) | O(n) |
| 12 | Single Number | XOR | O(n) | O(1) |
| 13 | Intersection of Two Arrays | Hash set | O(n+m) | O(n) |
| 14 | Union of Two Sorted | Two pointers | O(n+m) | O(n+m) |
| 15 | Number That Appears Once | XOR | O(n) | O(1) |
| 16 | Longest Subarray Sum K (positive) | Sliding window | O(n) | O(1) |
| 17 | Sort Colors | Dutch flag (3 pointers) | O(n) | O(1) |
| 18 | Majority Element | Boyer-Moore voting | O(n) | O(1) |
| 19 | Maximum Subarray | Kadane's algorithm | O(n) | O(1) |
| 20 | Best Time to Buy/Sell Stock | Track min price | O(n) | O(1) |
| 21 | Subarray Sum Equals K | Prefix sum + map | O(n) | O(n) |
| 22 | Majority Element II | Extended Boyer-Moore | O(n) | O(1) |
| 23 | Three Sum | Sort + two pointers | O(n²) | O(1) |
| 24 | Three Sum Closest | Sort + two pointers | O(n²) | O(1) |
| 25 | Four Sum | Sort + nested two pointers | O(n³) | O(1) |
| 26 | Longest Consecutive Sequence | Unordered set | O(n) | O(n) |
| 27 | Longest Subarray Sum K (any) | Prefix sum map | O(n) | O(n) |
| 28 | Subarray with XOR K | Prefix XOR + map | O(n) | O(n) |
| 29 | Count Subarrays with XOR K | Prefix XOR + map | O(n) | O(n) |
| 30 | Next Permutation | Find pivot + reverse | O(n) | O(1) |
| 31 | Rotate Matrix 90° | Transpose + reverse rows | O(n²) | O(1) |
| 32 | Set Matrix Zeroes | First row/col markers | O(mn) | O(1) |
| 33 | Spiral Matrix | Boundary traversal | O(mn) | O(1) |
| 34 | Rearrange Pos/Neg | Separate + merge | O(n) | O(n) |
| 35 | Leaders in Array | Right-to-left scan | O(n) | O(n) |
| 36 | Container With Most Water | Two pointers | O(n) | O(1) |
| 37 | Trapping Rain Water | Two pointers | O(n) | O(1) |
| 38 | Product of Array Except Self | Prefix × suffix | O(n) | O(1) |
| 39 | Maximum Product Subarray | Track min/max product | O(n) | O(1) |
| 40 | Find All Duplicates | Index negation | O(n) | O(1) |
| 41 | First Missing Positive | Cycle sort | O(n) | O(1) |
| 42 | Merge Intervals | Sort by start | O(n log n) | O(n) |
| 43 | Non-overlapping Intervals | Sort by end (greedy) | O(n log n) | O(1) |
| 44 | Min Arrows to Burst Balloons | Sort by end (greedy) | O(n log n) | O(1) |
| 45 | Max Sum of 3 Non-Overlapping Subarrays | DP + sliding window | O(n) | O(n) |
| 46 | Count Inversions | Merge sort | O(n log n) | O(n) |
| 47 | Reverse Pairs | Modified merge sort | O(n log n) | O(n) |
| 48 | Maximum Gap | Bucket sort (Pigeonhole) | O(n) | O(n) |
| 49 | Median of Two Sorted Arrays | Binary search on partitions | O(log min(n,m)) | O(1) |
| 50 | Largest Rectangle in Histogram | Monotonic stack | O(n) | O(n) |

---

*Happy Coding!*
