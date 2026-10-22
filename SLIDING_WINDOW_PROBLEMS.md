# Sliding Window & Two Pointers Problems

## Table of Contents
- [Fixed Window Problems](#fixed-window-problems)
- [Variable Window Problems](#variable-window-problems)
- [Two Pointers Problems](#two-pointers-problems)

---

# Fixed Window Problems

---

## 1. Maximum Sum Subarray of Size K

**Description:** Given an array of positive integers and a number K, find the maximum sum of any contiguous subarray of size K.

**Example:**
```
Input: arr = [2, 1, 5, 1, 3, 2], K = 3
Output: 9
Explanation: Subarray with max sum is [5, 1, 3] = 9
```

**C++ Code:**
```cpp
int maxSumSubarray(vector<int>& arr, int K) {
    int n = arr.size();
    int sum = 0, maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (i >= K - 1) {
            maxSum = max(maxSum, sum);
            sum -= arr[i - K + 1];
        }
    }
    return maxSum;
}
```

**Complexity:** O(n) time, O(1) space

---

## 2. First Negative in Every K Window

**Description:** Given an array and a window size K, find the first negative integer in each window of size K. If no negative exists, print 0.

**Example:**
```
Input: arr = [12, -1, -7, 8, -15, 30, 16, 28], K = 3
Output: [-1, -1, -7, -15, -15, 0]
```

**C++ Code:**
```cpp
vector<int> firstNegative(vector<int>& arr, int K) {
    int n = arr.size();
    vector<int> result;
    queue<int> q;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) q.push(i);
        if (i >= K - 1) {
            if (!q.empty()) {
                result.push_back(arr[q.front()]);
                if (q.front() <= i - K + 1) q.pop();
            } else {
                result.push_back(0);
            }
        }
    }
    return result;
}
```

**Complexity:** O(n) time, O(K) space

---

## 3. Count Occurrences of Anagrams

**Description:** Given a string S and a pattern P, count how many substrings of S are anagrams of P.

**Example:**
```
Input: S = "forxxorfxdofr", P = "for"
Output: 3
Explanation: "for", "orf", "ofr" are anagrams
```

**C++ Code:**
```cpp
int countAnagrams(string s, string p) {
    vector<int> freq(26, 0);
    for (char c : p) freq[c - 'a']++;
    int k = p.size(), count = 0;
    int unique = 0;
    for (int i = 0; i < 26; i++)
        if (freq[i] > 0) unique++;
    int left = 0, right = 0;
    while (right < s.size()) {
        freq[s[right] - 'a']--;
        if (freq[s[right] - 'a'] == 0) unique--;
        if (right - left + 1 == k) {
            if (unique == 0) count++;
            freq[s[left] - 'a']++;
            if (freq[s[left] - 'a'] == 1) unique++;
            left++;
        }
        right++;
    }
    return count;
}
```

**Complexity:** O(n) time, O(1) space

---

## 4. Maximum of All Subarrays of Size K (Sliding Window Maximum)

**Description:** Given an array and an integer K, find the maximum element in each sliding window of size K. This is the classic "Sliding Window Maximum" problem solved using a deque.

**Example:**
```
Input: arr = [1, 3, -1, -3, 5, 3, 6, 7], K = 3
Output: [3, 3, 5, 5, 6, 7]
```

**C++ Code:**
```cpp
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int> result;
    deque<int> dq;
    for (int i = 0; i < nums.size(); i++) {
        while (!dq.empty() && dq.front() < i - k + 1)
            dq.pop_front();
        while (!dq.empty() && nums[dq.back()] <= nums[i])
            dq.pop_back();
        dq.push_back(i);
        if (i >= k - 1)
            result.push_back(nums[dq.front()]);
    }
    return result;
}
```

**Complexity:** O(n) time, O(K) space

---

## 5. Sum of All Subarray Minimums

**Description:** Given an array, find the sum of minimum elements of every contiguous subarray. Use monotonic stack to find next/prev smaller elements.

**Example:**
```
Input: arr = [3, 1, 2, 4]
Output: 17
Explanation: Subarrays: [3]=3, [1]=1, [2]=2, [4]=4, [3,1]=1, [1,2]=1, [2,4]=2, [3,1,2]=1, [1,2,4]=1, [3,1,2,4]=1
Sum = 3+1+2+4+1+1+2+1+1+1 = 17
```

**C++ Code:**
```cpp
int sumSubarrayMins(vector<int>& arr) {
    int n = arr.size();
    vector<int> left(n), right(n);
    stack<int> s;
    for (int i = 0; i < n; i++) {
        while (!s.empty() && arr[s.top()] >= arr[i]) s.pop();
        left[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }
    while (!s.empty()) s.pop();
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && arr[s.top()] > arr[i]) s.pop();
        right[i] = s.empty() ? n : s.top();
        s.push(i);
    }
    long long ans = 0, mod = 1e9 + 7;
    for (int i = 0; i < n; i++) {
        long long count = (i - left[i]) * (right[i] - i);
        ans = (ans + count * arr[i]) % mod;
    }
    return ans;
}
```

**Complexity:** O(n) time, O(n) space

---

## 6. Sum of All Subarray Maximums

**Description:** Given an array, find the sum of maximum elements of every contiguous subarray. Similar to subarray minimums but reversed.

**Example:**
```
Input: arr = [3, 1, 2, 4]
Output: 50
Explanation: Sum of max of all subarrays = 50
```

**C++ Code:**
```cpp
int sumSubarrayMaxs(vector<int>& arr) {
    int n = arr.size();
    vector<int> left(n), right(n);
    stack<int> s;
    for (int i = 0; i < n; i++) {
        while (!s.empty() && arr[s.top()] <= arr[i]) s.pop();
        left[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }
    while (!s.empty()) s.pop();
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && arr[s.top()] < arr[i]) s.pop();
        right[i] = s.empty() ? n : s.top();
        s.push(i);
    }
    long long ans = 0, mod = 1e9 + 7;
    for (int i = 0; i < n; i++) {
        long long count = (i - left[i]) * (right[i] - i);
        ans = (ans + count * arr[i]) % mod;
    }
    return ans;
}
```

**Complexity:** O(n) time, O(n) space

---

## 7. Permutation in String

**Description:** Given two strings s1 and s2, return true if s2 contains a permutation of s1. In other words, check if any substring of s2 is a permutation of s1.

**Example:**
```
Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: "ba" is a permutation of "ab" and appears in s2.
```

**C++ Code:**
```cpp
bool checkInclusion(string s1, string s2) {
    if (s1.size() > s2.size()) return false;
    vector<int> freq(26, 0);
    for (char c : s1) freq[c - 'a']++;
    int left = 0, right = 0, count = s1.size();
    while (right < s2.size()) {
        if (freq[s2[right] - 'a'] > 0) count--;
        freq[s2[right] - 'a']--;
        right++;
        if (right - left == s1.size()) {
            if (count == 0) return true;
            freq[s2[left] - 'a']++;
            if (freq[s2[left] - 'a'] > 0) count++;
            left++;
        }
    }
    return false;
}
```

**Complexity:** O(n) time, O(1) space

---

## 8. Kth Smallest Element in Sliding Window

**Description:** Given an array and two integers K and M, find the Kth smallest element in every window of size M.

**Example:**
```
Input: arr = [3, 1, 2, 8, 5], K = 2, M = 3
Output: [2, 2, 5]
Explanation:
[3,1,2] -> 2nd smallest = 2
[1,2,8] -> 2nd smallest = 2
[2,8,5] -> 2nd smallest = 5
```

**C++ Code:**
```cpp
vector<int> kthSmallestInWindow(vector<int>& arr, int K, int M) {
    vector<int> result;
    for (int i = 0; i <= arr.size() - M; i++) {
        vector<int> window(arr.begin() + i, arr.begin() + i + M);
        nth_element(window.begin(), window.begin() + K - 1, window.end());
        result.push_back(window[K - 1]);
    }
    return result;
}
```

**Complexity:** O(n * M) time, O(M) space (can be optimized with order statistic tree)

---

## 9. Sliding Window Median

**Description:** Given an array and a window size K, find the median of each sliding window. Use two heaps (max-heap + min-heap) with lazy deletion for efficient median tracking.

**Example:**
```
Input: nums = [1, 3, -1, -3, 5, 3, 6, 7], K = 3
Output: [1.00000, -1.00000, -1.00000, 3.00000, 5.00000, 6.00000]
```

**C++ Code:**
```cpp
class SlidingWindowMedian {
    multiset<int> lo, hi;
    void balance() {
        while (lo.size() > hi.size() + 1) {
            hi.insert(*lo.rbegin());
            lo.erase(prev(lo.end()));
        }
        while (hi.size() > lo.size()) {
            lo.insert(*hi.begin());
            hi.erase(hi.begin());
        }
    }
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector<double> result;
        for (int i = 0; i < nums.size(); i++) {
            if (lo.empty() || nums[i] <= *lo.rbegin())
                lo.insert(nums[i]);
            else
                hi.insert(nums[i]);
            balance();
            if (i >= k - 1) {
                double median = (k % 2 == 1) ? *lo.rbegin()
                    : ((double)*lo.rbegin() + *hi.begin()) / 2.0;
                result.push_back(median);
                int out = nums[i - k + 1];
                auto it = lo.find(out);
                if (it != lo.end()) lo.erase(it);
                else hi.erase(hi.find(out));
                balance();
            }
        }
        return result;
    }
};
```

**Complexity:** O(n log K) time, O(K) space

---

# Variable Window Problems

---

## 10. Longest Substring Without Repeating Characters

**Description:** Find the length of the longest substring without repeating characters.

**Example:**
```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with length 3.
```

**C++ Code:**
```cpp
int lengthOfLongestSubstring(string s) {
    vector<int> lastIndex(256, -1);
    int left = 0, maxLen = 0;
    for (int right = 0; right < s.size(); right++) {
        if (lastIndex[s[right]] >= left)
            left = lastIndex[s[right]] + 1;
        lastIndex[s[right]] = right;
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
```

**Complexity:** O(n) time, O(1) space

---

## 11. Longest Substring with K Distinct Characters

**Description:** Given a string, find the length of the longest substring that contains at most K distinct characters.

**Example:**
```
Input: s = "araaci", K = 2
Output: 4
Explanation: Longest substring with 2 distinct chars is "araa" (4)
```

**C++ Code:**
```cpp
int longestKDistinct(string s, int K) {
    vector<int> freq(256, 0);
    int left = 0, maxLen = 0, distinct = 0;
    for (int right = 0; right < s.size(); right++) {
        if (freq[s[right]] == 0) distinct++;
        freq[s[right]]++;
        while (distinct > K) {
            freq[s[left]]--;
            if (freq[s[left]] == 0) distinct--;
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
```

**Complexity:** O(n) time, O(1) space

---

## 12. Longest Substring with At Most Two Distinct Characters

**Description:** Given a string, find the length of the longest substring that contains at most 2 distinct characters.

**Example:**
```
Input: s = "eceba"
Output: 3
Explanation: "ece" has 2 distinct chars ('e','c'), length 3
```

**C++ Code:**
```cpp
int lengthOfLongestSubstringTwoDistinct(string s) {
    vector<int> freq(256, 0);
    int left = 0, maxLen = 0, distinct = 0;
    for (int right = 0; right < s.size(); right++) {
        if (freq[s[right]] == 0) distinct++;
        freq[s[right]]++;
        while (distinct > 2) {
            freq[s[left]]--;
            if (freq[s[left]] == 0) distinct--;
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
```

**Complexity:** O(n) time, O(1) space

---

## 13. Minimum Window Substring

**Description:** Given two strings S and T, find the minimum window in S that contains all characters of T (including duplicates).

**Example:**
```
Input: S = "ADOBECODEBANC", T = "ABC"
Output: "BANC"
```

**C++ Code:**
```cpp
string minWindow(string s, string t) {
    vector<int> freq(128, 0);
    for (char c : t) freq[c]++;
    int left = 0, right = 0, count = t.size();
    int minLen = INT_MAX, start = 0;
    while (right < s.size()) {
        if (freq[s[right]] > 0) count--;
        freq[s[right]]--;
        right++;
        while (count == 0) {
            if (right - left < minLen) {
                minLen = right - left;
                start = left;
            }
            freq[s[left]]++;
            if (freq[s[left]] > 0) count++;
            left++;
        }
    }
    return minLen == INT_MAX ? "" : s.substr(start, minLen);
}
```

**Complexity:** O(n) time, O(1) space

---

## 14. Longest Repeating Character Replacement

**Description:** Given a string and an integer K, find the length of the longest substring that can be obtained by replacing at most K characters to make them all the same (max frequency character).

**Example:**
```
Input: s = "AABABBA", K = 1
Output: 4
Explanation: Replace the 'B' at position 2 to get "AAAA" -> length 4
```

**C++ Code:**
```cpp
int characterReplacement(string s, int k) {
    vector<int> freq(26, 0);
    int left = 0, maxFreq = 0, maxLen = 0;
    for (int right = 0; right < s.size(); right++) {
        freq[s[right] - 'A']++;
        maxFreq = max(maxFreq, freq[s[right] - 'A']);
        while (right - left + 1 - maxFreq > k) {
            freq[s[left] - 'A']--;
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
```

**Complexity:** O(n) time, O(1) space

---

## 15. Max Consecutive Ones III (With At Most K Flips)

**Description:** Given a binary array and an integer K, find the longest subarray containing only 1s after flipping at most K zeros.

**Example:**
```
Input: nums = [1,1,1,0,0,0,1,1,1,1,0], K = 2
Output: 6
Explanation: Flip the two zeros at indices 5,6 to get [1,1,1,0,0,1,1,1,1,1,1] -> length 6
```

**C++ Code:**
```cpp
int longestOnes(vector<int>& nums, int k) {
    int left = 0, zeroCount = 0, maxLen = 0;
    for (int right = 0; right < nums.size(); right++) {
        if (nums[right] == 0) zeroCount++;
        while (zeroCount > k) {
            if (nums[left] == 0) zeroCount--;
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
```

**Complexity:** O(n) time, O(1) space

---

## 16. Longest Subarray with Sum K (Positive Numbers)

**Description:** Given an array of positive integers and a target K, find the longest subarray whose sum equals K.

**Example:**
```
Input: arr = [2, 3, 5, 1, 9], K = 10
Output: 3
Explanation: [2,3,5] sum = 10, length = 3
```

**C++ Code:**
```cpp
int longestSubarraySumK(vector<int>& arr, int K) {
    int left = 0, sum = 0, maxLen = 0;
    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];
        while (sum > K && left <= right) {
            sum -= arr[left];
            left++;
        }
        if (sum == K)
            maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
```

**Complexity:** O(n) time, O(1) space (positive numbers only)

---

## 17. Longest Subarray with Sum K (With Negatives)

**Description:** Given an array (can contain negative numbers) and a target K, find the longest subarray whose sum equals K. Uses prefix sums with a hash map.

**Example:**
```
Input: arr = [1, -1, 5, -2, 3], K = 3
Output: 4
Explanation: [1,-1,5,-2] sum = 3, length = 4
```

**C++ Code:**
```cpp
int longestSubarraySumK(vector<int>& arr, int K) {
    unordered_map<int, int> prefixSum;
    int sum = 0, maxLen = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum == K) maxLen = i + 1;
        if (prefixSum.find(sum - K) != prefixSum.end())
            maxLen = max(maxLen, i - prefixSum[sum - K]);
        if (prefixSum.find(sum) == prefixSum.end())
            prefixSum[sum] = i;
    }
    return maxLen;
}
```

**Complexity:** O(n) time, O(n) space

---

## 18. Binary Subarrays With Sum / Subarray Sum Equals K

**Description:** Given a binary array and a target sum S, count the number of non-empty subarrays with sum S.

**Example:**
```
Input: nums = [1,0,1,0,1], goal = 2
Output: 4
Explanation: [1,0,1], [1,0,1,0], [0,1,0,1], [1,0,1]
```

**C++ Code:**
```cpp
int numSubarraysWithSum(vector<int>& nums, int goal) {
    unordered_map<int, int> prefix;
    prefix[0] = 1;
    int sum = 0, count = 0;
    for (int num : nums) {
        sum += num;
        if (prefix.find(sum - goal) != prefix.end())
            count += prefix[sum - goal];
        prefix[sum]++;
    }
    return count;
}
```

**Complexity:** O(n) time, O(n) space

---

## 19. Fruit Into Baskets

**Description:** You have a row of trees with fruit types. You have two baskets, each can hold only one type. Find the maximum number of fruits you can collect (longest subarray with at most 2 distinct values).

**Example:**
```
Input: fruits = [1,2,3,2,2]
Output: 4
Explanation: Collect from [2,3,2,2] = 4 fruits with types 2 and 3
```

**C++ Code:**
```cpp
int totalFruit(vector<int>& fruits) {
    unordered_map<int, int> freq;
    int left = 0, maxFruits = 0;
    for (int right = 0; right < fruits.size(); right++) {
        freq[fruits[right]]++;
        while (freq.size() > 2) {
            freq[fruits[left]]--;
            if (freq[fruits[left]] == 0)
                freq.erase(fruits[left]);
            left++;
        }
        maxFruits = max(maxFruits, right - left + 1);
    }
    return maxFruits;
}
```

**Complexity:** O(n) time, O(1) space

---

## 20. Maximum Points You Can Obtain from Cards

**Description:** You have a row of cards. In one step you can take one card from beginning or end. With exactly K steps, find maximum sum you can obtain.

**Example:**
```
Input: cardPoints = [1,2,3,4,5,6,1], K = 3
Output: 12
Explanation: Take 6 + 5 + 1 = 12 (last + 2nd last + 3rd last)
```

**C++ Code:**
```cpp
int maxScore(vector<int>& cardPoints, int k) {
    int n = cardPoints.size();
    int total = 0;
    for (int c : cardPoints) total += c;
    if (k == n) return total;
    int windowSum = 0, minSum = INT_MAX;
    int windowLen = n - k;
    for (int i = 0; i < n; i++) {
        windowSum += cardPoints[i];
        if (i >= windowLen - 1) {
            minSum = min(minSum, windowSum);
            windowSum -= cardPoints[i - windowLen + 1];
        }
    }
    return total - minSum;
}
```

**Complexity:** O(n) time, O(1) space

---

## 21. Subarrays with K Different Integers

**Description:** Given an array, count the number of subarrays with exactly K distinct integers.

**Example:**
```
Input: nums = [1,2,1,2,3], K = 2
Output: 7
```

**C++ Code:**
```cpp
int subarraysWithKDistinct(vector<int>& nums, int k) {
    auto atMostK = [&](int K) -> int {
        int left = 0, count = 0;
        unordered_map<int, int> freq;
        for (int right = 0; right < nums.size(); right++) {
            freq[nums[right]]++;
            while (freq.size() > K) {
                freq[nums[left]]--;
                if (freq[nums[left]] == 0)
                    freq.erase(nums[left]);
                left++;
            }
            count += right - left + 1;
        }
        return count;
    };
    return atMostK(k) - atMostK(k - 1);
}
```

**Complexity:** O(n) time, O(n) space

---

## 22. Count Distinct Substrings with Exactly K Distinct

**Description:** Count the number of substrings that have exactly K distinct characters.

**Example:**
```
Input: s = "pqpqs", k = 2
Output: 7
```

**C++ Code:**
```cpp
int countSubstringsWithKDistinct(string s, int k) {
    auto atMostK = [&](int K) -> int {
        int left = 0, count = 0;
        vector<int> freq(26, 0);
        int distinct = 0;
        for (int right = 0; right < s.size(); right++) {
            if (freq[s[right] - 'a'] == 0) distinct++;
            freq[s[right] - 'a']++;
            while (distinct > K) {
                freq[s[left] - 'a']--;
                if (freq[s[left] - 'a'] == 0) distinct--;
                left++;
            }
            count += right - left + 1;
        }
        return count;
    };
    return atMostK(k) - atMostK(k - 1);
}
```

**Complexity:** O(n) time, O(1) space

---

## 23. Minimum Size Subarray Sum (>= Target)

**Description:** Given an array of positive integers and a target, find the minimal length of a contiguous subarray whose sum is at least target.

**Example:**
```
Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: Subarray [4,3] has min length 2 with sum >= 7
```

**C++ Code:**
```cpp
int minSubArrayLen(int target, vector<int>& nums) {
    int left = 0, sum = 0, minLen = INT_MAX;
    for (int right = 0; right < nums.size(); right++) {
        sum += nums[right];
        while (sum >= target) {
            minLen = min(minLen, right - left + 1);
            sum -= nums[left];
            left++;
        }
    }
    return minLen == INT_MAX ? 0 : minLen;
}
```

**Complexity:** O(n) time, O(1) space

---

## 24. Length of Longest Subarray with At Most K Frequency

**Description:** Given an array and an integer K, find the longest subarray where each element appears at most K times.

**Example:**
```
Input: nums = [1,2,3,1,2,3,1,2], K = 2
Output: 6
Explanation: [1,2,3,1,2,3] each element appears at most 2 times
```

**C++ Code:**
```cpp
int longestSubarrayAtMostKFrequency(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    int left = 0, maxLen = 0;
    for (int right = 0; right < nums.size(); right++) {
        freq[nums[right]]++;
        while (freq[nums[right]] > k) {
            freq[nums[left]]--;
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
```

**Complexity:** O(n) time, O(n) space

---

## 25. Minimum Window Subsequence

**Description:** Given strings S and T, find the minimum contiguous substring of S that has T as a subsequence.

**Example:**
```
Input: S = "abcdebdde", T = "bde"
Output: "bcde"
Explanation: "bcde" and "bdde" both have T as subsequence. "bcde" is shorter.
```

**C++ Code:**
```cpp
string minWindowSubsequence(string s, string t) {
    int n = s.size(), m = t.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    for (int i = 0; i <= n; i++) dp[i][0] = i;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i-1] == t[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    int start = -1, minLen = INT_MAX;
    for (int i = 1; i <= n; i++) {
        if (dp[i][m] != -1) {
            int len = i - dp[i][m];
            if (len < minLen) {
                minLen = len;
                start = dp[i][m];
            }
        }
    }
    return start == -1 ? "" : s.substr(start, minLen);
}
```

**Complexity:** O(n * m) time, O(n * m) space

---

## 26. Longest Nice Substring

**Description:** A string is "nice" if every lowercase letter has its uppercase counterpart present and vice versa. Find the longest nice substring.

**Example:**
```
Input: s = "YazaAay"
Output: "aAa"
Explanation: "aAa" is nice: 'a' has 'A', 'A' has 'a'.
```

**C++ Code:**
```cpp
string longestNiceSubstring(string s) {
    int n = s.size();
    string result;
    for (int i = 0; i < n; i++) {
        vector<bool> lower(26, false), upper(26, false);
        for (int j = i; j < n; j++) {
            if (islower(s[j])) lower[s[j] - 'a'] = true;
            else upper[s[j] - 'A'] = true;
            if (j - i + 1 > result.size()) {
                bool nice = true;
                for (int k = 0; k < 26; k++)
                    if (lower[k] != upper[k]) { nice = false; break; }
                if (nice) result = s.substr(i, j - i + 1);
            }
        }
    }
    return result;
}
```

**Complexity:** O(n^2) time, O(1) space

---

# Two Pointers Problems

---

## 27. Two Sum Sorted (Pair with Target Sum)

**Description:** Given a sorted array and a target sum, find if there exists a pair with that sum.

**Example:**
```
Input: arr = [2, 7, 11, 15], target = 9
Output: [0, 1]
Explanation: arr[0] + arr[1] = 2 + 7 = 9
```

**C++ Code:**
```cpp
vector<int> twoSumSorted(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) return {left, right};
        else if (sum < target) left++;
        else right--;
    }
    return {};
}
```

**Complexity:** O(n) time, O(1) space

---

## 28. Three Sum (Unique Triplets Summing to 0)

**Description:** Find all unique triplets in an array that sum to zero.

**Example:**
```
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
```

**C++ Code:**
```cpp
vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    int n = nums.size();
    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && nums[i] == nums[i-1]) continue;
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left+1]) left++;
                while (left < right && nums[right] == nums[right-1]) right--;
                left++; right--;
            } else if (sum < 0) left++;
            else right--;
        }
    }
    return result;
}
```

**Complexity:** O(n^2) time, O(1) extra space (or O(n) for sorting)

---

## 29. Three Sum Closest

**Description:** Find three integers whose sum is closest to a given target.

**Example:**
```
Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: (-1 + 2 + 1) = 2, closest to 1
```

**C++ Code:**
```cpp
int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int closest = nums[0] + nums[1] + nums[2];
    for (int i = 0; i < n - 2; i++) {
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (abs(sum - target) < abs(closest - target))
                closest = sum;
            if (sum < target) left++;
            else if (sum > target) right--;
            else return target;
        }
    }
    return closest;
}
```

**Complexity:** O(n^2) time, O(1) extra space

---

## 30. Four Sum

**Description:** Find all unique quadruplets that sum to a given target.

**Example:**
```
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
```

**C++ Code:**
```cpp
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    int n = nums.size();
    for (int i = 0; i < n - 3; i++) {
        if (i > 0 && nums[i] == nums[i-1]) continue;
        for (int j = i + 1; j < n - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j-1]) continue;
            int left = j + 1, right = n - 1;
            while (left < right) {
                long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                if (sum == target) {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left+1]) left++;
                    while (left < right && nums[right] == nums[right-1]) right--;
                    left++; right--;
                } else if (sum < target) left++;
                else right--;
            }
        }
    }
    return result;
}
```

**Complexity:** O(n^3) time, O(1) extra space

---

## 31. Remove Duplicates from Sorted Array

**Description:** Remove duplicates in-place from a sorted array and return the new length.

**Example:**
```
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4]
```

**C++ Code:**
```cpp
int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    int write = 1;
    for (int read = 1; read < nums.size(); read++) {
        if (nums[read] != nums[read - 1])
            nums[write++] = nums[read];
    }
    return write;
}
```

**Complexity:** O(n) time, O(1) space

---

## 32. Remove Element

**Description:** Remove all occurrences of a given value in-place and return the new length.

**Example:**
```
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2]
```

**C++ Code:**
```cpp
int removeElement(vector<int>& nums, int val) {
    int write = 0;
    for (int read = 0; read < nums.size(); read++) {
        if (nums[read] != val)
            nums[write++] = nums[read];
    }
    return write;
}
```

**Complexity:** O(n) time, O(1) space

---

## 33. Move Zeroes

**Description:** Move all zeroes to the end while maintaining relative order of non-zero elements.

**Example:**
```
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
```

**C++ Code:**
```cpp
void moveZeroes(vector<int>& nums) {
    int write = 0;
    for (int read = 0; read < nums.size(); read++) {
        if (nums[read] != 0)
            swap(nums[write++], nums[read]);
    }
}
```

**Complexity:** O(n) time, O(1) space

---

## 34. Container With Most Water

**Description:** Given n vertical lines, find two lines that together with x-axis form a container that holds the most water.

**Example:**
```
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
```

**C++ Code:**
```cpp
int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxWater = 0;
    while (left < right) {
        int h = min(height[left], height[right]);
        maxWater = max(maxWater, h * (right - left));
        if (height[left] < height[right]) left++;
        else right--;
    }
    return maxWater;
}
```

**Complexity:** O(n) time, O(1) space

---

## 35. Trapping Rain Water (Two Pointer)

**Description:** Given elevation map (array), compute how much water can be trapped after rain.

**Example:**
```
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
```

**C++ Code:**
```cpp
int trap(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int leftMax = 0, rightMax = 0, water = 0;
    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] >= leftMax)
                leftMax = height[left];
            else
                water += leftMax - height[left];
            left++;
        } else {
            if (height[right] >= rightMax)
                rightMax = height[right];
            else
                water += rightMax - height[right];
            right--;
        }
    }
    return water;
}
```

**Complexity:** O(n) time, O(1) space

---

## 36. Sort Colors (Dutch National Flag)

**Description:** Sort an array of 0s, 1s, and 2s in-place without extra space (Dutch flag problem).

**Example:**
```
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
```

**C++ Code:**
```cpp
void sortColors(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high) {
        if (nums[mid] == 0)
            swap(nums[low++], nums[mid++]);
        else if (nums[mid] == 1)
            mid++;
        else
            swap(nums[mid], nums[high--]);
    }
}
```

**Complexity:** O(n) time, O(1) space

---

## 37. Subarray Product Less Than K

**Description:** Given an array of positive integers and a target K, count contiguous subarrays where product of all elements is strictly less than K.

**Example:**
```
Input: nums = [10, 5, 2, 6], K = 100
Output: 8
Explanation: [10], [5], [2], [6], [10,5], [5,2], [2,6], [5,2,6]
```

**C++ Code:**
```cpp
int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    if (k <= 1) return 0;
    int left = 0, product = 1, count = 0;
    for (int right = 0; right < nums.size(); right++) {
        product *= nums[right];
        while (product >= k) product /= nums[left++];
        count += right - left + 1;
    }
    return count;
}
```

**Complexity:** O(n) time, O(1) space

---

## 38. Count Pairs with Given Sum in Sorted Array

**Description:** Count the number of pairs in a sorted array that sum to a given target.

**Example:**
```
Input: arr = [1, 2, 3, 4, 5, 6], target = 7
Output: 3
Explanation: (1,6), (2,5), (3,4)
```

**C++ Code:**
```cpp
int countPairs(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    int count = 0;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            int leftCount = 1, rightCount = 1;
            while (left + 1 < right && nums[left] == nums[left+1]) left++, leftCount++;
            while (right - 1 > left && nums[right] == nums[right-1]) right--, rightCount++;
            if (nums[left] == nums[right])
                count += leftCount * (leftCount - 1) / 2;
            else
                count += leftCount * rightCount;
            left++; right--;
        } else if (sum < target) left++;
        else right--;
    }
    return count;
}
```

**Complexity:** O(n) time, O(1) space

---

## 39. Pair with Difference K

**Description:** Given an array and a difference K, find if there exists a pair with difference K. Works for both positive and negative K.

**Example:**
```
Input: arr = [5, 20, 3, 2, 50, 80], K = 78
Output: true
Explanation: (2, 80) difference = 78
```

**C++ Code:**
```cpp
bool findPair(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int left = 0, right = 1;
    while (left < nums.size() && right < nums.size()) {
        if (left != right && nums[right] - nums[left] == k) return true;
        else if (nums[right] - nums[left] < k) right++;
        else left++;
    }
    return false;
}
```

**Complexity:** O(n log n) time, O(1) space

---

## 40. Intersection of Two Sorted Arrays

**Description:** Find intersection of two sorted arrays (unique elements).

**Example:**
```
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
```

**C++ Code:**
```cpp
vector<int> intersectionSorted(vector<int>& nums1, vector<int>& nums2) {
    int i = 0, j = 0;
    vector<int> result;
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) i++;
        else if (nums1[i] > nums2[j]) j++;
        else {
            if (result.empty() || result.back() != nums1[i])
                result.push_back(nums1[i]);
            i++; j++;
        }
    }
    return result;
}
```

**Complexity:** O(n + m) time, O(1) extra space

---

## 41. Intersection of Two Unsorted Arrays

**Description:** Find intersection of two unsorted arrays with duplicates.

**Example:**
```
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
```

**C++ Code:**
```cpp
vector<int> intersectionUnsorted(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> result;
    for (int num : nums2)
        if (set1.count(num)) result.insert(num);
    return vector<int>(result.begin(), result.end());
}
```

**Complexity:** O(n + m) time, O(min(n,m)) space

---

## 42. Union of Two Sorted Arrays

**Description:** Find the union of two sorted arrays (distinct elements).

**Example:**
```
Input: nums1 = [1,2,3,4,5], nums2 = [1,2,3,6,7]
Output: [1,2,3,4,5,6,7]
```

**C++ Code:**
```cpp
vector<int> unionSorted(vector<int>& nums1, vector<int>& nums2) {
    int i = 0, j = 0;
    vector<int> result;
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j])
            result.push_back(nums1[i++]);
        else if (nums1[i] > nums2[j])
            result.push_back(nums2[j++]);
        else {
            result.push_back(nums1[i]);
            i++; j++;
        }
    }
    while (i < nums1.size()) result.push_back(nums1[i++]);
    while (j < nums2.size()) result.push_back(nums2[j++]);
    return result;
}
```

**Complexity:** O(n + m) time, O(1) extra space

---

## 43. Median of Two Sorted Arrays

**Description:** Find the median of two sorted arrays. The solution uses binary search to partition the arrays optimally.

**Example:**
```
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged = [1,2,3], median = 2
```

**C++ Code:**
```cpp
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size(), n2 = nums2.size();
    if (n1 > n2) return findMedianSortedArrays(nums2, nums1);
    int left = 0, right = n1;
    while (left <= right) {
        int cut1 = left + (right - left) / 2;
        int cut2 = (n1 + n2 + 1) / 2 - cut1;
        int l1 = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
        int l2 = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1];
        int r1 = (cut1 == n1) ? INT_MAX : nums1[cut1];
        int r2 = (cut2 == n2) ? INT_MAX : nums2[cut2];
        if (l1 <= r2 && l2 <= r1) {
            if ((n1 + n2) % 2 == 0)
                return (max(l1, l2) + min(r1, r2)) / 2.0;
            else
                return max(l1, l2);
        } else if (l1 > r2) right = cut1 - 1;
        else left = cut1 + 1;
    }
    return 0.0;
}
```

**Complexity:** O(log(min(n,m))) time, O(1) space

---

## 44. Maximum Number of Visible Points

**Description:** Given points on a 2D plane and a viewing angle, find the maximum number of points visible from the origin within the angle.

**Example:**
```
Input: points = [[2,1],[2,2],[3,3]], angle = 90, location = [1,1]
Output: 3
```

**C++ Code:**
```cpp
int visiblePoints(vector<vector<int>>& points, int angle, vector<int>& location) {
    vector<double> angles;
    int same = 0;
    for (auto& p : points) {
        int dx = p[0] - location[0];
        int dy = p[1] - location[1];
        if (dx == 0 && dy == 0) { same++; continue; }
        angles.push_back(atan2(dy, dx) * 180 / M_PI);
    }
    sort(angles.begin(), angles.end());
    int n = angles.size();
    vector<double> doubled = angles;
    for (double a : angles) doubled.push_back(a + 360);
    int maxCount = 0;
    for (int left = 0, right = 0; left < n; left++) {
        while (right < doubled.size() && doubled[right] - doubled[left] <= angle)
            right++;
        maxCount = max(maxCount, right - left);
    }
    return maxCount + same;
}
```

**Complexity:** O(n log n) time, O(n) space

---

## 45. Palindrome Substring Count (Expand Center)

**Description:** Count all palindromic substrings in a string. Use center expansion (odd and even length palindromes).

**Example:**
```
Input: s = "abc"
Output: 3
Explanation: "a", "b", "c"
Input: s = "aaa"
Output: 6
Explanation: "a","a","a","aa","aa","aaa"
```

**C++ Code:**
```cpp
int countSubstrings(string s) {
    int n = s.size(), count = 0;
    for (int center = 0; center < 2 * n - 1; center++) {
        int left = center / 2;
        int right = left + center % 2;
        while (left >= 0 && right < n && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
    }
    return count;
}
```

**Complexity:** O(n^2) time, O(1) space
