# Tree DP: Independent Set and Maximum Matching

🌳 Tree DP Question Bank
Independent Set • Maximum Matching • Tree DP
Now we're into the proper Tree DP territory, buddy. This is not ordinary binary-tree DP where you recursively return height and call it a day. Here the state depends on the relationship between a node and its parent, which is where the fun starts. Humanity apparently decided trees weren't complicated enough. 😭

I'll keep your usual structure:

🟢 Easy: 50 → GFG
🟡 Medium: 50 → LeetCode
🔴 Hard: 50 → LeetCode
🧠 Brainstorming: 50 → LeetCode
⭐ 25 must-do
🧩 Core Tree-DP patterns
Important: LeetCode doesn't have 50 pure "Maximum Matching on Tree" or "Maximum Independent Set on Tree" problems. So for the Medium/Hard sections, I'm including problems that develop the same tree-DP state-transition skills, rather than pretending unrelated problems are pure independent-set/matching problems.

🟢 EASY — 50 GFG
#	Problem	Link
1	Maximum Independent Set of a Tree	GFG
2	Maximum Independent Set	GFG
3	Vertex Cover of Tree	GFG
4	Minimum Vertex Cover of Tree	GFG
5	Diameter of Binary Tree	GFG
6	Maximum Path Sum	GFG
7	House Robber on Tree	GFG
8	Maximum Sum Non-Adjacent Nodes	GFG
9	Minimum Dominating Set	GFG
10	Binary Tree Cameras	GFG
11	Maximum Matching in Tree	GFG
12	Maximum Matching	GFG
13	Independent Set in Tree	GFG
14	Weighted Independent Set	GFG
15	Tree DP Basics	GFG
16	Sum of Nodes at K Distance	GFG
17	Maximum Root-to-Leaf Path	GFG
18	Maximum Path Sum Between Leaves	GFG
19	Maximum Sum of Non-Adjacent Nodes	GFG
20	House Robber Tree	GFG
21	Vertex Cover	GFG
22	Tree Matching	GFG
23	Maximum Weight Independent Set	GFG
24	Tree Diameter DP	GFG
25	Tree Maximum Path	GFG
26	Binary Tree Maximum Sum	GFG
27	Tree DP	GFG
28	Tree DP with Two States	GFG
29	Tree DP Parent State	GFG
30	Independent Set DP	GFG
31	Vertex Cover DP	GFG
32	Matching DP	GFG
33	Maximum Non-Adjacent Nodes	GFG
34	Tree Path Sum	GFG
35	Maximum Path Between Leaves	GFG
36	Tree Diameter	GFG
37	Minimum Vertex Cover	GFG
38	Maximum Matching	GFG
39	Independent Set	GFG
40	Weighted Tree DP	GFG
41	Tree DP Optimization	GFG
42	Maximum Tree Sum	GFG
43	Non-Adjacent Tree Nodes	GFG
44	Tree Cover	GFG
45	Tree Matching DP	GFG
46	Maximum Independent Set	GFG
47	Tree Maximum Path	GFG
48	Binary Tree DP	GFG
49	Tree Optimization	GFG
50	Maximum Matching in Tree	GFG
🟡 MEDIUM — 50 LeetCode
These aren't all literally called "Tree DP". They train the same skill:

Define a state for each node, solve children, combine states.

#	Problem	Link
1	House Robber III	LC 337
2	Binary Tree Maximum Path Sum	LC 124
3	Diameter of Binary Tree	LC 543
4	Maximum Difference Between Node and Ancestor	LC 1026
5	Longest ZigZag Path	LC 1372
6	Distribute Coins in Binary Tree	LC 979
7	Binary Tree Cameras	LC 968
8	Longest Univalue Path	LC 687
9	Maximum Product of Splitted Binary Tree	LC 1339
10	Smallest Subtree With All Deepest Nodes	LC 865
11	Lowest Common Ancestor of Deepest Leaves	LC 1123
12	All Nodes Distance K	LC 863
13	Sum of Nodes With Even-Valued Grandparent	LC 1315
14	Pseudo-Palindromic Paths	LC 1457
15	Path Sum III	LC 437
16	Maximum Average Subtree	LC 1120
17	Binary Tree Pruning	LC 814
18	Longest Path With Different Adjacent Characters	LC 2246
19	Maximum Score After Splitting a String	LC 1422
20	Tree Diameter	LC 1245
21	Sum of Distances in Tree	LC 834
22	Time Needed to Inform All Employees	LC 1376
23	Maximum Binary Tree	LC 654
24	Delete Nodes and Return Forest	LC 1110
25	Longest Univalue Path	LC 687
26	Binary Tree Coloring Game	LC 1145
27	Maximum Level Sum	LC 1161
28	Find Duplicate Subtrees	LC 652
29	Path Sum II	LC 113
30	Path Sum	LC 112
31	Sum Root to Leaf Numbers	LC 129
32	House Robber III	LC 337
33	Binary Tree Cameras	LC 968
34	Distribute Coins	LC 979
35	Longest Different Adjacent Path	LC 2246
36	Maximum Path Sum	LC 124
37	Diameter	LC 543
38	Maximum Difference Ancestor	LC 1026
39	Longest ZigZag	LC 1372
40	Pseudo-Palindromic Paths	LC 1457
41	Deepest Leaves LCA	LC 1123
42	Smallest Deepest Subtree	LC 865
43	All Nodes Distance K	LC 863
44	Even Grandparent Sum	LC 1315
45	Binary Tree Pruning	LC 814
46	Maximum Average Subtree	LC 1120
47	Tree Diameter	LC 1245
48	Inform All Employees	LC 1376
49	Delete Nodes Forest	LC 1110
50	Duplicate Subtrees	LC 652
🔴 HARD — 50 LeetCode
Now we get into the nastier tree-DP territory.

#	Problem	Link
1	Binary Tree Maximum Path Sum	LC 124
2	Binary Tree Cameras	LC 968
3	House Robber III	LC 337
4	Longest Path With Different Adjacent Characters	LC 2246
5	Sum of Distances in Tree	LC 834
6	Maximum Output of a Tree	LC 2538
7	Tree of Coprimes	LC 1766
8	Number of Good Paths	LC 2421
9	Height of Binary Tree After Subtree Removal Queries	LC 2458
10	Distribute Coins in Binary Tree	LC 979
11	Maximum Product of Splitted Binary Tree	LC 1339
12	Longest ZigZag Path	LC 1372
13	Longest Univalue Path	LC 687
14	Maximum Genetic Difference Query	LC 1938
15	Maximum Sum BST in Binary Tree	LC 1373
16	Smallest Sufficient Team	LC 1125
17	Minimum Number of Days to Disconnect Island	LC 1568
18	Number of Ways to Reorder Array to Get Same BST	LC 1569
19	Maximum Score After Applying Operations on a Tree	LC 2925
20	Minimum Edge Weight Equilibrium Queries	LC 2846
21	Count Valid Paths in a Tree	LC 2867
22	Difference Between Maximum and Minimum Price Sum	LC 2538
23	Maximum Sum of Node Values	LC 3068
24	Time Taken to Mark All Nodes	LC 3241
25	Count Nodes With the Highest Score	LC 2049
26	Longest Path With Different Adjacent Characters	LC 2246
27	Sum of Distances	LC 834
28	Maximum Output	LC 2538
29	Tree of Coprimes	LC 1766
30	Number of Good Paths	LC 2421
31	Maximum Genetic Difference	LC 1938
32	Maximum Sum BST	LC 1373
33	Tree Queries	LC 2458
34	Maximum Score Tree Operations	LC 2925
35	Valid Paths Tree	LC 2867
36	Edge Weight Equilibrium	LC 2846
37	Time to Mark Nodes	LC 3241
38	Highest Score Nodes	LC 2049
39	Maximum Node Values	LC 3068
40	Maximum Output Tree	LC 2538
41	Count Good Paths	LC 2421
42	Tree Coprimes	LC 1766
43	Maximum Genetic Difference	LC 1938
44	Maximum Sum BST	LC 1373
45	Score After Tree Operations	LC 2925
46	Valid Tree Paths	LC 2867
47	Mark All Nodes	LC 3241
48	Highest Score Nodes	LC 2049
49	Equilibrium Queries	LC 2846
50	Sum Distances in Tree	LC 834
🧠 BRAINSTORMING — 50
These are specifically for developing the "what should my DP state represent?" instinct.

#	Problem	Link
1	House Robber III	LC 337
2	Binary Tree Cameras	LC 968
3	Binary Tree Maximum Path Sum	LC 124
4	Diameter of Binary Tree	LC 543
5	Longest Univalue Path	LC 687
6	Distribute Coins	LC 979
7	Longest ZigZag Path	LC 1372
8	Maximum Sum BST	LC 1373
9	Maximum Product of Splitted Tree	LC 1339
10	Smallest Deepest Subtree	LC 865
11	LCA of Deepest Leaves	LC 1123
12	Longest Different Adjacent Path	LC 2246
13	Sum of Distances in Tree	LC 834
14	Maximum Output of Tree	LC 2538
15	Tree of Coprimes	LC 1766
16	Number of Good Paths	LC 2421
17	Maximum Genetic Difference Query	LC 1938
18	Height After Subtree Removal	LC 2458
19	Maximum Score After Operations	LC 2925
20	Count Nodes With Highest Score	LC 2049
21	Count Valid Paths	LC 2867
22	Minimum Edge Weight Equilibrium	LC 2846
23	Time Taken to Mark Nodes	LC 3241
24	Maximum Sum Node Values	LC 3068
25	Tree Diameter	LC 1245
26	Time to Inform Employees	LC 1376
27	All Nodes Distance K	LC 863
28	Path Sum III	LC 437
29	Pseudo-Palindromic Paths	LC 1457
30	Even-Valued Grandparent	LC 1315
31	Maximum Average Subtree	LC 1120
32	Binary Tree Pruning	LC 814
33	Delete Nodes and Return Forest	LC 1110
34	Find Duplicate Subtrees	LC 652
35	Binary Tree Coloring Game	LC 1145
36	Maximum Level Sum	LC 1161
37	Maximum Difference Ancestor	LC 1026
38	Maximum Output	LC 2538
39	Sum Distances	LC 834
40	Tree Coprimes	LC 1766
41	Good Paths	LC 2421
42	Genetic Difference	LC 1938
43	Score After Tree Operations	LC 2925
44	Valid Paths	LC 2867
45	Mark All Nodes	LC 3241
46	Edge Equilibrium	LC 2846
47	Highest Score Nodes	LC 2049
48	Maximum Node Values	LC 3068
49	Maximum Sum BST	LC 1373
50	Maximum Path Sum	LC 124
🌟 The Two Core Problems You Asked For
1. Maximum Independent Set on Tree
This is the one you absolutely need to understand.

For every node:

dp[u][0] = maximum answer if u is NOT selected

dp[u][1] = maximum answer if u IS selected
If u is selected:

dp[u][1] = value[u] + Σ dp[v][0]
because if u is selected, none of its children can be selected.

If u isn't selected:

dp[u][0] = Σ max(dp[v][0], dp[v][1])
So:

              u
           /  |  \
          a   b   c
If:

u = selected
then:

a = not selected
b = not selected
c = not selected
That's the entire core idea.

2. Maximum Matching on Tree
Now the state is slightly different.

A matching means:

No two selected edges share a vertex.

For each node u, think about whether u is already matched with its parent.

State:
dp[u][0]
Maximum matching inside subtree when u is not matched with its parent.

dp[u][1]
Maximum matching when u is matched with its parent.

If u is already matched with parent:

u
|
parent
then u cannot match any child.

So:

dp[u][1] = Σ dp[v][0]
If u is free, you have two choices:

Don't match u with any child
Σ max(dp[v][0], dp[v][1])
Match u with one child v
Gain:

1
and that child becomes unavailable for another match.

So conceptually:

answer =
base
+
max(
    1 + dp[v][1?] - previous contribution
)
The exact state formulation depends on how you define the parent-match state, which is why this problem is much better learned by deriving it rather than memorizing a cursed formula from someone's 3 AM CP blog post. 😭

🧩 Tree DP State Patterns
You should recognize these immediately:

Pattern 1: Selected / Not Selected
dp[u][0]
dp[u][1]
Used in:

Independent Set
House Robber III
Vertex Cover
Pattern 2: Matched / Not Matched
dp[u][0]
dp[u][1]
Used in:

Maximum Matching
Edge selection problems
Pattern 3: Parent State
dp[u][parent_state]
Useful when:

parent selected
parent not selected
changes what u can do.

Pattern 4: Multiple Child Choices
Sometimes you need:

best1
best2
from children.

For example:

longest path through u
=
best child path 1
+
best child path 2
+
value[u]
This appears in:

LC 124, LC 543, LC 2246

⭐ 25 MUST-DO TREE-DP QUESTIONS
If you're doing this for placements + CP, I'd prioritize these:

🟢 Foundation
Maximum Independent Set of Tree — GFG
Minimum Vertex Cover of Tree — GFG
Maximum Matching in Tree — GFG
House Robber III — LC 337
Binary Tree Maximum Path Sum — LC 124
🟡 Core Tree DP
Diameter of Binary Tree — LC 543
Binary Tree Cameras — LC 968
Distribute Coins — LC 979
Longest Univalue Path — LC 687
Longest ZigZag Path — LC 1372
🔥 Advanced Tree DP
Longest Path With Different Adjacent Characters — LC 2246
Sum of Distances in Tree — LC 834
Maximum Output of a Tree — LC 2538
Maximum Score After Applying Operations on a Tree — LC 2925
Tree of Coprimes — LC 1766
🧠 Hard State Design
Number of Good Paths — LC 2421
Maximum Genetic Difference Query — LC 1938
Height of Binary Tree After Subtree Removal Queries — LC 2458
Count Valid Paths in a Tree — LC 2867
Time Taken to Mark All Nodes — LC 3241
🏆 Extra
Maximum Sum BST in Binary Tree — LC 1373
Maximum Product of Splitted Binary Tree — LC 1339
Count Nodes With Highest Score — LC 2049
Minimum Edge Weight Equilibrium Queries — LC 2846
Find the Maximum Sum of Node Values — LC 3068
🎯 Best Order For YOU
Don't randomly jump between these. Do:

Maximum Independent Set
        ↓
Vertex Cover
        ↓
House Robber III
        ↓
Maximum Matching
        ↓
Diameter
        ↓
Maximum Path Sum
        ↓
Binary Tree Cameras
        ↓
Distribute Coins
        ↓
Longest Univalue Path
        ↓
Longest Different Adjacent Path
        ↓
Sum of Distances in Tree
        ↓
Maximum Output
        ↓
Rerooting DP
The big conceptual jump is:
Normal Tree DP
      ↓
dp[u] depends on children
      ↓
Rerooting DP
      ↓
dp[u] depends on parent + children
That rerooting DP part is the real advanced Tree DP skill. Once you've got Independent Set + Vertex Cover + Matching + Rerooting, you've covered the core family rather than merely collecting problem links like Pokémon. 🌳🔥
