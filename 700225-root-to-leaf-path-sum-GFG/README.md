# [Root to Leaf Path Sum](https://www.geeksforgeeks.org/problems/root-to-leaf-path-sum/1)
## Easy
Given root of a binary tree and an integer target, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum. Return false if no such path can be found.&nbsp;Examples :Input: root = [1, 2, 3], target = 4
Output: true
Explanation: The root to leaf path sums are 1 + 2 = 3 and 1 + 3 = 4. Since, a path with sum 4 exists (1 -&gt; 3), the answer is true.Input: root = [1, 2, 3], target = 2
Output: false
Explanation: The root to leaf path sums are 1 + 2 = 3 and 1 + 3 = 4. Since, there is no path with sum 2, the answer is false.Input: root = [1, 2, 3, 4, 1], target = 4
Output: true
Explanation: The root to leaf path sums are 1 + 2 + 4 = 7, 1 + 2 + 1 = 4 and 1 + 3 = 4. Since, a path with sum 4 exists (1 -&gt; 3 and 1 -&gt; 2 -&gt; 1), the answer is true.