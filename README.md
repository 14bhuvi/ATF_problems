<H3>Q1) You are given N
 ladders of different lengths.You can select some or all of N
 ladders and combine them into a single ladder with length equal to sum of all ladders you combined.Find longest ladder that you can build with even length.
<br>INPUT
<br>First line contains integer N,representing number of ladders.
<br>Second line contains N
<br> integers representing length of each ladder.
<br>OUTPUT
<br>Print a single integer representing longest ladder you can build of even length.
<br>If you cannot build ladder of even length, then print "0".
<br>EXAMPLES
<br>Input
<br>4
<br>1 2 3 4
<br>Output
<br>10</H3>
<h3>Q2) <br>Akash is naughty playboy. But today, he got selected for ATF Camp and he is a super happy soul.
<br>There are exactly N days left before he will join ATF camp. Coincidently, he also has exactly N girlfriends. So, Akash plans to spend exactly one day with each of his girlfriends. You are jealous knowing about his plans, so to divert yourself, you focus on finding the number of ways Akash can plan his visits to his N girlfriends.
<br>Example: Lets say Akash has to visit 3 girlfriends: A, B, C on 3 days. There are exactly 6 ways he can plan his trip
<br>Day 1	Day 2	Day 3
<br>A	B	C
<br>A	C	B
<br>B	A	C
<br>B	C	A
<br>C	A	B
<br>C	B	A
<br>Input
First Line: Integer T denoting number of test cases.Each of Next T lines have one integer N, which denotes the number of days and the number of girlfriends Akash is planning to visit.Constraints
<br>1≤T≤10
<br>1≤N≤10
<br>Output
<br>For each test case, print the number of ways Akash can plan his trip as described in the problem statement.The answer to each test case must be printed in a new line. 
<br>Example
<br>Input
<br>5
<br>1
<br>2
<br>3
<br>4
<br>5
<br>Output
<br>1
<br>2
<br>6
<br>24
<br>120
</h3>
<h3>Q3) <br> You are an ATF student visiting a tree with N
 levels. Each level of the tree has a unique treehouse. You are given n
 starting levels x1,x2,…,xn
. If you start from level xi
, you can only visit levels that are multiples of xi
<br>Determine the total number of distinct levels you can visit across all starting levels.
<br>Input
<br>The first line contains two integers nand N
<br>(1≤n≤2×105,1≤N≤2×105)
<br> — the number of starting levels and the number of levels in the tree, respectively.
<br>The second line contains n
<br>integers x1,x2,…,xn
<br>(1≤xi≤N)
<br>— the starting levels.
<br>Output
<br>Output a single integer — the total number of distinct levels you can visit across all starting levels.
<br>Examples
<br>Input
<br>5 5
<br>2 4 2 2 3
<br>Output
<br>3
</h3>
<h3>Q4) <br>You are given a large barfi, which can be divided into n
 pieces, each weighing a1,a2,…,an
. You need to distribute these pieces among k
 people such that:
<br>Each person receives contiguous pieces of the barfi.
No piece is left undistributed.
Let wi
 be the total weight of the pieces received by the i
-th person. Define minShare as the minimum among the total weights each person receives, i.e., min(w1,w2,…,wk)
Your task is to determine the maximum possible value of minShare when distributing the barfi pieces optimally.
<br>Input
The first line contains two integers n
 and k
<br>(1≤k≤n≤105)
 — the number of pieces and the number of people.
The second line contains n
 integers a1,a2,…,an
<br>(1≤ai≤104)
 — the weights of the barfi pieces.
<br>Output
Output a single integer — the maximum possible value of minShare.
<br>examples
<br>Input
<br>5 2
<br>4 3 5 6 2
<br>Output
<br>8
<br>Input
<br>8 3
<br>6 2 876 221 123 43 33 21
<br>Output
<br>220
<br>Note
Here, the weights of the barfi pieces are [4,3,5,6,2]
 and k=2
. We need to divide the pieces between 2 people such that each person receives contiguous pieces, and we maximize the minimum total weight received by either person.
The possible distributions and their corresponding sums are:
<br>Person 1: [4]
, Person 2: [3,5,6,2]
 — sums: 4
 and 16S
<br>Person 1: [4,3]
, Person 2: [5,6,2]
 — sums: 7
 and 13
<br>Person 1: [4,3,5]
, Person 2: [6,2]
 — sums: 12
 and 8
<br>Person 1: [4,3,5,6]
, Person 2: [2]
 — sums: 18
 and 2
<br>Among all these possibilities, the configuration that maximizes the minimum share is [4,3,5]
 for Person 1 and [6,2]
 for Person 2, where the minimum total is 8
. Thus, the answer is 8</h3>
