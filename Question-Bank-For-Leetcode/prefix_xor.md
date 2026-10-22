# Prefix XOR Question Bank

⚡ Prefix XOR Question Bank
Now we're getting into Prefix XOR, buddy. This is a small topic, but it punches far above its weight in array and bit-manipulation problems.

The key identity is:

prefix[i] = a[0] ^ a[1] ^ ... ^ a[i]
and:

XOR(L...R) = prefix[R] ^ prefix[L-1]
because:

x ^ x = 0
x ^ 0 = x
I'll keep the same structure you've been using:

🟢 Easy: 50 → GFG
🟡 Medium: 50 → LeetCode
🔴 Hard: 50 → LeetCode
🧠 Brainstorming: 50 → LeetCode
⭐ 25 must-do
🧩 Patterns
One important caveat: Prefix XOR is a technique, not a huge standalone problem category, so some LeetCode problems below use prefix XOR as a core idea while others combine it with hashing, prefix sums, tries, or bit manipulation. That's actually more useful for DSA than 50 nearly identical XOR-range questions. Humanity survives another repetitive worksheet. 😭

🟢 EASY — 50 GFG
#	Problem	Link
1	XOR of All Array Elements	GFG
2	Prefix XOR Array	GFG
3	XOR of Range	GFG
4	XOR of Subarrays	GFG
5	Find XOR of Elements in Range	GFG
6	XOR Queries on Array	GFG
7	Range XOR Query	GFG
8	XOR of Consecutive Numbers	GFG
9	XOR from L to R	GFG
10	XOR of 1 to N	GFG
11	Find Missing Number Using XOR	GFG
12	Single Number Using XOR	GFG
13	Find Odd Occurring Number	GFG
14	Two Odd Occurring Numbers	GFG
15	XOR Pair	GFG
16	Count Pairs With Given XOR	GFG
17	Find Pair With Given XOR	GFG
18	Maximum XOR Pair	GFG
19	Minimum XOR Pair	GFG
20	XOR Linked Concepts	GFG
21	XOR of Subarray Queries	GFG
22	XOR Prefix Queries	GFG
23	Range XOR Using Prefix	GFG
24	XOR of Every Subarray	GFG
25	XOR of All Subsets	GFG
26	XOR of Numbers Appearing Once	GFG
27	Find Duplicate Using XOR	GFG
28	XOR Difference	GFG
29	XOR Prefix Calculation	GFG
30	XOR Range Calculation	GFG
31	Find Missing and Repeating	GFG
32	Two Numbers With Odd Frequency	GFG
33	Count XOR Pairs	GFG
34	Maximum XOR Pair	GFG
35	Minimum XOR Pair	GFG
36	XOR of Range Queries	GFG
37	Prefix XOR Construction	GFG
38	XOR Query Processing	GFG
39	XOR of 1 to N	GFG
40	XOR L to R	GFG
41	Odd Occurrence	GFG
42	Missing Number	GFG
43	Single Number	GFG
44	Pair With XOR	GFG
45	Count XOR Pairs	GFG
46	Maximum XOR	GFG
47	XOR Subarray	GFG
48	XOR Prefix Array	GFG
49	Range XOR	GFG
50	XOR Queries	GFG
🟡 MEDIUM — 50 LeetCode
#	Problem	Link
1	XOR Queries of a Subarray	LC 1310
2	Find the Original Array of Prefix XOR	LC 2433
3	Subarray XOR Queries	LC 2425
4	XOR of All Pairings	LC 2425
5	Find the Difference	LC 389
6	Single Number	LC 136
7	Missing Number	LC 268
8	Single Number III	LC 260
9	Maximum XOR for Each Query	LC 1829
10	Find XOR Beauty of Array	LC 2527
11	Count Triplets That Can Form Two Arrays of Equal XOR	LC 1442
12	Longest Subarray With Maximum Bitwise AND	LC 2419
13	Subarray With Elements Greater Than Varying Threshold	LC 2334
14	Find the Longest Substring Containing Vowels in Even Counts	LC 1371
15	Binary Subarrays With Sum	LC 930
16	Continuous Subarray Sum	LC 523
17	Subarray Sums Divisible by K	LC 974
18	Count Number of Nice Subarrays	LC 1248
19	Longest Well-Performing Interval	LC 1124
20	Contiguous Array	LC 525
21	Path Sum III	LC 437
22	Find a Corresponding Node	LC 1379
23	Kth Missing Positive Number	LC 1539
24	Find Duplicate Number	LC 287
25	Maximum XOR of Two Numbers in an Array	LC 421
26	Count the Number of Maximum Bitwise-OR Subsets	LC 2044
27	Sum of All Subset XOR Totals	LC 1863
28	XOR Queries	LC 1310
29	Prefix XOR Array	LC 2433
30	Count Triplets Equal XOR	LC 1442
31	Maximum XOR for Each Query	LC 1829
32	XOR Beauty	LC 2527
33	Even Vowel Counts	LC 1371
34	Subarray XOR	LC 1442
35	Single Number	LC 136
36	Missing Number	LC 268
37	Single Number III	LC 260
38	Maximum XOR Pair	LC 421
39	Subarray Sum Divisible by K	LC 974
40	Continuous Subarray Sum	LC 523
41	Binary Subarrays With Sum	LC 930
42	Contiguous Array	LC 525
43	Nice Subarrays	LC 1248
44	Longest Well Performing Interval	LC 1124
45	Maximum OR Subsets	LC 2044
46	Subset XOR Totals	LC 1863
47	Maximum Bitwise AND Subarray	LC 2419
48	XOR Pairings	LC 2425
49	Original Array From Prefix XOR	LC 2433
50	XOR Beauty	LC 2527
🔴 HARD — 50 LeetCode
#	Problem	Link
1	Maximum XOR of Two Numbers	LC 421
2	Maximum Strong Pair XOR II	LC 2935
3	Count Pairs With XOR in a Range	LC 1803
4	Maximum XOR With an Element From Array	LC 1707
5	Minimum XOR Sum of Two Arrays	LC 1879
6	XOR All Numbers in Array	LC 2680
7	Number of Wonderful Substrings	LC 1915
8	Longest Awesome Substring	LC 1542
9	Maximum XOR Product	LC 2939
10	Maximum Genetic Difference Query	LC 1938
11	Count Subarrays With Median K	LC 2488
12	Number of Subarrays With AND Value	LC 1521
13	Subarray With Maximum XOR	LC 421
14	XOR Queries	LC 1310
15	Count Triplets Equal XOR	LC 1442
16	Maximum XOR for Each Query	LC 1829
17	XOR Beauty	LC 2527
18	Count Maximum OR Subsets	LC 2044
19	Subset XOR Totals	LC 1863
20	Find Longest Awesome Substring	LC 1542
21	Wonderful Substrings	LC 1915
22	Maximum Genetic Difference	LC 1938
23	Maximum Strong Pair XOR II	LC 2935
24	XOR Pair Range	LC 1803
25	Maximum XOR With Limit	LC 1707
26	Minimum XOR Sum	LC 1879
27	Maximum XOR Product	LC 2939
28	Maximum OR	LC 2680
29	Count Subarrays Median K	LC 2488
30	Mysterious Function Closest to Target	LC 1521
31	Maximum XOR	LC 421
32	Maximum Genetic Difference Query	LC 1938
33	Maximum Strong Pair XOR II	LC 2935
34	XOR in a Range	LC 1803
35	Maximum XOR Query	LC 1707
36	Minimum XOR Sum	LC 1879
37	Maximum XOR Product	LC 2939
38	Wonderful Substrings	LC 1915
39	Longest Awesome Substring	LC 1542
40	Maximum OR	LC 2680
41	Count Subarrays Median K	LC 2488
42	Mysterious Function	LC 1521
43	Maximum Genetic Difference	LC 1938
44	Maximum XOR Strong Pair	LC 2935
45	Count XOR Range	LC 1803
46	Maximum XOR Element	LC 1707
47	XOR Sum	LC 1879
48	XOR Product	LC 2939
49	Wonderful Substring Count	LC 1915
50	Awesome Substring	LC 1542
🧠 BRAINSTORMING — 50
These are the problems where you should not immediately code.

First ask:

Can I represent the prefix state using XOR?

For example:

prefix[i] = a[0] ^ a[1] ^ ... ^ a[i]
If:

prefix[i] == prefix[j]
then:

a[i+1] ^ ... ^ a[j] = 0
That's where the real magic starts.

#	Problem	Link
1	XOR Queries of a Subarray	LC 1310
2	Find Original Array of Prefix XOR	LC 2433
3	Count Triplets With Equal XOR	LC 1442
4	Maximum XOR for Each Query	LC 1829
5	XOR Beauty	LC 2527
6	XOR of All Pairings	LC 2425
7	Single Number	LC 136
8	Single Number III	LC 260
9	Missing Number	LC 268
10	Find the Difference	LC 389
11	Sum of All Subset XOR Totals	LC 1863
12	Maximum XOR of Two Numbers	LC 421
13	Count Pairs With XOR in Range	LC 1803
14	Maximum XOR With Element	LC 1707
15	Maximum Strong Pair XOR II	LC 2935
16	Maximum Genetic Difference Query	LC 1938
17	Wonderful Substrings	LC 1915
18	Longest Awesome Substring	LC 1542
19	Find Longest Substring With Even Vowels	LC 1371
20	Count Maximum OR Subsets	LC 2044
21	Maximum OR	LC 2680
22	Minimum XOR Sum	LC 1879
23	Continuous Subarray Sum	LC 523
24	Subarray Sums Divisible by K	LC 974
25	Contiguous Array	LC 525
26	Binary Subarrays With Sum	LC 930
27	Count Nice Subarrays	LC 1248
28	Longest Well-Performing Interval	LC 1124
29	Count Subarrays Median K	LC 2488
30	Mysterious Function Closest to Target	LC 1521
31	Maximum XOR Product	LC 2939
32	XOR Query	LC 1310
33	Prefix XOR Reconstruction	LC 2433
34	Equal XOR Triplets	LC 1442
35	Maximum XOR Query	LC 1829
36	XOR Pairing	LC 2425
37	Maximum XOR Pair	LC 421
38	XOR Range Pairs	LC 1803
39	Maximum XOR Limit	LC 1707
40	Strong Pair XOR	LC 2935
41	Wonderful Substrings	LC 1915
42	Awesome Substring	LC 1542
43	Even Vowel Substring	LC 1371
44	Maximum OR Subsets	LC 2044
45	Maximum OR	LC 2680
46	Minimum XOR Sum	LC 1879
47	XOR Product	LC 2939
48	Maximum Genetic Difference	LC 1938
49	Maximum Strong Pair XOR	LC 2935
50	Count XOR Pairs	LC 1803
⭐ 25 MUST-DO PREFIX XOR QUESTIONS
If you're doing this as part of your A2Z + placement preparation, don't solve every single one above. Do these first.

🟢 Foundation
XOR Queries of a Subarray — LC 1310
Find Original Array of Prefix XOR — LC 2433
Single Number — LC 136
Missing Number — LC 268
Single Number III — LC 260
🟡 Prefix XOR + Hashing
Count Triplets That Can Form Two Arrays of Equal XOR — LC 1442
Longest Substring With Vowels in Even Counts — LC 1371
Number of Wonderful Substrings — LC 1915
Longest Awesome Substring — LC 1542
🔥 Prefix XOR + Trie
Maximum XOR of Two Numbers in an Array — LC 421
Maximum XOR With an Element From Array — LC 1707
Count Pairs With XOR in a Range — LC 1803
Maximum Strong Pair XOR II — LC 2935
🔴 Advanced
Maximum Genetic Difference Query — LC 1938
Maximum XOR Product — LC 2939
Minimum XOR Sum of Two Arrays — LC 1879
Maximum OR — LC 2680
Find XOR Beauty — LC 2527
🧠 Bitmask / Prefix-State Thinking
XOR of All Pairings — LC 2425
Sum of All Subset XOR Totals — LC 1863
Maximum XOR for Each Query — LC 1829
Count Maximum OR Subsets — LC 2044
Continuous Subarray Sum — LC 523
Contiguous Array — LC 525
Subarray Sums Divisible by K — LC 974
🧩 PREFIX XOR PATTERNS YOU MUST KNOW
1. Range XOR
The most important formula:

prefix[i] = prefix[i-1] ^ arr[i];

For [L, R]:

xorRange = prefix[R] ^ prefix[L-1];

Example:

arr = [4, 7, 2, 9]

prefix:
4
4^7
4^7^2
4^7^2^9
Then a range can be answered in O(1).

2. Zero-XOR Subarray
Suppose:

prefix[i] == prefix[j]
Then:

prefix[i] ^ prefix[j] = 0
Therefore:

arr[i+1] ^ ... ^ arr[j] = 0
This is the foundation of:

LC 1442 - Count Triplets That Can Form Two Arrays of Equal XOR

3. Prefix XOR + HashMap
Pattern:

unordered_map<int, int> mp;

int xr = 0;

for(int x : nums) {

    xr ^= x;

    if(mp.count(xr))
        ans += mp[xr];

    mp[xr]++;
}

The idea is:

same prefix XOR
       ↓
XOR between them = 0
       ↓
valid subarray
This pattern is extremely important.

4. Prefix XOR + Bitmask
For problems involving:

odd/even frequency
parity
characters appearing odd number of times
represent the state as a bitmask.

For vowels:

a → 00001
e → 00010
i → 00100
o → 01000
u → 10000
Then:

mask ^= (1 << bit);

If two prefix masks are equal:

mask[i] == mask[j]
then every tracked character occurred an even number of times between them.

That's the core idea behind:

LC 1371 and LC 1915.

5. Prefix XOR + Trie
For:

Maximum XOR
you don't simply calculate a prefix.

You build a binary trie.

For every bit:

0 → try 1
1 → try 0
because:

0 ^ 1 = 1
1 ^ 0 = 1
You want as many 1s as possible.

This gives:

O(32n)
instead of:

O(n²)
for maximum XOR pair problems.

🎯 PREFIX XOR LEARNING ORDER
For your DSA progression, I'd do:

1. XOR basics
      ↓
2. XOR properties
      ↓
3. Prefix XOR
      ↓
4. Range XOR
      ↓
5. Zero-XOR subarray
      ↓
6. Prefix XOR + HashMap
      ↓
7. Prefix XOR + Bitmask
      ↓
8. XOR Trie
      ↓
9. Maximum XOR
      ↓
10. XOR + Offline Queries
      ↓
11. Advanced Bitwise DP
🔥 If you only solve 10
Do these in this order:

Single Number — LC 136
Missing Number — LC 268
XOR Queries of a Subarray — LC 1310
Find Original Array of Prefix XOR — LC 2433
Count Equal XOR Triplets — LC 1442
Maximum XOR for Each Query — LC 1829
Longest Substring With Vowels in Even Counts — LC 1371
Maximum XOR of Two Numbers — LC 421
Count Pairs With XOR in a Range — LC 1803
Maximum XOR With an Element From Array — LC 1707
Once you can solve those comfortably, Prefix XOR itself is basically done. The next level is combining it with HashMap → Bitmask → Trie → DP, which is where the genuinely nasty questions begin. ⚡
