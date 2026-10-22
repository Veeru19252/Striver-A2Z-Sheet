Yep, buddy. **Now we're doing it properly.** 😭🔥

You want **TWO separate topics**:

1. **Two Pointers**
2. **Sliding Window**

And for **each topic**:

- 🟢 Easy: **50**
- 🟡 Medium: **50**
- 🔴 Hard: **50**
- 🧠 Brainstorming: **50**

So that's **200 Two-Pointer + 200 Sliding-Window = 400 questions**.

I'm keeping your earlier platform rule:

> 🟢 Easy → **GFG**\
> 🟡 Medium → **LeetCode**\
> 🔴 Hard → **LeetCode**\
> 🧠 Brainstorming → **LeetCode**

Two pointers generally covers opposite-direction, same-direction, partitioning, merging, and related pointer movement patterns, while sliding window is essentially a specialized moving-window form of two pointers. [GeeksforGeeks](https://www.geeksforgeeks.org/two-pointers-technique//?utm_source=chatgpt.com)

---

# 🟦 PART A: TWO POINTERS

## 🟢 EASY — 50

| #  | Problem                                    | Link                                                                                                                            |
| -- | ------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------- |
| 1  | Pair with Given Sum in Sorted Array        | [GFG](https://www.geeksforgeeks.org/two-pointers-technique/?utm_source=chatgpt.com)                                             |
| 2  | Remove Duplicates from Sorted Array        | [GFG](https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1?utm_source=chatgpt.com)              |
| 3  | Move Zeroes to End                         | [GFG](https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?utm_source=chatgpt.com)                      |
| 4  | Reverse an Array                           | [GFG](https://www.geeksforgeeks.org/problems/reverse-an-array/1?utm_source=chatgpt.com)                                         |
| 5  | Check Palindrome Array                     | [GFG](https://www.geeksforgeeks.org/problems/palindrome-array0817/1?utm_source=chatgpt.com)                                     |
| 6  | Segregate 0s and 1s                        | [GFG](https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1?utm_source=chatgpt.com)                                  |
| 7  | Sort 0s, 1s and 2s                         | [GFG](https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?utm_source=chatgpt.com)                        |
| 8  | Intersection of Two Sorted Arrays          | [GFG](https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-arrays/1?utm_source=chatgpt.com)                        |
| 9  | Union of Two Sorted Arrays                 | [GFG](https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?utm_source=chatgpt.com)                    |
| 10 | Merge Two Sorted Arrays                    | [GFG](https://www.geeksforgeeks.org/merge-two-sorted-arrays/?utm_source=chatgpt.com)                                            |
| 11 | Find Pair With Given Sum                   | [GFG](https://www.geeksforgeeks.org/two-pointers-technique/?utm_source=chatgpt.com)                                             |
| 12 | Find Pair With Difference K                | [GFG](https://www.geeksforgeeks.org/find-pair-with-given-difference/?utm_source=chatgpt.com)                                    |
| 13 | Count Pairs With Given Sum                 | [GFG](https://www.geeksforgeeks.org/count-pairs-with-given-sum/?utm_source=chatgpt.com)                                         |
| 14 | Find Closest Pair                          | [GFG](https://www.geeksforgeeks.org/find-closest-pair-two-sorted-arrays/?utm_source=chatgpt.com)                                |
| 15 | Check if String Is Palindrome              | [GFG](https://www.geeksforgeeks.org/problems/palindrome-string0817/1?utm_source=chatgpt.com)                                    |
| 16 | Reverse String                             | [GFG](https://www.geeksforgeeks.org/problems/reverse-a-string/1?utm_source=chatgpt.com)                                         |
| 17 | Remove Vowels from String                  | [GFG](https://www.geeksforgeeks.org/remove-vowels-from-a-string/?utm_source=chatgpt.com)                                        |
| 18 | Reverse Words in String                    | [GFG](https://www.geeksforgeeks.org/reverse-words-in-a-given-string/?utm_source=chatgpt.com)                                    |
| 19 | Check Anagram Using Two Pointers           | [GFG](https://www.geeksforgeeks.org/check-whether-two-strings-are-anagram-of-each-other/?utm_source=chatgpt.com)                |
| 20 | Merge Two Sorted Lists                     | [GFG](https://www.geeksforgeeks.org/merge-two-sorted-linked-lists/?utm_source=chatgpt.com)                                      |
| 21 | Remove Duplicates from Sorted Linked List  | [GFG](https://www.geeksforgeeks.org/remove-duplicates-from-a-sorted-linked-list/?utm_source=chatgpt.com)                        |
| 22 | Find Middle of Linked List                 | [GFG](https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1?utm_source=chatgpt.com)                  |
| 23 | Detect Loop in Linked List                 | [GFG](https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1?utm_source=chatgpt.com)                               |
| 24 | Nth Node from End                          | [GFG](https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?utm_source=chatgpt.com)                         |
| 25 | Pair Sum in Sorted Array                   | [GFG](https://www.geeksforgeeks.org/two-pointers-technique/?utm_source=chatgpt.com)                                             |
| 26 | Triplet With Given Sum                     | [GFG](https://www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/?utm_source=chatgpt.com)                           |
| 27 | Count Smaller Elements on Right            | [GFG](https://www.geeksforgeeks.org/count-smaller-elements-on-right-side/?utm_source=chatgpt.com)                               |
| 28 | Find Common Elements in Three Arrays       | [GFG](https://www.geeksforgeeks.org/common-elements-in-three-sorted-arrays/?utm_source=chatgpt.com)                             |
| 29 | Find Missing Element Using Two Pointers    | [GFG](https://www.geeksforgeeks.org/find-the-missing-number/?utm_source=chatgpt.com)                                            |
| 30 | Partition Array Around Value               | [GFG](https://www.geeksforgeeks.org/partition-array-around-given-value/?utm_source=chatgpt.com)                                 |
| 31 | Separate Even and Odd                      | [GFG](https://www.geeksforgeeks.org/segregate-even-and-odd-numbers/?utm_source=chatgpt.com)                                     |
| 32 | Rearrange Positive and Negative            | [GFG](https://www.geeksforgeeks.org/rearrange-array-alternately-positive-negative-items-o1-extra-space/?utm_source=chatgpt.com) |
| 33 | Find Equilibrium Point                     | [GFG](https://www.geeksforgeeks.org/problems/equilibrium-point-1587115620/1?utm_source=chatgpt.com)                             |
| 34 | Remove Element In-Place                    | [GFG](https://www.geeksforgeeks.org/remove-an-element-from-an-array/?utm_source=chatgpt.com)                                    |
| 35 | Check Subsequence                          | [GFG](https://www.geeksforgeeks.org/check-if-a-string-is-subsequence-of-another/?utm_source=chatgpt.com)                        |
| 36 | Merge Intervals Basics                     | [GFG](https://www.geeksforgeeks.org/merging-intervals/?utm_source=chatgpt.com)                                                  |
| 37 | Find Pair With Minimum Difference          | [GFG](https://www.geeksforgeeks.org/find-minimum-difference-pair/?utm_source=chatgpt.com)                                       |
| 38 | Find Pair With Maximum Product             | [GFG](https://www.geeksforgeeks.org/maximum-product-pair-in-an-array/?utm_source=chatgpt.com)                                   |
| 39 | Check Two Arrays Equal                     | [GFG](https://www.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?utm_source=chatgpt.com)                 |
| 40 | Reverse Array in Groups                    | [GFG](https://www.geeksforgeeks.org/problems/reverse-array-in-groups0255/1?utm_source=chatgpt.com)                              |
| 41 | Rearrange Array Alternately                | [GFG](https://www.geeksforgeeks.org/rearrange-an-array-in-maximum-minimum-form/?utm_source=chatgpt.com)                         |
| 42 | Find Duplicate Using Two Pointers          | [GFG](https://www.geeksforgeeks.org/find-duplicates-in-on-time-and-constant-extra-space/?utm_source=chatgpt.com)                |
| 43 | Find First Repeating Element               | [GFG](https://www.geeksforgeeks.org/problems/first-repeating-element4018/1?utm_source=chatgpt.com)                              |
| 44 | Find First Non-Repeating Element           | [GFG](https://www.geeksforgeeks.org/problems/non-repeating-element3958/1?utm_source=chatgpt.com)                                |
| 45 | Check String Rotation                      | [GFG](https://www.geeksforgeeks.org/check-strings-rotations-not/?utm_source=chatgpt.com)                                        |
| 46 | Compare Two Strings                        | [GFG](https://www.geeksforgeeks.org/compare-two-strings-in-java/?utm_source=chatgpt.com)                                        |
| 47 | Remove Adjacent Duplicates                 | [GFG](https://www.geeksforgeeks.org/remove-consecutive-duplicates-string/?utm_source=chatgpt.com)                               |
| 48 | Find Pair With Closest Sum                 | [GFG](https://www.geeksforgeeks.org/find-closest-sum-pair-two-sorted-arrays/?utm_source=chatgpt.com)                            |
| 49 | Merge Alternate Elements                   | [GFG](https://www.geeksforgeeks.org/merge-two-arrays-alternately/?utm_source=chatgpt.com)                                       |
| 50 | Check Palindrome Ignoring Non-Alphanumeric | [GFG](https://www.geeksforgeeks.org/check-if-a-string-is-palindrome/?utm_source=chatgpt.com)                                    |

---

# 🟡 MEDIUM — 50 LeetCode

| #  | Problem                                            | Link                                                                                                                   |
| -- | -------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------- |
| 1  | Two Sum II                                         | [LC 167](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/?utm_source=chatgpt.com)                       |
| 2  | 3Sum                                               | [LC 15](https://leetcode.com/problems/3sum/?utm_source=chatgpt.com)                                                    |
| 3  | 3Sum Closest                                       | [LC 16](https://leetcode.com/problems/3sum-closest/?utm_source=chatgpt.com)                                            |
| 4  | 4Sum                                               | [LC 18](https://leetcode.com/problems/4sum/?utm_source=chatgpt.com)                                                    |
| 5  | Container With Most Water                          | [LC 11](https://leetcode.com/problems/container-with-most-water/?utm_source=chatgpt.com)                               |
| 6  | Sort Colors                                        | [LC 75](https://leetcode.com/problems/sort-colors/?utm_source=chatgpt.com)                                             |
| 7  | Remove Duplicates II                               | [LC 80](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/?utm_source=chatgpt.com)                  |
| 8  | Remove Duplicates from Sorted List II              | [LC 82](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/?utm_source=chatgpt.com)                   |
| 9  | Partition List                                     | [LC 86](https://leetcode.com/problems/partition-list/?utm_source=chatgpt.com)                                          |
| 10 | Linked List Cycle II                               | [LC 142](https://leetcode.com/problems/linked-list-cycle-ii/?utm_source=chatgpt.com)                                   |
| 11 | Find the Duplicate Number                          | [LC 287](https://leetcode.com/problems/find-the-duplicate-number/?utm_source=chatgpt.com)                              |
| 12 | Sort Array by Parity II                            | [LC 922](https://leetcode.com/problems/sort-array-by-parity-ii/?utm_source=chatgpt.com)                                |
| 13 | Squares of a Sorted Array                          | [LC 977](https://leetcode.com/problems/squares-of-a-sorted-array/?utm_source=chatgpt.com)                              |
| 14 | Boats to Save People                               | [LC 881](https://leetcode.com/problems/boats-to-save-people/?utm_source=chatgpt.com)                                   |
| 15 | Bag of Tokens                                      | [LC 948](https://leetcode.com/problems/bag-of-tokens/?utm_source=chatgpt.com)                                          |
| 16 | Append Characters to String                        | [LC 2486](https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/?utm_source=chatgpt.com)       |
| 17 | Backspace String Compare                           | [LC 844](https://leetcode.com/problems/backspace-string-compare/?utm_source=chatgpt.com)                               |
| 18 | Interval List Intersections                        | [LC 986](https://leetcode.com/problems/interval-list-intersections/?utm_source=chatgpt.com)                            |
| 19 | Merge Sorted Array                                 | [LC 88](https://leetcode.com/problems/merge-sorted-array/?utm_source=chatgpt.com)                                      |
| 20 | Move Zeroes                                        | [LC 283](https://leetcode.com/problems/move-zeroes/?utm_source=chatgpt.com)                                            |
| 21 | Remove Element                                     | [LC 27](https://leetcode.com/problems/remove-element/?utm_source=chatgpt.com)                                          |
| 22 | Valid Palindrome                                   | [LC 125](https://leetcode.com/problems/valid-palindrome/?utm_source=chatgpt.com)                                       |
| 23 | Reverse Vowels                                     | [LC 345](https://leetcode.com/problems/reverse-vowels-of-a-string/?utm_source=chatgpt.com)                             |
| 24 | String Compression                                 | [LC 443](https://leetcode.com/problems/string-compression/?utm_source=chatgpt.com)                                     |
| 25 | Long Pressed Name                                  | [LC 925](https://leetcode.com/problems/long-pressed-name/?utm_source=chatgpt.com)                                      |
| 26 | Compare Version Numbers                            | [LC 165](https://leetcode.com/problems/compare-version-numbers/?utm_source=chatgpt.com)                                |
| 27 | Partition Array According to Given Pivot           | [LC 2161](https://leetcode.com/problems/partition-array-according-to-given-pivot/?utm_source=chatgpt.com)              |
| 28 | Rearrange Array Elements by Sign                   | [LC 2149](https://leetcode.com/problems/rearrange-array-elements-by-sign/?utm_source=chatgpt.com)                      |
| 29 | Find the Winner of an Array Game                   | [LC 1535](https://leetcode.com/problems/find-the-winner-of-an-array-game/?utm_source=chatgpt.com)                      |
| 30 | Maximum Swap                                       | [LC 670](https://leetcode.com/problems/maximum-swap/?utm_source=chatgpt.com)                                           |
| 31 | Advantage Shuffle                                  | [LC 870](https://leetcode.com/problems/advantage-shuffle/?utm_source=chatgpt.com)                                      |
| 32 | Wiggle Subsequence                                 | [LC 376](https://leetcode.com/problems/wiggle-subsequence/?utm_source=chatgpt.com)                                     |
| 33 | Increasing Triplet Subsequence                     | [LC 334](https://leetcode.com/problems/increasing-triplet-subsequence/?utm_source=chatgpt.com)                         |
| 34 | 3Sum With Multiplicity                             | [LC 923](https://leetcode.com/problems/3sum-with-multiplicity/?utm_source=chatgpt.com)                                 |
| 35 | 4Sum II                                            | [LC 454](https://leetcode.com/problems/4sum-ii/?utm_source=chatgpt.com)                                                |
| 36 | Find K Closest Elements                            | [LC 658](https://leetcode.com/problems/find-k-closest-elements/?utm_source=chatgpt.com)                                |
| 37 | K-diff Pairs in Array                              | [LC 532](https://leetcode.com/problems/k-diff-pairs-in-an-array/?utm_source=chatgpt.com)                               |
| 38 | Two Sum Less Than K                                | [LC 1099](https://leetcode.com/problems/two-sum-less-than-k/?utm_source=chatgpt.com)                                   |
| 39 | Find Positive Integer Solution                     | [LC 1237](https://leetcode.com/problems/find-positive-integer-solution-for-a-given-equation/?utm_source=chatgpt.com)   |
| 40 | Longest Mountain in Array                          | [LC 845](https://leetcode.com/problems/longest-mountain-in-array/?utm_source=chatgpt.com)                              |
| 41 | Valid Triangle Number                              | [LC 611](https://leetcode.com/problems/valid-triangle-number/?utm_source=chatgpt.com)                                  |
| 42 | Count Good Triplets                                | [LC 1534](https://leetcode.com/problems/count-good-triplets/?utm_source=chatgpt.com)                                   |
| 43 | Count Pairs Whose Sum Is Less Than Target          | [LC 2824](https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/?utm_source=chatgpt.com)             |
| 44 | Find the Middle Index                              | [LC 724](https://leetcode.com/problems/find-pivot-index/?utm_source=chatgpt.com)                                       |
| 45 | Max Number of K-Sum Pairs                          | [LC 1679](https://leetcode.com/problems/max-number-of-k-sum-pairs/?utm_source=chatgpt.com)                             |
| 46 | Array With Elements Not Equal to Average           | [LC 1968](https://leetcode.com/problems/array-with-elements-not-equal-to-average-of-neighbors/?utm_source=chatgpt.com) |
| 47 | Next Permutation                                   | [LC 31](https://leetcode.com/problems/next-permutation/?utm_source=chatgpt.com)                                        |
| 48 | Find the Lexicographically Smallest Valid Sequence | [LC 3302](https://leetcode.com/problems/find-the-lexicographically-smallest-valid-sequence/?utm_source=chatgpt.com)    |
| 49 | Take Gifts From the Richest Pile                   | [LC 2558](https://leetcode.com/problems/take-gifts-from-the-richest-pile/?utm_source=chatgpt.com)                      |
| 50 | Apply Operations to an Array                       | [LC 2460](https://leetcode.com/problems/apply-operations-to-an-array/?utm_source=chatgpt.com)                          |

---

# 🔴 HARD — 50 LeetCode

| #  | Problem                                                  | Link                                                                                                                                        |
| -- | -------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------- |
| 1  | Trapping Rain Water                                      | [LC 42](https://leetcode.com/problems/trapping-rain-water/?utm_source=chatgpt.com)                                                          |
| 2  | Minimum Window Substring                                 | [LC 76](https://leetcode.com/problems/minimum-window-substring/?utm_source=chatgpt.com)                                                     |
| 3  | Sliding Window Maximum                                   | [LC 239](https://leetcode.com/problems/sliding-window-maximum/?utm_source=chatgpt.com)                                                      |
| 4  | First Missing Positive                                   | [LC 41](https://leetcode.com/problems/first-missing-positive/?utm_source=chatgpt.com)                                                       |
| 5  | Median of Two Sorted Arrays                              | [LC 4](https://leetcode.com/problems/median-of-two-sorted-arrays/?utm_source=chatgpt.com)                                                   |
| 6  | Reverse Pairs                                            | [LC 493](https://leetcode.com/problems/reverse-pairs/?utm_source=chatgpt.com)                                                               |
| 7  | Count of Smaller Numbers After Self                      | [LC 315](https://leetcode.com/problems/count-of-smaller-numbers-after-self/?utm_source=chatgpt.com)                                         |
| 8  | Count of Range Sum                                       | [LC 327](https://leetcode.com/problems/count-of-range-sum/?utm_source=chatgpt.com)                                                          |
| 9  | Shortest Subarray With Sum at Least K                    | [LC 862](https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/?utm_source=chatgpt.com)                                       |
| 10 | Longest Duplicate Substring                              | [LC 1044](https://leetcode.com/problems/longest-duplicate-substring/?utm_source=chatgpt.com)                                                |
| 11 | Substring With Concatenation of All Words                | [LC 30](https://leetcode.com/problems/substring-with-concatenation-of-all-words/?utm_source=chatgpt.com)                                    |
| 12 | Minimum Number of K Consecutive Bit Flips                | [LC 995](https://leetcode.com/problems/minimum-number-of-k-consecutive-bit-flips/?utm_source=chatgpt.com)                                   |
| 13 | Number of Subarrays With Bounded Maximum                 | [LC 795](https://leetcode.com/problems/number-of-subarrays-with-bounded-maximum/?utm_source=chatgpt.com)                                    |
| 14 | Count Subarrays With Fixed Bounds                        | [LC 2444](https://leetcode.com/problems/count-subarrays-with-fixed-bounds/?utm_source=chatgpt.com)                                          |
| 15 | Count Subarrays With Median K                            | [LC 2488](https://leetcode.com/problems/count-subarrays-with-median-k/?utm_source=chatgpt.com)                                              |
| 16 | Sum of Total Strength of Wizards                         | [LC 2281](https://leetcode.com/problems/sum-of-total-strength-of-wizards/?utm_source=chatgpt.com)                                           |
| 17 | Maximum Score of a Good Subarray                         | [LC 1793](https://leetcode.com/problems/maximum-score-of-a-good-subarray/?utm_source=chatgpt.com)                                           |
| 18 | Maximum Number of Robots Within Budget                   | [LC 2398](https://leetcode.com/problems/maximum-number-of-robots-within-budget/?utm_source=chatgpt.com)                                     |
| 19 | Constrained Subsequence Sum                              | [LC 1425](https://leetcode.com/problems/constrained-subsequence-sum/?utm_source=chatgpt.com)                                                |
| 20 | Sliding Window Median                                    | [LC 480](https://leetcode.com/problems/sliding-window-median/?utm_source=chatgpt.com)                                                       |
| 21 | Minimum Window Subsequence                               | [LC 727](https://leetcode.com/problems/minimum-window-subsequence/?utm_source=chatgpt.com)                                                  |
| 22 | Longest Increasing Subsequence II                        | [LC 2407](https://leetcode.com/problems/longest-increasing-subsequence-ii/?utm_source=chatgpt.com)                                          |
| 23 | Maximum Sum Queries                                      | [LC 2736](https://leetcode.com/problems/maximum-sum-queries/?utm_source=chatgpt.com)                                                        |
| 24 | Count the Number of Ideal Arrays                         | [LC 2338](https://leetcode.com/problems/count-the-number-of-ideal-arrays/?utm_source=chatgpt.com)                                           |
| 25 | Maximum Number of Events That Can Be Attended II         | [LC 1751](https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended-ii/?utm_source=chatgpt.com)                           |
| 26 | Minimum Cost to Hire K Workers                           | [LC 857](https://leetcode.com/problems/minimum-cost-to-hire-k-workers/?utm_source=chatgpt.com)                                              |
| 27 | Maximum Performance of a Team                            | [LC 1383](https://leetcode.com/problems/maximum-performance-of-a-team/?utm_source=chatgpt.com)                                              |
| 28 | Smallest Range Covering Elements From K Lists            | [LC 632](https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/?utm_source=chatgpt.com)                               |
| 29 | Minimum Cost to Make Array Equal                         | [LC 2448](https://leetcode.com/problems/minimum-cost-to-make-array-equal/?utm_source=chatgpt.com)                                           |
| 30 | Maximum Sum of 3 Non-Overlapping Subarrays               | [LC 689](https://leetcode.com/problems/maximum-sum-of-3-non-overlapping-subarrays/?utm_source=chatgpt.com)                                  |
| 31 | Number of Subsequences That Satisfy Sum Condition        | [LC 1498](https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/?utm_source=chatgpt.com)                |
| 32 | Maximum Number of Non-Overlapping Substrings             | [LC 1520](https://leetcode.com/problems/maximum-number-of-non-overlapping-substrings/?utm_source=chatgpt.com)                               |
| 33 | Minimum Moves to Make Array Complementary                | [LC 1674](https://leetcode.com/problems/minimum-moves-to-make-array-complementary/?utm_source=chatgpt.com)                                  |
| 34 | Number of Ways to Split Array                            | [LC 2270](https://leetcode.com/problems/number-of-ways-to-split-array/?utm_source=chatgpt.com)                                              |
| 35 | Maximum Sum of Two Non-Overlapping Subarrays             | [LC 1031](https://leetcode.com/problems/maximum-sum-of-two-non-overlapping-subarrays/?utm_source=chatgpt.com)                               |
| 36 | Maximum Sum Circular Subarray                            | [LC 918](https://leetcode.com/problems/maximum-sum-circular-subarray/?utm_source=chatgpt.com)                                               |
| 37 | Longest Continuous Subarray With Absolute Diff ≤ Limit   | [LC 1438](https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/?utm_source=chatgpt.com) |
| 38 | Number of Substrings Containing All Three Characters     | [LC 1358](https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/?utm_source=chatgpt.com)                       |
| 39 | Subarrays With K Different Integers                      | [LC 992](https://leetcode.com/problems/subarrays-with-k-different-integers/?utm_source=chatgpt.com)                                         |
| 40 | Minimum Operations to Reduce X to Zero                   | [LC 1658](https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/?utm_source=chatgpt.com)                                     |
| 41 | Maximum Number of Visible Points                         | [LC 1610](https://leetcode.com/problems/maximum-number-of-visible-points/?utm_source=chatgpt.com)                                           |
| 42 | Take K of Each Character From Left and Right             | [LC 2516](https://leetcode.com/problems/take-k-of-each-character-from-left-and-right/?utm_source=chatgpt.com)                               |
| 43 | Maximum White Tiles Covered by a Carpet                  | [LC 2271](https://leetcode.com/problems/maximum-white-tiles-covered-by-a-carpet/?utm_source=chatgpt.com)                                    |
| 44 | Maximum Number of Achievable Transfer Requests           | [LC 1601](https://leetcode.com/problems/maximum-number-of-achievable-transfer-requests/?utm_source=chatgpt.com)                             |
| 45 | Number of Ways to Rearrange Sticks With K Sticks Visible | [LC 1866](https://leetcode.com/problems/number-of-ways-to-rearrange-sticks-with-k-sticks-visible/?utm_source=chatgpt.com)                   |
| 46 | Maximum Profit in Job Scheduling                         | [LC 1235](https://leetcode.com/problems/maximum-profit-in-job-scheduling/?utm_source=chatgpt.com)                                           |
| 47 | Minimum Difficulty of a Job Schedule                     | [LC 1335](https://leetcode.com/problems/minimum-difficulty-of-a-job-schedule/?utm_source=chatgpt.com)                                       |
| 48 | Maximum Value of K Coins From Piles                      | [LC 2218](https://leetcode.com/problems/maximum-value-of-k-coins-from-piles/?utm_source=chatgpt.com)                                        |
| 49 | Minimum Total Space Wasted With K Resizing Operations    | [LC 1959](https://leetcode.com/problems/minimum-total-space-wasted-with-k-resizing-operations/?utm_source=chatgpt.com)                      |
| 50 | Maximum Sum of Subsequence With Non-Adjacent Elements    | [LC 3165](https://leetcode.com/problems/maximum-sum-subsequence-with-non-adjacent-elements/?utm_source=chatgpt.com)                         |

---

# 🧠 BRAINSTORMING — 50 LeetCode

These aren't necessarily the hardest by rating. They're the ones where **the main challenge is recognizing the right pointer invariant/pattern**. That's the useful kind of pain. 🧠

| #  | Problem                                              | Link                                                                                                                                        |
| -- | ---------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------- |
| 1  | 3Sum                                                 | [LC 15](https://leetcode.com/problems/3sum/?utm_source=chatgpt.com)                                                                         |
| 2  | 3Sum Closest                                         | [LC 16](https://leetcode.com/problems/3sum-closest/?utm_source=chatgpt.com)                                                                 |
| 3  | 4Sum                                                 | [LC 18](https://leetcode.com/problems/4sum/?utm_source=chatgpt.com)                                                                         |
| 4  | Container With Most Water                            | [LC 11](https://leetcode.com/problems/container-with-most-water/?utm_source=chatgpt.com)                                                    |
| 5  | Trapping Rain Water                                  | [LC 42](https://leetcode.com/problems/trapping-rain-water/?utm_source=chatgpt.com)                                                          |
| 6  | Find the Duplicate Number                            | [LC 287](https://leetcode.com/problems/find-the-duplicate-number/?utm_source=chatgpt.com)                                                   |
| 7  | Linked List Cycle II                                 | [LC 142](https://leetcode.com/problems/linked-list-cycle-ii/?utm_source=chatgpt.com)                                                        |
| 8  | Valid Triangle Number                                | [LC 611](https://leetcode.com/problems/valid-triangle-number/?utm_source=chatgpt.com)                                                       |
| 9  | Boats to Save People                                 | [LC 881](https://leetcode.com/problems/boats-to-save-people/?utm_source=chatgpt.com)                                                        |
| 10 | Advantage Shuffle                                    | [LC 870](https://leetcode.com/problems/advantage-shuffle/?utm_source=chatgpt.com)                                                           |
| 11 | Bag of Tokens                                        | [LC 948](https://leetcode.com/problems/bag-of-tokens/?utm_source=chatgpt.com)                                                               |
| 12 | Wiggle Subsequence                                   | [LC 376](https://leetcode.com/problems/wiggle-subsequence/?utm_source=chatgpt.com)                                                          |
| 13 | Increasing Triplet Subsequence                       | [LC 334](https://leetcode.com/problems/increasing-triplet-subsequence/?utm_source=chatgpt.com)                                              |
| 14 | Maximum Swap                                         | [LC 670](https://leetcode.com/problems/maximum-swap/?utm_source=chatgpt.com)                                                                |
| 15 | Next Permutation                                     | [LC 31](https://leetcode.com/problems/next-permutation/?utm_source=chatgpt.com)                                                             |
| 16 | Partition Array According to Given Pivot             | [LC 2161](https://leetcode.com/problems/partition-array-according-to-given-pivot/?utm_source=chatgpt.com)                                   |
| 17 | Sort Colors                                          | [LC 75](https://leetcode.com/problems/sort-colors/?utm_source=chatgpt.com)                                                                  |
| 18 | Remove Duplicates II                                 | [LC 80](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/?utm_source=chatgpt.com)                                       |
| 19 | Longest Mountain in Array                            | [LC 845](https://leetcode.com/problems/longest-mountain-in-array/?utm_source=chatgpt.com)                                                   |
| 20 | Find K Closest Elements                              | [LC 658](https://leetcode.com/problems/find-k-closest-elements/?utm_source=chatgpt.com)                                                     |
| 21 | K-diff Pairs                                         | [LC 532](https://leetcode.com/problems/k-diff-pairs-in-an-array/?utm_source=chatgpt.com)                                                    |
| 22 | Two Sum Less Than K                                  | [LC 1099](https://leetcode.com/problems/two-sum-less-than-k/?utm_source=chatgpt.com)                                                        |
| 23 | 3Sum With Multiplicity                               | [LC 923](https://leetcode.com/problems/3sum-with-multiplicity/?utm_source=chatgpt.com)                                                      |
| 24 | 4Sum II                                              | [LC 454](https://leetcode.com/problems/4sum-ii/?utm_source=chatgpt.com)                                                                     |
| 25 | Count Pairs With Sum Less Than Target                | [LC 2824](https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/?utm_source=chatgpt.com)                                  |
| 26 | Interval List Intersections                          | [LC 986](https://leetcode.com/problems/interval-list-intersections/?utm_source=chatgpt.com)                                                 |
| 27 | Squares of a Sorted Array                            | [LC 977](https://leetcode.com/problems/squares-of-a-sorted-array/?utm_source=chatgpt.com)                                                   |
| 28 | Backspace String Compare                             | [LC 844](https://leetcode.com/problems/backspace-string-compare/?utm_source=chatgpt.com)                                                    |
| 29 | Long Pressed Name                                    | [LC 925](https://leetcode.com/problems/long-pressed-name/?utm_source=chatgpt.com)                                                           |
| 30 | String Compression                                   | [LC 443](https://leetcode.com/problems/string-compression/?utm_source=chatgpt.com)                                                          |
| 31 | Minimum Window Substring                             | [LC 76](https://leetcode.com/problems/minimum-window-substring/?utm_source=chatgpt.com)                                                     |
| 32 | Longest Continuous Subarray                          | [LC 1438](https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/?utm_source=chatgpt.com) |
| 33 | Subarrays With K Different Integers                  | [LC 992](https://leetcode.com/problems/subarrays-with-k-different-integers/?utm_source=chatgpt.com)                                         |
| 34 | Minimum Operations to Reduce X                       | [LC 1658](https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/?utm_source=chatgpt.com)                                     |
| 35 | Maximum Number of Robots Within Budget               | [LC 2398](https://leetcode.com/problems/maximum-number-of-robots-within-budget/?utm_source=chatgpt.com)                                     |
| 36 | Sliding Window Maximum                               | [LC 239](https://leetcode.com/problems/sliding-window-maximum/?utm_source=chatgpt.com)                                                      |
| 37 | Sliding Window Median                                | [LC 480](https://leetcode.com/problems/sliding-window-median/?utm_source=chatgpt.com)                                                       |
| 38 | Shortest Subarray With Sum at Least K                | [LC 862](https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/?utm_source=chatgpt.com)                                       |
| 39 | Maximum White Tiles                                  | [LC 2271](https://leetcode.com/problems/maximum-white-tiles-covered-by-a-carpet/?utm_source=chatgpt.com)                                    |
| 40 | Minimum Size Subarray Sum                            | [LC 209](https://leetcode.com/problems/minimum-size-subarray-sum/?utm_source=chatgpt.com)                                                   |
| 41 | Longest Repeating Character Replacement              | [LC 424](https://leetcode.com/problems/longest-repeating-character-replacement/?utm_source=chatgpt.com)                                     |
| 42 | Permutation in String                                | [LC 567](https://leetcode.com/problems/permutation-in-string/?utm_source=chatgpt.com)                                                       |
| 43 | Find All Anagrams in a String                        | [LC 438](https://leetcode.com/problems/find-all-anagrams-in-a-string/?utm_source=chatgpt.com)                                               |
| 44 | Fruit Into Baskets                                   | [LC 904](https://leetcode.com/problems/fruit-into-baskets/?utm_source=chatgpt.com)                                                          |
| 45 | Max Consecutive Ones III                             | [LC 1004](https://leetcode.com/problems/max-consecutive-ones-iii/?utm_source=chatgpt.com)                                                   |
| 46 | Longest Substring Without Repeating Characters       | [LC 3](https://leetcode.com/problems/longest-substring-without-repeating-characters/?utm_source=chatgpt.com)                                |
| 47 | Number of Substrings Containing All Three Characters | [LC 1358](https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/?utm_source=chatgpt.com)                       |
| 48 | Take K of Each Character From Left and Right         | [LC 2516](https://leetcode.com/problems/take-k-of-each-character-from-left-and-right/?utm_source=chatgpt.com)                               |
| 49 | Minimum Window Subsequence                           | [LC 727](https://leetcode.com/problems/minimum-window-subsequence/?utm_source=chatgpt.com)                                                  |
| 50 | Substring With Concatenation of All Words            | [LC 30](https://leetcode.com/problems/substring-with-concatenation-of-all-words/?utm_source=chatgpt.com)                                    |

---

# 🪟 PART B: SLIDING WINDOW

Sliding window has two major forms:

**Fixed window**

```
[ L ........ R ]
     size = K
```

and **variable window**

```
expand R
   ↓
condition violated
   ↓
move L
```

That distinction is fundamental. [LeetCode](https://leetcode.com/discuss/post/4883819/sliding-window-summary?utm_source=chatgpt.com)

## 🟢 EASY — 50 GFG

| #  | Problem                                        | Link                                                                                                                               |
| -- | ---------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------- |
| 1  | Maximum Sum Subarray of Size K                 | [GFG](https://www.geeksforgeeks.org/dsa/find-maximum-minimum-sum-subarray-size-k/?utm_source=chatgpt.com)                          |
| 2  | First Negative Integer in Every Window         | [GFG](https://www.geeksforgeeks.org/first-negative-integer-every-window-size-k/?utm_source=chatgpt.com)                            |
| 3  | Maximum of All Subarrays of Size K             | [GFG](https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/?utm_source=chatgpt.com)             |
| 4  | Count Distinct Elements in Every Window        | [GFG](https://www.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1?utm_source=chatgpt.com)                     |
| 5  | Average of Subarray of Size K                  | [GFG](https://www.geeksforgeeks.org/maximum-average-subarray-of-size-k/?utm_source=chatgpt.com)                                    |
| 6  | Maximum Consecutive 1s                         | [GFG](https://www.geeksforgeeks.org/problems/maximize-number-of-1s/0?utm_source=chatgpt.com)                                       |
| 7  | Longest Subarray With Sum K                    | [GFG](https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=chatgpt.com)                            |
| 8  | Longest Subarray of Even and Odd               | [GFG](https://www.geeksforgeeks.org/longest-subarray-with-alternating-even-and-odd-elements/?utm_source=chatgpt.com)               |
| 9  | Maximum Consecutive Ones                       | [GFG](https://www.geeksforgeeks.org/problems/maximize-number-of-1s/0?utm_source=chatgpt.com)                                       |
| 10 | Longest Substring Without Repeating Characters | [GFG](https://www.geeksforgeeks.org/longest-substring-without-repeating-characters/?utm_source=chatgpt.com)                        |
| 11 | Longest Substring With K Distinct Characters   | [GFG](https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring/0?utm_source=chatgpt.com)                       |
| 12 | Count Subarrays With Given Sum                 | [GFG](https://www.geeksforgeeks.org/number-subarrays-sum-exactly-equal-k/?utm_source=chatgpt.com)                                  |
| 13 | Smallest Subarray With Sum Greater Than X      | [GFG](https://www.geeksforgeeks.org/minimum-length-subarray-sum-greater-given-value/?utm_source=chatgpt.com)                       |
| 14 | Maximum Difference of Two Elements             | [GFG](https://www.geeksforgeeks.org/maximum-difference-between-two-elements/?utm_source=chatgpt.com)                               |
| 15 | Maximum Sum of k Consecutive Elements          | [GFG](https://www.geeksforgeeks.org/window-sliding-technique/?utm_source=chatgpt.com)                                              |
| 16 | Count Subarrays of Size K                      | [GFG](https://www.geeksforgeeks.org/window-sliding-technique/?utm_source=chatgpt.com)                                              |
| 17 | Maximum Product Subarray of Fixed Size         | [GFG](https://www.geeksforgeeks.org/maximum-product-subarray/?utm_source=chatgpt.com)                                              |
| 18 | Minimum Sum Subarray of Size K                 | [GFG](https://www.geeksforgeeks.org/window-sliding-technique/?utm_source=chatgpt.com)                                              |
| 19 | Maximum Element in Every Window                | [GFG](https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/?utm_source=chatgpt.com)             |
| 20 | Minimum Element in Every Window                | [GFG](https://www.geeksforgeeks.org/sliding-window-minimum-maximum-in-all-subarrays-of-size-k/?utm_source=chatgpt.com)             |
| 21 | Sum of Minimum and Maximum of Window           | [GFG](https://www.geeksforgeeks.org/sum-minimum-maximum-elements-subarrays-size-k/?utm_source=chatgpt.com)                         |
| 22 | Check Anagram in String                        | [GFG](https://www.geeksforgeeks.org/problems/anagram-search-1587115620/1?utm_source=chatgpt.com)                                   |
| 23 | Count Anagrams                                 | [GFG](https://www.geeksforgeeks.org/count-occurrences-of-anagrams/?utm_source=chatgpt.com)                                         |
| 24 | Find All Anagrams                              | [GFG](https://www.geeksforgeeks.org/find-occurrences-of-anagrams/?utm_source=chatgpt.com)                                          |
| 25 | Maximum Vowels in K-Length Substring           | [GFG](https://www.geeksforgeeks.org/maximize-number-of-vowels-in-a-substring-of-given-length/?utm_source=chatgpt.com)              |
| 26 | Count Vowels in Every Window                   | [GFG](https://www.geeksforgeeks.org/count-number-of-vowels-in-substrings-of-given-length/?utm_source=chatgpt.com)                  |
| 27 | Longest Binary Subarray                        | [GFG](https://www.geeksforgeeks.org/longest-sub-array-of-0s-and-1s/?utm_source=chatgpt.com)                                        |
| 28 | Maximum Consecutive Characters                 | [GFG](https://www.geeksforgeeks.org/maximum-consecutive-repeating-character-replacement/?utm_source=chatgpt.com)                   |
| 29 | Longest Substring With At Most K Distinct      | [GFG](https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring/0?utm_source=chatgpt.com)                       |
| 30 | Count Distinct Windows                         | [GFG](https://www.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1?utm_source=chatgpt.com)                     |
| 31 | First Negative in Window                       | [GFG](https://www.geeksforgeeks.org/first-negative-integer-every-window-size-k/?utm_source=chatgpt.com)                            |
| 32 | Maximum Sum Window                             | [GFG](https://www.geeksforgeeks.org/dsa/find-maximum-minimum-sum-subarray-size-k/?utm_source=chatgpt.com)                          |
| 33 | Minimum Sum Window                             | [GFG](https://www.geeksforgeeks.org/window-sliding-technique/?utm_source=chatgpt.com)                                              |
| 34 | Maximum Average Window                         | [GFG](https://www.geeksforgeeks.org/maximum-average-subarray-of-size-k/?utm_source=chatgpt.com)                                    |
| 35 | Count Windows With Sum K                       | [GFG](https://www.geeksforgeeks.org/number-subarrays-sum-exactly-equal-k/?utm_source=chatgpt.com)                                  |
| 36 | Longest Subarray With Equal 0s and 1s          | [GFG](https://www.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1?utm_source=chatgpt.com)                               |
| 37 | Longest Even-Odd Subarray                      | [GFG](https://www.geeksforgeeks.org/longest-subarray-with-alternating-even-and-odd-elements/?utm_source=chatgpt.com)               |
| 38 | Maximum Consecutive 1s After Flips             | [GFG](https://www.geeksforgeeks.org/maximize-number-of-1s/?utm_source=chatgpt.com)                                                 |
| 39 | Smallest Window Containing Pattern             | [GFG](https://www.geeksforgeeks.org/problems/smallest-window-containing-all-characters-of-another-string/1?utm_source=chatgpt.com) |
| 40 | Count Substrings With K Distinct               | [GFG](https://www.geeksforgeeks.org/problems/count-number-of-substrings/1?utm_source=chatgpt.com)                                  |
| 41 | Longest Substring With K Replacements          | [GFG](https://www.geeksforgeeks.org/longest-substring-with-same-letters-after-replacement/?utm_source=chatgpt.com)                 |
| 42 | Maximum Sum Circular Window                    | [GFG](https://www.geeksforgeeks.org/maximum-circular-subarray-sum/?utm_source=chatgpt.com)                                         |
| 43 | Maximum Subarray of Fixed Length               | [GFG](https://www.geeksforgeeks.org/window-sliding-technique/?utm_source=chatgpt.com)                                              |
| 44 | Minimum Window With All Distinct               | [GFG](https://www.geeksforgeeks.org/smallest-window-contains-characters-string/?utm_source=chatgpt.com)                            |
| 45 | Longest Subarray With At Most K Zeros          | [GFG](https://www.geeksforgeeks.org/maximize-number-of-1s/?utm_source=chatgpt.com)                                                 |
| 46 | Count Windows With Even Sum                    | [GFG](https://www.geeksforgeeks.org/count-subarrays-with-even-sum/?utm_source=chatgpt.com)                                         |
| 47 | Count Windows With Odd Sum                     | [GFG](https://www.geeksforgeeks.org/count-subarrays-with-odd-sum/?utm_source=chatgpt.com)                                          |
| 48 | Maximum Number of Vowels                       | [GFG](https://www.geeksforgeeks.org/maximize-number-of-vowels-in-a-substring-of-given-length/?utm_source=chatgpt.com)              |
| 49 | Minimum Difference Between Window Sums         | [GFG](https://www.geeksforgeeks.org/minimum-difference-between-sums-of-two-subarrays/?utm_source=chatgpt.com)                      |
| 50 | Maximum Sum of Non-Overlapping Windows         | [GFG](https://www.geeksforgeeks.org/maximum-sum-of-two-non-overlapping-subarrays/?utm_source=chatgpt.com)                          |

---

# 🟡 MEDIUM — 50 LeetCode

| #  | Problem                                                    | Link                                                                                                                                        |
| -- | ---------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------- |
| 1  | Maximum Average Subarray I                                 | [LC 643](https://leetcode.com/problems/maximum-average-subarray-i/?utm_source=chatgpt.com)                                                  |
| 2  | Minimum Size Subarray Sum                                  | [LC 209](https://leetcode.com/problems/minimum-size-subarray-sum/?utm_source=chatgpt.com)                                                   |
| 3  | Longest Substring Without Repeating Characters             | [LC 3](https://leetcode.com/problems/longest-substring-without-repeating-characters/?utm_source=chatgpt.com)                                |
| 4  | Longest Repeating Character Replacement                    | [LC 424](https://leetcode.com/problems/longest-repeating-character-replacement/?utm_source=chatgpt.com)                                     |
| 5  | Permutation in String                                      | [LC 567](https://leetcode.com/problems/permutation-in-string/?utm_source=chatgpt.com)                                                       |
| 6  | Find All Anagrams in a String                              | [LC 438](https://leetcode.com/problems/find-all-anagrams-in-a-string/?utm_source=chatgpt.com)                                               |
| 7  | Fruit Into Baskets                                         | [LC 904](https://leetcode.com/problems/fruit-into-baskets/?utm_source=chatgpt.com)                                                          |
| 8  | Max Consecutive Ones III                                   | [LC 1004](https://leetcode.com/problems/max-consecutive-ones-iii/?utm_source=chatgpt.com)                                                   |
| 9  | Subarray Product Less Than K                               | [LC 713](https://leetcode.com/problems/subarray-product-less-than-k/?utm_source=chatgpt.com)                                                |
| 10 | Binary Subarrays With Sum                                  | [LC 930](https://leetcode.com/problems/binary-subarrays-with-sum/?utm_source=chatgpt.com)                                                   |
| 11 | Count Number of Nice Subarrays                             | [LC 1248](https://leetcode.com/problems/count-number-of-nice-subarrays/?utm_source=chatgpt.com)                                             |
| 12 | Subarrays With K Different Integers                        | [LC 992](https://leetcode.com/problems/subarrays-with-k-different-integers/?utm_source=chatgpt.com)                                         |
| 13 | Longest Subarray of 1s After Deleting One Element          | [LC 1493](https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/?utm_source=chatgpt.com)                          |
| 14 | Minimum Operations to Reduce X to Zero                     | [LC 1658](https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/?utm_source=chatgpt.com)                                     |
| 15 | Maximum Sum of Distinct Subarrays With Length K            | [LC 2461](https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/?utm_source=chatgpt.com)                            |
| 16 | Count Complete Subarrays                                   | [LC 2799](https://leetcode.com/problems/count-complete-subarrays-in-an-array/?utm_source=chatgpt.com)                                       |
| 17 | Number of Substrings Containing All Three Characters       | [LC 1358](https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/?utm_source=chatgpt.com)                       |
| 18 | Get Equal Substrings Within Budget                         | [LC 1208](https://leetcode.com/problems/get-equal-substrings-within-budget/?utm_source=chatgpt.com)                                         |
| 19 | Defuse the Bomb                                            | [LC 1652](https://leetcode.com/problems/defuse-the-bomb/?utm_source=chatgpt.com)                                                            |
| 20 | Grumpy Bookstore Owner                                     | [LC 1052](https://leetcode.com/problems/grumpy-bookstore-owner/?utm_source=chatgpt.com)                                                     |
| 21 | Maximum Points You Can Obtain From Cards                   | [LC 1423](https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/?utm_source=chatgpt.com)                                   |
| 22 | Diet Plan Performance                                      | [LC 1176](https://leetcode.com/problems/diet-plan-performance/?utm_source=chatgpt.com)                                                      |
| 23 | Find K-Length Substrings With No Repeated Characters       | [LC 1100](https://leetcode.com/problems/find-k-length-substrings-with-no-repeated-characters/?utm_source=chatgpt.com)                       |
| 24 | Maximum Number of Vowels in a Substring                    | [LC 1456](https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/?utm_source=chatgpt.com)                    |
| 25 | Longest Nice Subarray                                      | [LC 2401](https://leetcode.com/problems/longest-nice-subarray/?utm_source=chatgpt.com)                                                      |
| 26 | Count Subarrays Where Max Element Appears at Least K Times | [LC 2962](https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/?utm_source=chatgpt.com)                 |
| 27 | Count Number of Bad Pairs                                  | [LC 2364](https://leetcode.com/problems/count-number-of-bad-pairs/?utm_source=chatgpt.com)                                                  |
| 28 | Frequency of the Most Frequent Element                     | [LC 1838](https://leetcode.com/problems/frequency-of-the-most-frequent-element/?utm_source=chatgpt.com)                                     |
| 29 | Maximum Erasure Value                                      | [LC 1695](https://leetcode.com/problems/maximum-erasure-value/?utm_source=chatgpt.com)                                                      |
| 30 | Longest Continuous Subarray With Absolute Diff ≤ Limit     | [LC 1438](https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/?utm_source=chatgpt.com) |
| 31 | Maximize the Confusion of an Exam                          | [LC 2024](https://leetcode.com/problems/maximize-the-confusion-of-an-exam/?utm_source=chatgpt.com)                                          |
| 32 | Take K of Each Character From Left and Right               | [LC 2516](https://leetcode.com/problems/take-k-of-each-character-from-left-and-right/?utm_source=chatgpt.com)                               |
| 33 | Maximum White Tiles Covered by a Carpet                    | [LC 2271](https://leetcode.com/problems/maximum-white-tiles-covered-by-a-carpet/?utm_source=chatgpt.com)                                    |
| 34 | Longest Subarray With Maximum Bitwise AND                  | [LC 2419](https://leetcode.com/problems/longest-subarray-with-maximum-bitwise-and/?utm_source=chatgpt.com)                                  |
| 35 | Minimum Recolors to Get K Consecutive Black Blocks         | [LC 2379](https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/?utm_source=chatgpt.com)                         |
| 36 | Number of Ways to Split a String                           | [LC 1573](https://leetcode.com/problems/number-of-ways-to-split-a-string/?utm_source=chatgpt.com)                                           |
| 37 | Longest Nice Subarray                                      | [LC 2401](https://leetcode.com/problems/longest-nice-subarray/?utm_source=chatgpt.com)                                                      |
| 38 | Maximum Beauty of an Array After Applying Operation        | [LC 2779](https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/?utm_source=chatgpt.com)                        |
| 39 | Count the Number of Good Subarrays                         | [LC 2537](https://leetcode.com/problems/count-the-number-of-good-subarrays/?utm_source=chatgpt.com)                                         |
| 40 | Number of Subarrays Having Odd Sum                         | [LC 1524](https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/?utm_source=chatgpt.com)                                          |
| 41 | Maximum Length of Subarray With Positive Product           | [LC 1567](https://leetcode.com/problems/maximum-length-of-subarray-with-positive-product/?utm_source=chatgpt.com)                           |
| 42 | Count Subarrays With Score Less Than K                     | [LC 2302](https://leetcode.com/problems/count-subarrays-with-score-less-than-k/?utm_source=chatgpt.com)                                     |
| 43 | Maximum Sum of Distinct Subarrays                          | [LC 2461](https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/?utm_source=chatgpt.com)                            |
| 44 | Minimum Swaps to Group All 1s Together                     | [LC 1151](https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together/?utm_source=chatgpt.com)                                     |
| 45 | Minimum Swaps to Group All 1s Together II                  | [LC 2134](https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/?utm_source=chatgpt.com)                                  |
| 46 | Defuse the Bomb                                            | [LC 1652](https://leetcode.com/problems/defuse-the-bomb/?utm_source=chatgpt.com)                                                            |
| 47 | Maximum Sum Circular Subarray                              | [LC 918](https://leetcode.com/problems/maximum-sum-circular-subarray/?utm_source=chatgpt.com)                                               |
| 48 | Longest Substring With At Most Two Distinct Characters     | [LC 159](https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/?utm_source=chatgpt.com)                      |
| 49 | Longest Substring With At Most K Distinct Characters       | [LC 340](https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/?utm_source=chatgpt.com)                        |
| 50 | Minimum Number of Swaps to Make Binary String Alternating  | [LC 1864](https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-binary-string-alternating/?utm_source=chatgpt.com)              |

---

# 🔴 HARD — 50 LeetCode

| #  | Problem                                               | Link                                                                                                                                        |
| -- | ----------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------- |
| 1  | Sliding Window Maximum                                | [LC 239](https://leetcode.com/problems/sliding-window-maximum/?utm_source=chatgpt.com)                                                      |
| 2  | Minimum Window Substring                              | [LC 76](https://leetcode.com/problems/minimum-window-substring/?utm_source=chatgpt.com)                                                     |
| 3  | Sliding Window Median                                 | [LC 480](https://leetcode.com/problems/sliding-window-median/?utm_source=chatgpt.com)                                                       |
| 4  | Shortest Subarray With Sum at Least K                 | [LC 862](https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/?utm_source=chatgpt.com)                                       |
| 5  | Substring With Concatenation of All Words             | [LC 30](https://leetcode.com/problems/substring-with-concatenation-of-all-words/?utm_source=chatgpt.com)                                    |
| 6  | Minimum Window Subsequence                            | [LC 727](https://leetcode.com/problems/minimum-window-subsequence/?utm_source=chatgpt.com)                                                  |
| 7  | Longest Duplicate Substring                           | [LC 1044](https://leetcode.com/problems/longest-duplicate-substring/?utm_source=chatgpt.com)                                                |
| 8  | Longest Continuous Subarray                           | [LC 1438](https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/?utm_source=chatgpt.com) |
| 9  | Number of Subarrays With Bounded Maximum              | [LC 795](https://leetcode.com/problems/number-of-subarrays-with-bounded-maximum/?utm_source=chatgpt.com)                                    |
| 10 | Subarrays With K Different Integers                   | [LC 992](https://leetcode.com/problems/subarrays-with-k-different-integers/?utm_source=chatgpt.com)                                         |
| 11 | Count Subarrays With Fixed Bounds                     | [LC 2444](https://leetcode.com/problems/count-subarrays-with-fixed-bounds/?utm_source=chatgpt.com)                                          |
| 12 | Count Subarrays With Median K                         | [LC 2488](https://leetcode.com/problems/count-subarrays-with-median-k/?utm_source=chatgpt.com)                                              |
| 13 | Sum of Total Strength of Wizards                      | [LC 2281](https://leetcode.com/problems/sum-of-total-strength-of-wizards/?utm_source=chatgpt.com)                                           |
| 14 | Maximum Number of Robots Within Budget                | [LC 2398](https://leetcode.com/problems/maximum-number-of-robots-within-budget/?utm_source=chatgpt.com)                                     |
| 15 | Constrained Subsequence Sum                           | [LC 1425](https://leetcode.com/problems/constrained-subsequence-sum/?utm_source=chatgpt.com)                                                |
| 16 | Maximum Score of a Good Subarray                      | [LC 1793](https://leetcode.com/problems/maximum-score-of-a-good-subarray/?utm_source=chatgpt.com)                                           |
| 17 | Count of Range Sum                                    | [LC 327](https://leetcode.com/problems/count-of-range-sum/?utm_source=chatgpt.com)                                                          |
| 18 | Reverse Pairs                                         | [LC 493](https://leetcode.com/problems/reverse-pairs/?utm_source=chatgpt.com)                                                               |
| 19 | Count of Smaller Numbers After Self                   | [LC 315](https://leetcode.com/problems/count-of-smaller-numbers-after-self/?utm_source=chatgpt.com)                                         |
| 20 | Create Sorted Array Through Instructions              | [LC 1649](https://leetcode.com/problems/create-sorted-array-through-instructions/?utm_source=chatgpt.com)                                   |
| 21 | Maximum Sum Queries                                   | [LC 2736](https://leetcode.com/problems/maximum-sum-queries/?utm_source=chatgpt.com)                                                        |
| 22 | Minimum Cost to Make Array Equal                      | [LC 2448](https://leetcode.com/problems/minimum-cost-to-make-array-equal/?utm_source=chatgpt.com)                                           |
| 23 | Maximum White Tiles Covered by a Carpet               | [LC 2271](https://leetcode.com/problems/maximum-white-tiles-covered-by-a-carpet/?utm_source=chatgpt.com)                                    |
| 24 | Maximum Number of Events That Can Be Attended II      | [LC 1751](https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended-ii/?utm_source=chatgpt.com)                           |
| 25 | Maximum Profit in Job Scheduling                      | [LC 1235](https://leetcode.com/problems/maximum-profit-in-job-scheduling/?utm_source=chatgpt.com)                                           |
| 26 | Minimum Difficulty of a Job Schedule                  | [LC 1335](https://leetcode.com/problems/minimum-difficulty-of-a-job-schedule/?utm_source=chatgpt.com)                                       |
| 27 | Maximum Value of K Coins From Piles                   | [LC 2218](https://leetcode.com/problems/maximum-value-of-k-coins-from-piles/?utm_source=chatgpt.com)                                        |
| 28 | Minimum Total Space Wasted With K Resizing Operations | [LC 1959](https://leetcode.com/problems/minimum-total-space-wasted-with-k-resizing-operations/?utm_source=chatgpt.com)                      |
| 29 | Maximum Sum of 3 Non-Overlapping Subarrays            | [LC 689](https://leetcode.com/problems/maximum-sum-of-3-non-overlapping-subarrays/?utm_source=chatgpt.com)                                  |
| 30 | Number of Subsequences That Satisfy Sum Condition     | [LC 1498](https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/?utm_source=chatgpt.com)                |
| 31 | Maximum Number of Non-Overlapping Substrings          | [LC 1520](https://leetcode.com/problems/maximum-number-of-non-overlapping-substrings/?utm_source=chatgpt.com)                               |
| 32 | Maximum Number of Achievable Transfer Requests        | [LC 1601](https://leetcode.com/problems/maximum-number-of-achievable-transfer-requests/?utm_source=chatgpt.com)                             |
| 33 | Minimum Moves to Make Array Complementary             | [LC 1674](https://leetcode.com/problems/minimum-moves-to-make-array-complementary/?utm_source=chatgpt.com)                                  |
| 34 | Number of Ways to Rearrange Sticks                    | [LC 1866](https://leetcode.com/problems/number-of-ways-to-rearrange-sticks-with-k-sticks-visible/?utm_source=chatgpt.com)                   |
| 35 | Minimum Number of K Consecutive Bit Flips             | [LC 995](https://leetcode.com/problems/minimum-number-of-k-consecutive-bit-flips/?utm_source=chatgpt.com)                                   |
| 36 | Maximum Performance of a Team                         | [LC 1383](https://leetcode.com/problems/maximum-performance-of-a-team/?utm_source=chatgpt.com)                                              |
| 37 | Minimum Cost to Hire K Workers                        | [LC 857](https://leetcode.com/problems/minimum-cost-to-hire-k-workers/?utm_source=chatgpt.com)                                              |
| 38 | Smallest Range Covering Elements From K Lists         | [LC 632](https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/?utm_source=chatgpt.com)                               |
| 39 | Maximum Number of Robots                              | [LC 2398](https://leetcode.com/problems/maximum-number-of-robots-within-budget/?utm_source=chatgpt.com)                                     |
| 40 | Maximum Sum Subsequence With Non-Adjacent Elements    | [LC 3165](https://leetcode.com/problems/maximum-sum-subsequence-with-non-adjacent-elements/?utm_source=chatgpt.com)                         |
| 41 | Count the Number of Ideal Arrays                      | [LC 2338](https://leetcode.com/problems/count-the-number-of-ideal-arrays/?utm_source=chatgpt.com)                                           |
| 42 | Maximum Number of Visible Points                      | [LC 1610](https://leetcode.com/problems/maximum-number-of-visible-points/?utm_source=chatgpt.com)                                           |
| 43 | Minimum Window Substring                              | [LC 76](https://leetcode.com/problems/minimum-window-substring/?utm_source=chatgpt.com)                                                     |
| 44 | Minimum Window Subsequence                            | [LC 727](https://leetcode.com/problems/minimum-window-subsequence/?utm_source=chatgpt.com)                                                  |
| 45 | Longest Duplicate Substring                           | [LC 1044](https://leetcode.com/problems/longest-duplicate-substring/?utm_source=chatgpt.com)                                                |
| 46 | Maximum Sum Queries                                   | [LC 2736](https://leetcode.com/problems/maximum-sum-queries/?utm_source=chatgpt.com)                                                        |
| 47 | Maximum White Tiles                                   | [LC 2271](https://leetcode.com/problems/maximum-white-tiles-covered-by-a-carpet/?utm_source=chatgpt.com)                                    |
| 48 | Shortest Subarray With Sum at Least K                 | [LC 862](https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/?utm_source=chatgpt.com)                                       |
| 49 | Sliding Window Median                                 | [LC 480](https://leetcode.com/problems/sliding-window-median/?utm_source=chatgpt.com)                                                       |
| 50 | Sum of Total Strength of Wizards                      | [LC 2281](https://leetcode.com/problems/sum-of-total-strength-of-wizards/?utm_source=chatgpt.com)                                           |

---

# 🧠 BRAINSTORMING — 50 LeetCode

These should be treated differently. **Do not immediately look at the pattern.** Try brute force first, identify the bottleneck, then derive the window invariant. The whole point of sliding-window problems is recognizing when a contiguous range can be maintained incrementally instead of recomputed. [LeetCode](https://leetcode.com/discuss/post/2016730/Sliding-Window-Questions/?utm_source=chatgpt.com)

| #  | Problem                                              | Link                                                                                                                                        |
| -- | ---------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------- |
| 1  | Longest Substring Without Repeating Characters       | [LC 3](https://leetcode.com/problems/longest-substring-without-repeating-characters/?utm_source=chatgpt.com)                                |
| 2  | Minimum Window Substring                             | [LC 76](https://leetcode.com/problems/minimum-window-substring/?utm_source=chatgpt.com)                                                     |
| 3  | Longest Repeating Character Replacement              | [LC 424](https://leetcode.com/problems/longest-repeating-character-replacement/?utm_source=chatgpt.com)                                     |
| 4  | Permutation in String                                | [LC 567](https://leetcode.com/problems/permutation-in-string/?utm_source=chatgpt.com)                                                       |
| 5  | Find All Anagrams in a String                        | [LC 438](https://leetcode.com/problems/find-all-anagrams-in-a-string/?utm_source=chatgpt.com)                                               |
| 6  | Fruit Into Baskets                                   | [LC 904](https://leetcode.com/problems/fruit-into-baskets/?utm_source=chatgpt.com)                                                          |
| 7  | Max Consecutive Ones III                             | [LC 1004](https://leetcode.com/problems/max-consecutive-ones-iii/?utm_source=chatgpt.com)                                                   |
| 8  | Subarrays With K Different Integers                  | [LC 992](https://leetcode.com/problems/subarrays-with-k-different-integers/?utm_source=chatgpt.com)                                         |
| 9  | Subarray Product Less Than K                         | [LC 713](https://leetcode.com/problems/subarray-product-less-than-k/?utm_source=chatgpt.com)                                                |
| 10 | Minimum Size Subarray Sum                            | [LC 209](https://leetcode.com/problems/minimum-size-subarray-sum/?utm_source=chatgpt.com)                                                   |
| 11 | Binary Subarrays With Sum                            | [LC 930](https://leetcode.com/problems/binary-subarrays-with-sum/?utm_source=chatgpt.com)                                                   |
| 12 | Count Number of Nice Subarrays                       | [LC 1248](https://leetcode.com/problems/count-number-of-nice-subarrays/?utm_source=chatgpt.com)                                             |
| 13 | Number of Substrings Containing All Three Characters | [LC 1358](https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/?utm_source=chatgpt.com)                       |
| 14 | Maximum Erasure Value                                | [LC 1695](https://leetcode.com/problems/maximum-erasure-value/?utm_source=chatgpt.com)                                                      |
| 15 | Longest Nice Subarray                                | [LC 2401](https://leetcode.com/problems/longest-nice-subarray/?utm_source=chatgpt.com)                                                      |
| 16 | Longest Continuous Subarray                          | [LC 1438](https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/?utm_source=chatgpt.com) |
| 17 | Count Subarrays With Score Less Than K               | [LC 2302](https://leetcode.com/problems/count-subarrays-with-score-less-than-k/?utm_source=chatgpt.com)                                     |
| 18 | Count Subarrays Where Max Appears At Least K Times   | [LC 2962](https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/?utm_source=chatgpt.com)                 |
| 19 | Maximum Sum Distinct Subarrays                       | [LC 2461](https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/?utm_source=chatgpt.com)                            |
| 20 | Get Equal Substrings Within Budget                   | [LC 1208](https://leetcode.com/problems/get-equal-substrings-within-budget/?utm_source=chatgpt.com)                                         |
| 21 | Maximize Confusion of an Exam                        | [LC 2024](https://leetcode.com/problems/maximize-the-confusion-of-an-exam/?utm_source=chatgpt.com)                                          |
| 22 | Maximum Number of Vowels                             | [LC 1456](https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/?utm_source=chatgpt.com)                    |
| 23 | Defuse the Bomb                                      | [LC 1652](https://leetcode.com/problems/defuse-the-bomb/?utm_source=chatgpt.com)                                                            |
| 24 | Grumpy Bookstore Owner                               | [LC 1052](https://leetcode.com/problems/grumpy-bookstore-owner/?utm_source=chatgpt.com)                                                     |
| 25 | Maximum Points From Cards                            | [LC 1423](https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/?utm_source=chatgpt.com)                                   |
| 26 | Take K of Each Character                             | [LC 2516](https://leetcode.com/problems/take-k-of-each-character-from-left-and-right/?utm_source=chatgpt.com)                               |
| 27 | Minimum Recolors                                     | [LC 2379](https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/?utm_source=chatgpt.com)                         |
| 28 | Longest Subarray of 1s After Deleting One            | [LC 1493](https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/?utm_source=chatgpt.com)                          |
| 29 | Frequency of Most Frequent Element                   | [LC 1838](https://leetcode.com/problems/frequency-of-the-most-frequent-element/?utm_source=chatgpt.com)                                     |
| 30 | Maximum Beauty of an Array                           | [LC 2779](https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/?utm_source=chatgpt.com)                        |
| 31 | Count Good Subarrays                                 | [LC 2537](https://leetcode.com/problems/count-the-number-of-good-subarrays/?utm_source=chatgpt.com)                                         |
| 32 | Minimum Swaps to Group 1s                            | [LC 1151](https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together/?utm_source=chatgpt.com)                                     |
| 33 | Minimum Swaps to Group 1s II                         | [LC 2134](https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/?utm_source=chatgpt.com)                                  |
| 34 | Maximum White Tiles                                  | [LC 2271](https://leetcode.com/problems/maximum-white-tiles-covered-by-a-carpet/?utm_source=chatgpt.com)                                    |
| 35 | Sliding Window Maximum                               | [LC 239](https://leetcode.com/problems/sliding-window-maximum/?utm_source=chatgpt.com)                                                      |
| 36 | Sliding Window Median                                | [LC 480](https://leetcode.com/problems/sliding-window-median/?utm_source=chatgpt.com)                                                       |
| 37 | Shortest Subarray With Sum at Least K                | [LC 862](https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/?utm_source=chatgpt.com)                                       |
| 38 | Minimum Window Subsequence                           | [LC 727](https://leetcode.com/problems/minimum-window-subsequence/?utm_source=chatgpt.com)                                                  |
| 39 | Substring Concatenation of All Words                 | [LC 30](https://leetcode.com/problems/substring-with-concatenation-of-all-words/?utm_source=chatgpt.com)                                    |
| 40 | Longest Duplicate Substring                          | [LC 1044](https://leetcode.com/problems/longest-duplicate-substring/?utm_source=chatgpt.com)                                                |
| 41 | Maximum Number of Robots Within Budget               | [LC 2398](https://leetcode.com/problems/maximum-number-of-robots-within-budget/?utm_source=chatgpt.com)                                     |
| 42 | Count Subarrays With Fixed Bounds                    | [LC 2444](https://leetcode.com/problems/count-subarrays-with-fixed-bounds/?utm_source=chatgpt.com)                                          |
| 43 | Number of Subarrays With Bounded Maximum             | [LC 795](https://leetcode.com/problems/number-of-subarrays-with-bounded-maximum/?utm_source=chatgpt.com)                                    |
| 44 | Count Subarrays With Median K                        | [LC 2488](https://leetcode.com/problems/count-subarrays-with-median-k/?utm_source=chatgpt.com)                                              |
| 45 | Maximum Score of a Good Subarray                     | [LC 1793](https://leetcode.com/problems/maximum-score-of-a-good-subarray/?utm_source=chatgpt.com)                                           |
| 46 | Sum of Total Strength of Wizards                     | [LC 2281](https://leetcode.com/problems/sum-of-total-strength-of-wizards/?utm_source=chatgpt.com)                                           |
| 47 | Maximum Sum Queries                                  | [LC 2736](https://leetcode.com/problems/maximum-sum-queries/?utm_source=chatgpt.com)                                                        |
| 48 | Maximum Visible Points                               | [LC 1610](https://leetcode.com/problems/maximum-number-of-visible-points/?utm_source=chatgpt.com)                                           |
| 49 | Minimum Cost to Make Array Equal                     | [LC 2448](https://leetcode.com/problems/minimum-cost-to-make-array-equal/?utm_source=chatgpt.com)                                           |
| 50 | Smallest Range Covering K Lists                      | [LC 632](https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/?utm_source=chatgpt.com)                               |

---

## 🎯 How I want you to actually solve these

Don't solve **50 Easy → 50 Medium → 50 Hard → 50 Brainstorming** blindly.

Use this progression:

### Two Pointers

**Easy 1–50**\
→ learn pointer movement

**Medium 1–50**\
→ recognize the invariant

**Brainstorming 1–50**\
→ derive the invariant yourself

**Hard 1–50**\
→ combine two pointers with hashing, greedy, binary search, stack, etc.

### Sliding Window

Start with:

```
Fixed Window
     ↓
Variable Window
     ↓
Frequency Map
     ↓
At Most K
     ↓
Exactly K
     ↓
Monotonic Deque
     ↓
Prefix Sum + Window
     ↓
Advanced Window
```

The classic progression is **fixed-size → variable-size → frequency/counting → monotonic deque**, and problems like Sliding Window Maximum introduce the deque optimization. [LeetCode](https://leetcode.com/discuss/post/2016730/Sliding-Window-Questions/?utm_source=chatgpt.com)

### ⭐ The 20 problems I would absolutely NOT skip

If the goal is **FAANG-level DSA**, these are the core ones:

**Two Pointers**

- Two Sum II
- 3Sum
- 3Sum Closest
- 4Sum
- Container With Most Water
- Sort Colors
- Trapping Rain Water
- Valid Triangle Number
- Boats to Save People
- Advantage Shuffle

**Sliding Window**

- Longest Substring Without Repeating Characters
- Minimum Size Subarray Sum
- Longest Repeating Character Replacement
- Permutation in String
- Find All Anagrams
- Fruit Into Baskets
- Max Consecutive Ones III
- Subarrays With K Different Integers
- Minimum Window Substring
- Sliding Window Maximum

Those cover the major patterns instead of merely giving you 400 opportunities to move `left++` and `right++` until retirement. 😭🔥