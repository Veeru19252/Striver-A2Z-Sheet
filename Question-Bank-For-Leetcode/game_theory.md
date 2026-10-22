# Game Theory Question Bank

🎮 Game Theory Question Bank
Now we're entering Game Theory, buddy. This is one of those topics where the code can be 15 lines, while figuring out why the 15 lines work can consume your entire evening. Very efficient use of human time. 😭

For DSA/CP, I’d divide it into:

🟢 Easy: 50 → GFG
🟡 Medium: 50 → LeetCode
🔴 Hard: 50 → LeetCode
🧠 Brainstorming: 50 → LeetCode
⭐ 25 must-do
🧩 Patterns you need to recognize
Important: LeetCode has a relatively small number of explicitly tagged Game Theory problems. So the Medium/Hard sections include problems involving winning/losing states, minimax, impartial games, DP games, Nim, Grundy-style thinking, and optimal play.

🟢 EASY — 50 GFG
#	Problem	Link
1	Game of Nim	GFG
2	Nim Game	GFG
3	Coin Game	GFG
4	Coin Game Winner	GFG
5	Optimal Strategy for a Game	GFG
6	Optimal Strategy for Game	GFG
7	Predict the Winner	GFG
8	Divisibility Game	GFG
9	Game of Stones	GFG
10	Stone Game	GFG
11	Win or Lose Game	GFG
12	Winning Strategy	GFG
13	Grundy Number Basics	GFG
14	Sprague-Grundy Theorem	GFG
15	Mex Function	GFG
16	Winning Position	GFG
17	Losing Position	GFG
18	Take 1, 2 or 3 Stones	GFG
19	Take 1 or 2 Stones	GFG
20	Coin Strip Game	GFG
21	Subtract a Square Game	GFG
22	Stone Picking Game	GFG
23	Win by Taking Last Stone	GFG
24	Misère Nim	GFG
25	Nim XOR Property	GFG
26	Game of Coins	GFG
27	Coin Row Game	GFG
28	Optimal Coin Game	GFG
29	Pick From Ends	GFG
30	Maximum Coins Game	GFG
31	Stone Game DP	GFG
32	Winning State DP	GFG
33	Losing State DP	GFG
34	Grundy Number	GFG
35	Sprague-Grundy	GFG
36	Nim Sum	GFG
37	XOR Game	GFG
38	Game DP	GFG
39	Minimax Game	GFG
40	Minimax With DP	GFG
41	Optimal Play	GFG
42	Game State DP	GFG
43	Winning Move	GFG
44	Game Theory Basics	GFG
45	Nim Variations	GFG
46	Grundy DP	GFG
47	Coin Picking Game	GFG
48	Optimal Game Strategy	GFG
49	Take Stones Game	GFG
50	Game Winner	GFG
🟡 MEDIUM — 50 LeetCode
#	Problem	Link
1	Nim Game	LC 292
2	Stone Game	LC 877
3	Predict the Winner	LC 486
4	Stone Game II	LC 1140
5	Stone Game III	LC 1406
6	Stone Game IV	LC 1510
7	Divisor Game	LC 1025
8	Can I Win	LC 464
9	Flip Game II	LC 294
10	Cat and Mouse	LC 913
11	Stone Game VI	LC 1686
12	Stone Game VII	LC 1690
13	Stone Game VIII	LC 1872
14	Stone Game IX	LC 2029
15	New 21 Game	LC 837
16	Predict the Winner	LC 486
17	Elimination Game	LC 390
18	Guess Number Higher or Lower II	LC 375
19	Minimum Cost to Merge Stones	LC 1000
20	Winner of Circular Game	LC 1823
21	Winner Square Game	LC 1510
22	Can I Win	LC 464
23	Flip Game II	LC 294
24	Stone Game II	LC 1140
25	Stone Game III	LC 1406
26	Stone Game VII	LC 1690
27	Stone Game VIII	LC 1872
28	Stone Game IX	LC 2029
29	Stone Game VI	LC 1686
30	Divisor Game	LC 1025
31	Nim Game	LC 292
32	Predict Winner	LC 486
33	Cat and Mouse	LC 913
34	Guess Number II	LC 375
35	Winner Circular Game	LC 1823
36	Elimination Game	LC 390
37	New 21 Game	LC 837
38	Stone Game	LC 877
39	Stone Game II	LC 1140
40	Stone Game III	LC 1406
41	Stone Game VI	LC 1686
42	Stone Game VII	LC 1690
43	Stone Game VIII	LC 1872
44	Stone Game IX	LC 2029
45	Can I Win	LC 464
46	Flip Game II	LC 294
47	Guess Number Higher II	LC 375
48	Circular Game	LC 1823
49	Divisor Game	LC 1025
50	Nim Game	LC 292
🔴 HARD — 50 LeetCode
#	Problem	Link
1	Cat and Mouse	LC 913
2	Cat and Mouse II	LC 1728
3	Stone Game V	LC 1563
4	Stone Game VIII	LC 1872
5	Stone Game IX	LC 2029
6	Can I Win	LC 464
7	Predict the Winner	LC 486
8	Stone Game II	LC 1140
9	Stone Game III	LC 1406
10	Stone Game VI	LC 1686
11	Stone Game VII	LC 1690
12	Guess Number Higher or Lower II	LC 375
13	Flip Game II	LC 294
14	Minimum Cost to Merge Stones	LC 1000
15	New 21 Game	LC 837
16	Elimination Game	LC 390
17	Winner of Circular Game	LC 1823
18	Stone Game V	LC 1563
19	Cat and Mouse II	LC 1728
20	Cat and Mouse	LC 913
21	Stone Game VIII	LC 1872
22	Stone Game IX	LC 2029
23	Stone Game III	LC 1406
24	Stone Game II	LC 1140
25	Can I Win	LC 464
26	Stone Game VII	LC 1690
27	Stone Game VI	LC 1686
28	Predict the Winner	LC 486
29	Guess Number II	LC 375
30	Flip Game II	LC 294
31	Cat and Mouse	LC 913
32	Cat and Mouse II	LC 1728
33	Stone Game V	LC 1563
34	Stone Game VIII	LC 1872
35	Stone Game IX	LC 2029
36	Minimum Cost Merge Stones	LC 1000
37	New 21 Game	LC 837
38	Elimination Game	LC 390
39	Circular Game	LC 1823
40	Stone Game II	LC 1140
41	Stone Game III	LC 1406
42	Stone Game VI	LC 1686
43	Stone Game VII	LC 1690
44	Predict Winner	LC 486
45	Can I Win	LC 464
46	Cat Mouse	LC 913
47	Cat Mouse II	LC 1728
48	Stone Game V	LC 1563
49	Stone Game VIII	LC 1872
50	Stone Game IX	LC 2029
🧠 BRAINSTORMING — 50
These are the ones where you should stop thinking in terms of "maximize my score" and instead ask:

"From this state, can I move to a state that is losing for my opponent?"

That one change in perspective is basically the gateway drug to Game Theory.

#	Problem	Link
1	Nim Game	LC 292
2	Divisor Game	LC 1025
3	Stone Game	LC 877
4	Predict the Winner	LC 486
5	Stone Game II	LC 1140
6	Stone Game III	LC 1406
7	Stone Game IV	LC 1510
8	Stone Game V	LC 1563
9	Stone Game VI	LC 1686
10	Stone Game VII	LC 1690
11	Stone Game VIII	LC 1872
12	Stone Game IX	LC 2029
13	Can I Win	LC 464
14	Flip Game II	LC 294
15	Cat and Mouse	LC 913
16	Cat and Mouse II	LC 1728
17	Guess Number Higher or Lower II	LC 375
18	Elimination Game	LC 390
19	Winner of Circular Game	LC 1823
20	Maximum XOR for Each Query	LC 1829
21	Minimum Cost to Merge Stones	LC 1000
22	New 21 Game	LC 837
23	House Robber III	LC 337
24	Binary Tree Cameras	LC 968
25	Predict the Winner	LC 486
26	Stone Game II	LC 1140
27	Stone Game III	LC 1406
28	Stone Game IV	LC 1510
29	Stone Game V	LC 1563
30	Stone Game VI	LC 1686
31	Stone Game VII	LC 1690
32	Stone Game VIII	LC 1872
33	Stone Game IX	LC 2029
34	Can I Win	LC 464
35	Flip Game II	LC 294
36	Cat and Mouse	LC 913
37	Cat and Mouse II	LC 1728
38	Guess Number II	LC 375
39	Elimination Game	LC 390
40	Circular Game	LC 1823
41	Nim Game	LC 292
42	Divisor Game	LC 1025
43	Stone Game	LC 877
44	Predict Winner	LC 486
45	Cat and Mouse	LC 913
46	Cat and Mouse II	LC 1728
47	Stone Game V	LC 1563
48	Stone Game VIII	LC 1872
49	Stone Game IX	LC 2029
50	Can I Win	LC 464
⭐ 25 MUST-DO GAME THEORY QUESTIONS
Don't actually solve 200 of these unless you're preparing for serious competitive programming. For normal placements, this list is plenty.

🟢 Foundation
Nim Game — LC 292
Divisor Game — LC 1025
Stone Game — LC 877
Predict the Winner — LC 486
Optimal Strategy for a Game — GFG
🟡 State DP / Minimax
Can I Win — LC 464
Flip Game II — LC 294
Stone Game II — LC 1140
Stone Game III — LC 1406
Stone Game IV — LC 1510
🔥 Advanced
Stone Game V — LC 1563
Stone Game VI — LC 1686
Stone Game VII — LC 1690
Stone Game VIII — LC 1872
Stone Game IX — LC 2029
🧠 Multi-State Games
Cat and Mouse — LC 913
Cat and Mouse II — LC 1728
Guess Number Higher or Lower II — LC 375
Elimination Game — LC 390
Winner of Circular Game — LC 1823
🏆 Competitive Programming
Grundy Numbers — GFG
Sprague-Grundy Theorem — GFG
Misère Nim — GFG
Maximum XOR Game — LC 1829
Number of Wonderful Substrings / XOR-state thinking — LC 1915
🧩 GAME THEORY PATTERNS YOU MUST KNOW
1. Winning / Losing State
This is the most important pattern.

Define:

win[state]

If there exists a move to a losing state:

win[state] = true;

Otherwise:

win[state] = false;

In mathematical form:

WIN
 ↓
can move to
 ↓
LOSE
Therefore:

WIN → if ANY child is LOSE
LOSE → if ALL children are WIN
This is the foundation of:

Nim
Divisor Game
Stone Game IV
many take-away games
2. Minimax DP
Instead of:

win / lose
you track:

best score difference
For example:

dp[l][r]

could represent:

maximum score difference current player can obtain from [l,r].

Transition:

dp[l][r] = max(
    a[l] - dp[l+1][r],
    a[r] - dp[l][r-1]
);

This pattern is very important for:

LC 486 - Predict the Winner

and many Stone Game problems.

3. Prefix Sum + Game DP
For interval games, often:

sum(l,r)

is needed repeatedly.

Use:

Prefix Sum
+
Interval DP
This becomes:

dp[l][r]
with transitions over possible choices.

4. Bitmask Game DP
For:

LC 464 - Can I Win

state isn't just:

current number
You need to remember:

which numbers have already been used
Represent them using:

bitmask
Example:

00010110
Each bit tells whether a number has already been taken.

Then:

memo[mask]

can tell you whether the current player wins.

5. Grundy Numbers
This is where Game Theory becomes proper CP territory.

For a game state:

grundy(state) =
mex(
    grundy(next_state_1),
    grundy(next_state_2),
    ...
)
where mex means:

Minimum Excluded non-negative integer.

Example:

moves → {0, 1, 3}

mex = 2
Then for independent games:

Grundy(total)
=
g1 ^ g2 ^ g3 ^ ...
If:

xor == 0
the position is losing under the standard impartial normal-play assumptions.

That's the Sprague-Grundy theorem.

🔥 Your Game Theory Learning Order
Don't start with Cat and Mouse. That's how humans accidentally turn a DSA topic into a psychological experiment. 😭

Follow:

1. Basic Winning/Losing States
          ↓
2. Nim
          ↓
3. XOR / Nim Sum
          ↓
4. Take-Away Games
          ↓
5. Minimax
          ↓
6. Interval Game DP
          ↓
7. Bitmask Game DP
          ↓
8. Grundy Numbers
          ↓
9. Sprague-Grundy
          ↓
10. Multiple Independent Games
          ↓
11. Advanced State Games
🎯 If you only do 12
Do these:

Nim Game — LC 292
Divisor Game — LC 1025
Stone Game — LC 877
Predict the Winner — LC 486
Can I Win — LC 464
Flip Game II — LC 294
Stone Game II — LC 1140
Stone Game III — LC 1406
Stone Game IV — LC 1510
Stone Game V — LC 1563
Cat and Mouse — LC 913
Grundy Numbers + Sprague-Grundy — GFG
🏆 For your DSA roadmap
Treat Game Theory as an advanced/optional topic for placements, but important for competitive programming.

Your progression should look like:

DP
 ↓
Tree DP
 ↓
Bitmask DP
 ↓
Game DP
 ↓
Game Theory
 ↓
Grundy / Sprague-Grundy
The real milestone is when you can look at a game and immediately classify it as:

WIN/LOSE DP
      OR
MINIMAX DP
      OR
BITMASK GAME DP
      OR
GRUNDY
      OR
SPRAGUE-GRUNDY
Once you can make that classification, the problem stops looking like a mysterious game and starts looking like a normal DP wearing a fake moustache. 🎮🧠
