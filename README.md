# knapsack_problem

cost: 5, 4, 7, 2, 6
value: 12, 3 , 10, 3 , 6

### 1. 01 knapsack problem, with capacity 13
0 0 0 0 0 12 12 12 12 12 12 12 12 12
0 0 0 0 3 12 12 12 12 15 15 15 15 15
0 0 0 0 3 12 12 12 12 15 15 15 22 22
0 0 3 3 3 12 12 15 15 15 15 18 22 22
0 0 3 3 3 12 12 15 15 15 15 18 22 22

### 2. complete knapsack problem, with capacity 13
0 0 0 0 0 12 12 12 12 12 24 24 24 24
0 0 0 0 3 12 12 12 12 15 24 24 24 24
0 0 0 0 3 12 12 12 12 15 24 24 24 24
0 0 3 3 6 12 12 15 15 18 24 24 27 27
0 0 3 3 6 12 12 15 15 18 24 24 27 27

### 3. Multiple knapsack problem, with capacity 13
### num: 1, 3, 2, 3, 1
0 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
3 -1 -1 -1 2 -1 -1 -1 1 -1 -1 -1 -1 -1
0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0

0 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
3 -1 -1 -1 2 -1 -1 -1 1 -1 -1 -1 -1 -1
2 -1 -1 -1 2 -1 -1 1 2 -1 -1 1 -1 -1
0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0

0 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
3 -1 -1 -1 2 -1 -1 -1 1 -1 -1 -1 -1 -1
2 -1 -1 -1 2 -1 -1 1 2 -1 -1 1 -1 -1
3 -1 2 -1 3 -1 2 3 3 -1 -1 3 -1 -1
0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0

0 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
3 -1 -1 -1 2 -1 -1 -1 1 -1 -1 -1 -1 -1
2 -1 -1 -1 2 -1 -1 1 2 -1 -1 1 -1 -1
3 -1 2 -1 3 -1 2 3 3 -1 -1 3 -1 -1
1 -1 1 -1 1 -1 1 1 1 -1 0 1 -1 -1
0 0 0 0 0 0 0 0 0 0 0 0 0 0

0 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
3 -1 -1 -1 2 -1 -1 -1 1 -1 -1 -1 -1 -1
2 -1 -1 -1 2 -1 -1 1 2 -1 -1 1 -1 -1
3 -1 2 -1 3 -1 2 3 3 -1 -1 3 -1 -1
1 -1 1 -1 1 -1 1 1 1 -1 0 1 -1 -1
0 -1 0 -1 0 -1 0 0 0 -1 0 0 -1 -1
