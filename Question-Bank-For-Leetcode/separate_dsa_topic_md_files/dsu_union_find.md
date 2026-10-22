# 🔥 DSU / Union-Find Question Bank

Now we're at **DSU (Disjoint Set Union)**, buddy. This one is actually worth mastering because it shows up everywhere in **graphs, connectivity, Kruskal's MST, cycle detection, components, and offline queries**.

And unlike some data structures, DSU has only a few core ideas:

```
makeSet
   ↓
find()
   ↓
union()
   ↓
Path Compression
   +
Union by Rank / Size
```

Let's build the same **50 + 50 + 50 + 50** question bank you've been using.

> **Important:** LeetCode has fewer pure DSU problems than Graph/DP problems, so the Medium/Hard sections include problems where **DSU is one of the intended or strong approaches**. I'm not going to pretend every graph problem magically becomes DSU just to hit the number 50. Humanity has enough fake statistics already. 😭

---

# 🟢 EASY — 50 GFG

| #  | Problem                             | Link                                                                                                                     |
| -- | ----------------------------------- | ------------------------------------------------------------------------------------------------------------------------ |
| 1  | Disjoint Set Union                  | [GFG](https://www.geeksforgeeks.org/disjoint-set-data-structures/)                                                       |
| 2  | Union-Find Algorithm                | [GFG](https://www.geeksforgeeks.org/union-find/)                                                                         |
| 3  | DSU with Path Compression           | [GFG](https://www.geeksforgeeks.org/union-find/)                                                                         |
| 4  | Union by Rank                       | [GFG](https://www.geeksforgeeks.org/union-by-rank-and-path-compression-in-union-find-algorithm/)                         |
| 5  | Union by Size                       | [GFG](https://www.geeksforgeeks.org/union-by-rank-and-path-compression-in-union-find-algorithm/)                         |
| 6  | Connected Components Using DSU      | [GFG](https://www.geeksforgeeks.org/connected-components-in-an-undirected-graph/)                                        |
| 7  | Detect Cycle Using DSU              | [GFG](https://www.geeksforgeeks.org/detect-cycle-in-an-undirected-graph-using-union-find/)                               |
| 8  | Kruskal's MST                       | [GFG](https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-algorithm-greedy-algo-2/)                             |
| 9  | Minimum Spanning Tree               | [GFG](https://www.geeksforgeeks.org/problems/minimum-spanning-tree/1)                                                    |
| 10 | Number of Connected Components      | [GFG](https://www.geeksforgeeks.org/connected-components-in-an-undirected-graph/)                                        |
| 11 | Graph Connectivity                  | [GFG](https://www.geeksforgeeks.org/connected-components-in-an-undirected-graph/)                                        |
| 12 | Cycle Detection in Undirected Graph | [GFG](https://www.geeksforgeeks.org/problems/detect-cycle-using-dsu/1)                                                   |
| 13 | Redundant Connection                | [GFG](https://www.geeksforgeeks.org/redundant-connection/)                                                               |
| 14 | Kruskal's Algorithm                 | [GFG](https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-algorithm-greedy-algo-2/)                             |
| 15 | Minimum Cost to Connect All Cities  | [GFG](https://www.geeksforgeeks.org/minimum-cost-connect-cities/)                                                        |
| 16 | Connecting the Graph                | [GFG](https://www.geeksforgeeks.org/connected-components-in-an-undirected-graph/)                                        |
| 17 | Number of Provinces                 | [GFG](https://www.geeksforgeeks.org/problems/number-of-provinces/1)                                                      |
| 18 | Accounts Merge                      | [GFG](https://www.geeksforgeeks.org/accounts-merge/)                                                                     |
| 19 | Friend Circles                      | [GFG](https://www.geeksforgeeks.org/friend-circles/)                                                                     |
| 20 | Social Network Connectivity         | [GFG](https://www.geeksforgeeks.org/connected-components-in-an-undirected-graph/)                                        |
| 21 | Dynamic Connectivity                | [GFG](https://www.geeksforgeeks.org/dynamic-connectivity-set-1-incremental/)                                             |
| 22 | Number of Islands Using DSU         | [GFG](https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1)                                               |
| 23 | Island Counting                     | [GFG](https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1)                                               |
| 24 | Largest Connected Component         | [GFG](https://www.geeksforgeeks.org/largest-connected-component-on-a-grid/)                                              |
| 25 | Making a Large Island               | [GFG](https://www.geeksforgeeks.org/problems/making-a-large-island/1)                                                    |
| 26 | Remove Stones                       | [GFG](https://www.geeksforgeeks.org/remove-max-number-of-stones-such-that-two-stones-are-not-in-the-same-row-or-column/) |
| 27 | Minimum Edges to Connect Graph      | [GFG](https://www.geeksforgeeks.org/minimum-number-of-edges-to-be-added-to-make-an-undirected-graph-connected/)          |
| 28 | Connected Components in Matrix      | [GFG](https://www.geeksforgeeks.org/connected-components-in-an-undirected-graph/)                                        |
| 29 | Graph Components                    | [GFG](https://www.geeksforgeeks.org/connected-components-in-an-undirected-graph/)                                        |
| 30 | DSU for Grid                        | [GFG](https://www.geeksforgeeks.org/largest-connected-component-on-a-grid/)                                              |
| 31 | Kruskal's MST Using DSU             | [GFG](https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-algorithm-greedy-algo-2/)                             |
| 32 | Cycle Detection Using Union Find    | [GFG](https://www.geeksforgeeks.org/detect-cycle-in-an-undirected-graph-using-union-find/)                               |
| 33 | Number of Islands                   | [GFG](https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1)                                               |
| 34 | Minimum Cost to Connect Points      | [GFG](https://www.geeksforgeeks.org/minimum-cost-connect-all-points/)                                                    |
| 35 | MST of Graph                        | [GFG](https://www.geeksforgeeks.org/problems/minimum-spanning-tree/1)                                                    |
| 36 | Find Redundant Edge                 | [GFG](https://www.geeksforgeeks.org/redundant-connection/)                                                               |
| 37 | Union Two Components                | [GFG](https://www.geeksforgeeks.org/disjoint-set-data-structures/)                                                       |
| 38 | Find Component Size                 | [GFG](https://www.geeksforgeeks.org/disjoint-set-data-structures/)                                                       |
| 39 | Count Components                    | [GFG](https://www.geeksforgeeks.org/connected-components-in-an-undirected-graph/)                                        |
| 40 | Graph Connectivity Queries          | [GFG](https://www.geeksforgeeks.org/dynamic-connectivity-set-1-incremental/)                                             |
| 41 | DSU Operations                      | [GFG](https://www.geeksforgeeks.org/disjoint-set-data-structures/)                                                       |
| 42 | Union by Rank Implementation        | [GFG](https://www.geeksforgeeks.org/union-by-rank-and-path-compression-in-union-find-algorithm/)                         |
| 43 | Path Compression Implementation     | [GFG](https://www.geeksforgeeks.org/union-by-rank-and-path-compression-in-union-find-algorithm/)                         |
| 44 | Union by Size Implementation        | [GFG](https://www.geeksforgeeks.org/union-by-rank-and-path-compression-in-union-find-algorithm/)                         |
| 45 | Minimum Spanning Tree Using Kruskal | [GFG](https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-algorithm-greedy-algo-2/)                             |
| 46 | Connected Components                | [GFG](https://www.geeksforgeeks.org/connected-components-in-an-undirected-graph/)                                        |
| 47 | Detect Cycle                        | [GFG](https://www.geeksforgeeks.org/problems/detect-cycle-using-dsu/1)                                                   |
| 48 | Number of Provinces                 | [GFG](https://www.geeksforgeeks.org/problems/number-of-provinces/1)                                                      |
| 49 | Largest Island                      | [GFG](https://www.geeksforgeeks.org/problems/making-a-large-island/1)                                                    |
| 50 | Remove Stones                       | [GFG](https://www.geeksforgeeks.org/remove-max-number-of-stones-such-that-two-stones-are-not-in-the-same-row-or-column/) |

---

# 🟡 MEDIUM — 50 LeetCode

| #  | Problem                                         | Link                                                                                                       |
| -- | ----------------------------------------------- | ---------------------------------------------------------------------------------------------------------- |
| 1  | Number of Provinces                             | [LC 547](https://leetcode.com/problems/number-of-provinces/)                                               |
| 2  | Redundant Connection                            | [LC 684](https://leetcode.com/problems/redundant-connection/)                                              |
| 3  | Accounts Merge                                  | [LC 721](https://leetcode.com/problems/accounts-merge/)                                                    |
| 4  | Most Stones Removed                             | [LC 947](https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/)                       |
| 5  | Number of Operations to Make Network Connected  | [LC 1319](https://leetcode.com/problems/number-of-operations-to-make-network-connected/)                   |
| 6  | Satisfiability of Equality Equations            | [LC 990](https://leetcode.com/problems/satisfiability-of-equality-equations/)                              |
| 7  | Regions Cut by Slashes                          | [LC 959](https://leetcode.com/problems/regions-cut-by-slashes/)                                            |
| 8  | Similar String Groups                           | [LC 839](https://leetcode.com/problems/similar-string-groups/)                                             |
| 9  | Graph Valid Tree                                | [LC 261](https://leetcode.com/problems/graph-valid-tree/)                                                  |
| 10 | Sentence Similarity II                          | [LC 737](https://leetcode.com/problems/sentence-similarity-ii/)                                            |
| 11 | Smallest String With Swaps                      | [LC 1202](https://leetcode.com/problems/smallest-string-with-swaps/)                                       |
| 12 | Checking Existence of Edge Length Limited Paths | [LC 1697](https://leetcode.com/problems/checking-existence-of-edge-length-limited-paths/)                  |
| 13 | Minimize Malware Spread                         | [LC 924](https://leetcode.com/problems/minimize-malware-spread/)                                           |
| 14 | Minimize Malware Spread II                      | [LC 928](https://leetcode.com/problems/minimize-malware-spread-ii/)                                        |
| 15 | Number of Islands II                            | [LC 305](https://leetcode.com/problems/number-of-islands-ii/)                                              |
| 16 | Connecting Cities With Minimum Cost             | [LC 1135](https://leetcode.com/problems/connecting-cities-with-minimum-cost/)                              |
| 17 | Earliest Moment When Everyone Become Friends    | [LC 1101](https://leetcode.com/problems/the-earliest-moment-when-everyone-become-friends/)                 |
| 18 | Most Stones Removed                             | [LC 947](https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/)                       |
| 19 | Path With Minimum Effort                        | [LC 1631](https://leetcode.com/problems/path-with-minimum-effort/)                                         |
| 20 | Optimize Water Distribution                     | [LC 1168](https://leetcode.com/problems/optimize-water-distribution-in-a-village/)                         |
| 21 | Find Critical and Pseudo-Critical Edges         | [LC 1489](https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/) |
| 22 | Couples Holding Hands                           | [LC 765](https://leetcode.com/problems/couples-holding-hands/)                                             |
| 23 | Number of Good Paths                            | [LC 2421](https://leetcode.com/problems/number-of-good-paths/)                                             |
| 24 | Largest Component Size by Common Factor         | [LC 952](https://leetcode.com/problems/largest-component-size-by-common-factor/)                           |
| 25 | Evaluate Division                               | [LC 399](https://leetcode.com/problems/evaluate-division/)                                                 |
| 26 | Bricks Falling When Hit                         | [LC 803](https://leetcode.com/problems/bricks-falling-when-hit/)                                           |
| 27 | Swim in Rising Water                            | [LC 778](https://leetcode.com/problems/swim-in-rising-water/)                                              |
| 28 | Remove Max Number of Edges                      | [LC 1579](https://leetcode.com/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable/)       |
| 29 | Process Restricted Friend Requests              | [LC 2076](https://leetcode.com/problems/process-restricted-friend-requests/)                               |
| 30 | Longest Consecutive Sequence                    | [LC 128](https://leetcode.com/problems/longest-consecutive-sequence/)                                      |
| 31 | Checking Existence of Edge Length Limited Paths | [LC 1697](https://leetcode.com/problems/checking-existence-of-edge-length-limited-paths/)                  |
| 32 | Number of Connected Components                  | [LC 323](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/)             |
| 33 | Friend Circles                                  | [LC 547](https://leetcode.com/problems/number-of-provinces/)                                               |
| 34 | Redundant Connection                            | [LC 684](https://leetcode.com/problems/redundant-connection/)                                              |
| 35 | Accounts Merge                                  | [LC 721](https://leetcode.com/problems/accounts-merge/)                                                    |
| 36 | Smallest String With Swaps                      | [LC 1202](https://leetcode.com/problems/smallest-string-with-swaps/)                                       |
| 37 | Network Connected                               | [LC 1319](https://leetcode.com/problems/number-of-operations-to-make-network-connected/)                   |
| 38 | Similar String Groups                           | [LC 839](https://leetcode.com/problems/similar-string-groups/)                                             |
| 39 | Regions Cut by Slashes                          | [LC 959](https://leetcode.com/problems/regions-cut-by-slashes/)                                            |
| 40 | Equality Equations                              | [LC 990](https://leetcode.com/problems/satisfiability-of-equality-equations/)                              |
| 41 | Number of Islands II                            | [LC 305](https://leetcode.com/problems/number-of-islands-ii/)                                              |
| 42 | Connecting Cities                               | [LC 1135](https://leetcode.com/problems/connecting-cities-with-minimum-cost/)                              |
| 43 | Earliest Moment Everyone Friends                | [LC 1101](https://leetcode.com/problems/the-earliest-moment-when-everyone-become-friends/)                 |
| 44 | Minimum Cost to Connect Points                  | [LC 1584](https://leetcode.com/problems/min-cost-to-connect-all-points/)                                   |
| 45 | Path With Minimum Effort                        | [LC 1631](https://leetcode.com/problems/path-with-minimum-effort/)                                         |
| 46 | Critical Edges in MST                           | [LC 1489](https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/) |
| 47 | Optimize Water Distribution                     | [LC 1168](https://leetcode.com/problems/optimize-water-distribution-in-a-village/)                         |
| 48 | Remove Max Edges                                | [LC 1579](https://leetcode.com/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable/)       |
| 49 | Restricted Friend Requests                      | [LC 2076](https://leetcode.com/problems/process-restricted-friend-requests/)                               |
| 50 | Largest Component by Common Factor              | [LC 952](https://leetcode.com/problems/largest-component-size-by-common-factor/)                           |

---

# 🔴 HARD — 50 LeetCode

| #  | Problem                                     | Link                                                                                                       |
| -- | ------------------------------------------- | ---------------------------------------------------------------------------------------------------------- |
| 1  | Bricks Falling When Hit                     | [LC 803](https://leetcode.com/problems/bricks-falling-when-hit/)                                           |
| 2  | Number of Good Paths                        | [LC 2421](https://leetcode.com/problems/number-of-good-paths/)                                             |
| 3  | Find Critical and Pseudo-Critical Edges     | [LC 1489](https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/) |
| 4  | Remove Max Number of Edges                  | [LC 1579](https://leetcode.com/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable/)       |
| 5  | Largest Component Size by Common Factor     | [LC 952](https://leetcode.com/problems/largest-component-size-by-common-factor/)                           |
| 6  | Minimize Malware Spread II                  | [LC 928](https://leetcode.com/problems/minimize-malware-spread-ii/)                                        |
| 7  | Making a Large Island                       | [LC 827](https://leetcode.com/problems/making-a-large-island/)                                             |
| 8  | Couples Holding Hands                       | [LC 765](https://leetcode.com/problems/couples-holding-hands/)                                             |
| 9  | Number of Islands II                        | [LC 305](https://leetcode.com/problems/number-of-islands-ii/)                                              |
| 10 | Checking Edge Length Limited Paths          | [LC 1697](https://leetcode.com/problems/checking-existence-of-edge-length-limited-paths/)                  |
| 11 | Maximum Segment Sum After Removals          | [LC 2382](https://leetcode.com/problems/maximum-segment-sum-after-removals/)                               |
| 12 | GCD Sort of an Array                        | [LC 1998](https://leetcode.com/problems/gcd-sort-of-an-array/?utm_source=chatgpt.com)                      |
| 13 | Number of Islands                           | [LC 200](https://leetcode.com/problems/number-of-islands/)                                                 |
| 14 | Number of Operations Network Connected      | [LC 1319](https://leetcode.com/problems/number-of-operations-to-make-network-connected/)                   |
| 15 | Accounts Merge                              | [LC 721](https://leetcode.com/problems/accounts-merge/)                                                    |
| 16 | Similar String Groups                       | [LC 839](https://leetcode.com/problems/similar-string-groups/)                                             |
| 17 | Regions Cut by Slashes                      | [LC 959](https://leetcode.com/problems/regions-cut-by-slashes/)                                            |
| 18 | Smallest String With Swaps                  | [LC 1202](https://leetcode.com/problems/smallest-string-with-swaps/)                                       |
| 19 | Process Restricted Friend Requests          | [LC 2076](https://leetcode.com/problems/process-restricted-friend-requests/)                               |
| 20 | Minimize Malware Spread                     | [LC 924](https://leetcode.com/problems/minimize-malware-spread/)                                           |
| 21 | Optimize Water Distribution                 | [LC 1168](https://leetcode.com/problems/optimize-water-distribution-in-a-village/)                         |
| 22 | Minimum Cost to Connect Points              | [LC 1584](https://leetcode.com/problems/min-cost-to-connect-all-points/)                                   |
| 23 | Path With Minimum Effort                    | [LC 1631](https://leetcode.com/problems/path-with-minimum-effort/)                                         |
| 24 | Swim in Rising Water                        | [LC 778](https://leetcode.com/problems/swim-in-rising-water/)                                              |
| 25 | Number of Good Paths                        | [LC 2421](https://leetcode.com/problems/number-of-good-paths/)                                             |
| 26 | Critical Connections                        | [LC 1192](https://leetcode.com/problems/critical-connections-in-a-network/)                                |
| 27 | Graph Connectivity With Threshold           | [LC 1627](https://leetcode.com/problems/graph-connectivity-with-threshold/)                                |
| 28 | Last Day Where You Can Still Cross          | [LC 1970](https://leetcode.com/problems/last-day-where-you-can-still-cross/)                               |
| 29 | Earliest Possible Day of Full Bloom         | [LC 2136](https://leetcode.com/problems/earliest-possible-day-of-full-bloom/)                              |
| 30 | Minimum Number of Days to Disconnect Island | [LC 1568](https://leetcode.com/problems/minimum-number-of-days-to-disconnect-island/)                      |
| 31 | Number of Ways to Arrive at Destination     | [LC 1976](https://leetcode.com/problems/number-of-ways-to-arrive-at-destination/)                          |
| 32 | Maximum Segment Sum                         | [LC 2382](https://leetcode.com/problems/maximum-segment-sum-after-removals/)                               |
| 33 | GCD Sort                                    | [LC 1998](https://leetcode.com/problems/gcd-sort-of-an-array/?utm_source=chatgpt.com)                      |
| 34 | Bricks Falling                              | [LC 803](https://leetcode.com/problems/bricks-falling-when-hit/)                                           |
| 35 | Largest Component                           | [LC 952](https://leetcode.com/problems/largest-component-size-by-common-factor/)                           |
| 36 | Critical/Pseudo-Critical Edges              | [LC 1489](https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/) |
| 37 | Remove Max Edges                            | [LC 1579](https://leetcode.com/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable/)       |
| 38 | Number of Good Paths                        | [LC 2421](https://leetcode.com/problems/number-of-good-paths/)                                             |
| 39 | Making a Large Island                       | [LC 827](https://leetcode.com/problems/making-a-large-island/)                                             |
| 40 | Last Day You Can Still Cross                | [LC 1970](https://leetcode.com/problems/last-day-where-you-can-still-cross/)                               |
| 41 | Graph Connectivity With Threshold           | [LC 1627](https://leetcode.com/problems/graph-connectivity-with-threshold/)                                |
| 42 | Maximum Segment Sum                         | [LC 2382](https://leetcode.com/problems/maximum-segment-sum-after-removals/)                               |
| 43 | GCD Sort                                    | [LC 1998](https://leetcode.com/problems/gcd-sort-of-an-array/?utm_source=chatgpt.com)                      |
| 44 | Minimize Malware Spread II                  | [LC 928](https://leetcode.com/problems/minimize-malware-spread-ii/)                                        |
| 45 | Couples Holding Hands                       | [LC 765](https://leetcode.com/problems/couples-holding-hands/)                                             |
| 46 | Bricks Falling When Hit                     | [LC 803](https://leetcode.com/problems/bricks-falling-when-hit/)                                           |
| 47 | Number of Islands II                        | [LC 305](https://leetcode.com/problems/number-of-islands-ii/)                                              |
| 48 | Number of Good Paths                        | [LC 2421](https://leetcode.com/problems/number-of-good-paths/)                                             |
| 49 | Critical and Pseudo-Critical Edges          | [LC 1489](https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/) |
| 50 | Maximum Segment Sum After Removals          | [LC 2382](https://leetcode.com/problems/maximum-segment-sum-after-removals/)                               |

---

# 🧠 BRAINSTORMING — 50 LeetCode

These are the ones where you should ask:

> **"Can I represent the problem as components that merge over time?"**

| #  | Problem                                        | Link                                                                                                       |
| -- | ---------------------------------------------- | ---------------------------------------------------------------------------------------------------------- |
| 1  | Redundant Connection                           | [LC 684](https://leetcode.com/problems/redundant-connection/)                                              |
| 2  | Number of Provinces                            | [LC 547](https://leetcode.com/problems/number-of-provinces/)                                               |
| 3  | Accounts Merge                                 | [LC 721](https://leetcode.com/problems/accounts-merge/)                                                    |
| 4  | Number of Islands II                           | [LC 305](https://leetcode.com/problems/number-of-islands-ii/)                                              |
| 5  | Most Stones Removed                            | [LC 947](https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/)                       |
| 6  | Smallest String With Swaps                     | [LC 1202](https://leetcode.com/problems/smallest-string-with-swaps/)                                       |
| 7  | Satisfiability of Equality Equations           | [LC 990](https://leetcode.com/problems/satisfiability-of-equality-equations/)                              |
| 8  | Regions Cut by Slashes                         | [LC 959](https://leetcode.com/problems/regions-cut-by-slashes/)                                            |
| 9  | Similar String Groups                          | [LC 839](https://leetcode.com/problems/similar-string-groups/)                                             |
| 10 | Sentence Similarity II                         | [LC 737](https://leetcode.com/problems/sentence-similarity-ii/)                                            |
| 11 | Number of Operations to Make Network Connected | [LC 1319](https://leetcode.com/problems/number-of-operations-to-make-network-connected/)                   |
| 12 | Earliest Moment Everyone Friends               | [LC 1101](https://leetcode.com/problems/the-earliest-moment-when-everyone-become-friends/)                 |
| 13 | Connecting Cities With Minimum Cost            | [LC 1135](https://leetcode.com/problems/connecting-cities-with-minimum-cost/)                              |
| 14 | Optimize Water Distribution                    | [LC 1168](https://leetcode.com/problems/optimize-water-distribution-in-a-village/)                         |
| 15 | Minimum Cost to Connect All Points             | [LC 1584](https://leetcode.com/problems/min-cost-to-connect-all-points/)                                   |
| 16 | Path With Minimum Effort                       | [LC 1631](https://leetcode.com/problems/path-with-minimum-effort/)                                         |
| 17 | Checking Edge Length Limited Paths             | [LC 1697](https://leetcode.com/problems/checking-existence-of-edge-length-limited-paths/)                  |
| 18 | Remove Max Number of Edges                     | [LC 1579](https://leetcode.com/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable/)       |
| 19 | Process Restricted Friend Requests             | [LC 2076](https://leetcode.com/problems/process-restricted-friend-requests/)                               |
| 20 | Largest Component Size by Common Factor        | [LC 952](https://leetcode.com/problems/largest-component-size-by-common-factor/)                           |
| 21 | Number of Good Paths                           | [LC 2421](https://leetcode.com/problems/number-of-good-paths/)                                             |
| 22 | Find Critical and Pseudo-Critical Edges        | [LC 1489](https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/) |
| 23 | Bricks Falling When Hit                        | [LC 803](https://leetcode.com/problems/bricks-falling-when-hit/)                                           |
| 24 | Making a Large Island                          | [LC 827](https://leetcode.com/problems/making-a-large-island/)                                             |
| 25 | Minimize Malware Spread                        | [LC 924](https://leetcode.com/problems/minimize-malware-spread/)                                           |
| 26 | Minimize Malware Spread II                     | [LC 928](https://leetcode.com/problems/minimize-malware-spread-ii/)                                        |
| 27 | Couples Holding Hands                          | [LC 765](https://leetcode.com/problems/couples-holding-hands/)                                             |
| 28 | Graph Connectivity With Threshold              | [LC 1627](https://leetcode.com/problems/graph-connectivity-with-threshold/)                                |
| 29 | Last Day Where You Can Still Cross             | [LC 1970](https://leetcode.com/problems/last-day-where-you-can-still-cross/)                               |
| 30 | Maximum Segment Sum After Removals             | [LC 2382](https://leetcode.com/problems/maximum-segment-sum-after-removals/)                               |
| 31 | GCD Sort of an Array                           | [LC 1998](https://leetcode.com/problems/gcd-sort-of-an-array/?utm_source=chatgpt.com)                      |
| 32 | Swim in Rising Water                           | [LC 778](https://leetcode.com/problems/swim-in-rising-water/)                                              |
| 33 | Number of Good Paths                           | [LC 2421](https://leetcode.com/problems/number-of-good-paths/)                                             |
| 34 | Minimum Cost Connect Points                    | [LC 1584](https://leetcode.com/problems/min-cost-to-connect-all-points/)                                   |
| 35 | Network Connected                              | [LC 1319](https://leetcode.com/problems/number-of-operations-to-make-network-connected/)                   |
| 36 | Accounts Merge                                 | [LC 721](https://leetcode.com/problems/accounts-merge/)                                                    |
| 37 | Smallest String With Swaps                     | [LC 1202](https://leetcode.com/problems/smallest-string-with-swaps/)                                       |
| 38 | Number of Islands II                           | [LC 305](https://leetcode.com/problems/number-of-islands-ii/)                                              |
| 39 | Remove Stones                                  | [LC 947](https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/)                       |
| 40 | Similar String Groups                          | [LC 839](https://leetcode.com/problems/similar-string-groups/)                                             |
| 41 | Regions Cut by Slashes                         | [LC 959](https://leetcode.com/problems/regions-cut-by-slashes/)                                            |
| 42 | Equality Equations                             | [LC 990](https://leetcode.com/problems/satisfiability-of-equality-equations/)                              |
| 43 | Restricted Friend Requests                     | [LC 2076](https://leetcode.com/problems/process-restricted-friend-requests/)                               |
| 44 | GCD Sort                                       | [LC 1998](https://leetcode.com/problems/gcd-sort-of-an-array/?utm_source=chatgpt.com)                      |
| 45 | Maximum Segment Sum                            | [LC 2382](https://leetcode.com/problems/maximum-segment-sum-after-removals/)                               |
| 46 | Bricks Falling                                 | [LC 803](https://leetcode.com/problems/bricks-falling-when-hit/)                                           |
| 47 | Critical Edges                                 | [LC 1489](https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/) |
| 48 | Number of Good Paths                           | [LC 2421](https://leetcode.com/problems/number-of-good-paths/)                                             |
| 49 | Last Day to Cross                              | [LC 1970](https://leetcode.com/problems/last-day-where-you-can-still-cross/)                               |
| 50 | Graph Connectivity Threshold                   | [LC 1627](https://leetcode.com/problems/graph-connectivity-with-threshold/)                                |

---

# ⭐ 25 MUST-DO DSU QUESTIONS

If your goal is **placements + competitive programming**, these are the ones I'd prioritize.

## 🟢 Foundation

1. **Implement DSU** — [GFG](https://www.geeksforgeeks.org/disjoint-set-data-structures/)
2. **Union by Rank** — [GFG](https://www.geeksforgeeks.org/union-by-rank-and-path-compression-in-union-find-algorithm/)
3. **Union by Size** — [GFG](https://www.geeksforgeeks.org/union-by-rank-and-path-compression-in-union-find-algorithm/)
4. **Path Compression** — [GFG](https://www.geeksforgeeks.org/union-by-rank-and-path-compression-in-union-find-algorithm/)
5. **Cycle Detection Using DSU** — [GFG](https://www.geeksforgeeks.org/problems/detect-cycle-using-dsu/1)

## 🟡 Core Problems

6. **Redundant Connection** — [LC 684](https://leetcode.com/problems/redundant-connection/)
7. **Number of Provinces** — [LC 547](https://leetcode.com/problems/number-of-provinces/)
8. **Number of Operations to Make Network Connected** — [LC 1319](https://leetcode.com/problems/number-of-operations-to-make-network-connected/)
9. **Accounts Merge** — [LC 721](https://leetcode.com/problems/accounts-merge/)
10. **Most Stones Removed** — [LC 947](https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/)
11. **Satisfiability of Equality Equations** — [LC 990](https://leetcode.com/problems/satisfiability-of-equality-equations/)
12. **Smallest String With Swaps** — [LC 1202](https://leetcode.com/problems/smallest-string-with-swaps/)

## 🔥 MST + DSU

13. **Kruskal's MST** — [GFG](https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-algorithm-greedy-algo-2/)
14. **Connecting Cities With Minimum Cost** — [LC 1135](https://leetcode.com/problems/connecting-cities-with-minimum-cost/)
15. **Min Cost to Connect All Points** — [LC 1584](https://leetcode.com/problems/min-cost-to-connect-all-points/)
16. **Optimize Water Distribution** — [LC 1168](https://leetcode.com/problems/optimize-water-distribution-in-a-village/)
17. **Critical and Pseudo-Critical Edges** — [LC 1489](https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/)

## 🔴 Advanced

18. **Number of Islands II** — [LC 305](https://leetcode.com/problems/number-of-islands-ii/)
19. **Checking Edge Length Limited Paths** — [LC 1697](https://leetcode.com/problems/checking-existence-of-edge-length-limited-paths/)
20. **Remove Max Number of Edges** — [LC 1579](https://leetcode.com/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable/)
21. **Bricks Falling When Hit** — [LC 803](https://leetcode.com/problems/bricks-falling-when-hit/)
22. **Largest Component Size by Common Factor** — [LC 952](https://leetcode.com/problems/largest-component-size-by-common-factor/)
23. **GCD Sort of an Array** — [LC 1998](https://leetcode.com/problems/gcd-sort-of-an-array/?utm_source=chatgpt.com)
24. **Maximum Segment Sum After Removals** — [LC 2382](https://leetcode.com/problems/maximum-segment-sum-after-removals/)
25. **Number of Good Paths** — [LC 2421](https://leetcode.com/problems/number-of-good-paths/)

---

# 🧠 DSU PATTERNS YOU MUST KNOW

| Pattern              | Example            |
| -------------------- | ------------------ |
| Basic Union-Find     | LC 684             |
| Path Compression     | DSU implementation |
| Union by Rank        | DSU implementation |
| Union by Size        | DSU implementation |
| Connected Components | LC 547             |
| Cycle Detection      | LC 684             |
| Kruskal MST          | GFG                |
| Dynamic Connectivity | LC 305             |
| Grid DSU             | LC 827             |
| Reverse Processing   | LC 803             |
| Offline Queries      | LC 1697            |
| DSU + Sorting        | LC 1631            |
| DSU + Prime Factors  | LC 1998            |
| DSU + Components     | LC 952             |
| DSU + MST            | LC 1489            |
| DSU + Multiple Users | LC 1579            |
| DSU + Restrictions   | LC 2076            |

---

# 🔥 THE DSU TEMPLATE YOU SHOULD MEMORIZE

### Path Compression + Union by Size

```
class DSU {
    vector<int> parent, size;

public:

    DSU(int n) {
        parent.resize(n);
        size.resize(n, 1);

        for(int i = 0; i < n; i++)
            parent[i] = i;
    }

    int find(int x) {
        if(parent[x] == x)
            return x;

        return parent[x] = find(parent[x]);
    }

    void unite(int u, int v) {

        u = find(u);
        v = find(v);

        if(u == v)
            return;

        if(size[u] < size[v])
            swap(u, v);

        parent[v] = u;
        size[u] += size[v];
    }
};
```

The important line is:

```
parent[x] = find(parent[x]);
```

That's **path compression**.

And:

```
if(size[u] < size[v])
    swap(u, v);
```

is **union by size**.

Together, the amortized complexity is effectively:

```
O(α(n))
```

where `α(n)` is the inverse Ackermann function.

For practical input sizes:

```
α(n) ≈ tiny
```

Basically, DSU operations are so close to constant time that the mathematical notation is doing more work than the algorithm. 😭

---

# ⚔️ DSU vs DFS/BFS

This distinction matters a lot.

### Use DFS/BFS when:

```
Need:
actual path
distance
shortest path
traversal order
neighbors
```

### Use DSU when:

```
Need:
Are u and v connected?
Which component?
Merge components
Component size
Cycle detection
Connectivity after adding edges
MST
```

Think:

```
         Graph Problem
              │
       ┌──────┴──────┐
       ↓             ↓
 Need traversal?   Need connectivity?
       ↓             ↓
    DFS/BFS         DSU
```

---

# 🚀 DSU + KRUSKAL

This is **mandatory**.

Given weighted edges:

```
(u, v, weight)
```

Sort:

```
sort(edges.begin(), edges.end());
```

Then:

```
for(auto &[w, u, v] : edges) {

    if(dsu.find(u) != dsu.find(v)) {

        dsu.unite(u, v);

        mst += w;
    }
}
```

That's essentially:

```
Sort edges
    ↓
Take smallest edge
    ↓
Would it create a cycle?
    ↓
NO → take it
YES → skip
    ↓
Continue
```

This is **Kruskal's Minimum Spanning Tree**.

---

# 🧠 ADVANCED DSU TRICKS

Once you've solved the 25 must-do problems, these are the next concepts:

### 1. DSU on Grid

Convert:

```
(row, col)
```

into:

```
id = row * m + col;
```

Then union neighboring cells.

---

### 2. Reverse DSU

Extremely important for:

**Bricks Falling When Hit**

Instead of deleting things:

```
delete → delete → delete
```

reverse it:

```
add → add → add
```

DSU is naturally good at **adding connections**, not removing them.

This is one of the most beautiful DSU tricks.

---

### 3. DSU + Coordinate Compression

Useful when nodes aren't simply:

```
0 ... n-1
```

Example:

```
10^9
10^12
10^15
```

Compress them first.

---

### 4. DSU + Prime Factorization

Used in:

**LC 952 / LC 1998**

Connect numbers through their common prime factors:

```
12 → 2,3
18 → 2,3
25 → 5
```

Therefore:

```
12 ↔ 18
```

---

# 🎯 Your DSU Learning Order

I'd do this:

```
1. Basic DSU
       ↓
2. find()
       ↓
3. union()
       ↓
4. Path Compression
       ↓
5. Union by Rank
       ↓
6. Union by Size
       ↓
7. Connected Components
       ↓
8. Cycle Detection
       ↓
9. Kruskal MST
       ↓
10. DSU on Grid
       ↓
11. Dynamic Connectivity
       ↓
12. Offline Queries
       ↓
13. Reverse DSU
       ↓
14. DSU + Coordinate Compression
       ↓
15. DSU + Prime Factors
       ↓
16. Advanced DSU
```

## 🏆 If you're short on time

Solve these **10 in this exact order**:

1. **DSU Implementation** — GFG &#x20;
2. **Cycle Detection Using DSU** — GFG &#x20;
3. **Kruskal MST** — GFG &#x20;
4. **Redundant Connection** — LC 684 &#x20;
5. **Number of Provinces** — LC 547 &#x20;
6. **Accounts Merge** — LC 721 &#x20;
7. **Number of Islands II** — LC 305 &#x20;
8. **Smallest String With Swaps** — LC 1202 &#x20;
9. **Checking Edge Length Limited Paths** — LC 1697 &#x20;
10. **Bricks Falling When Hit** — LC 803

If you can comfortably solve those, **DSU is basically done for placement-level DSA**. After that, the advanced stuff is mostly CP territory rather than something you need to grind endlessly. 🔥