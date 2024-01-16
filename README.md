# Abhiraj Pratap Singh

---

# UPVOTE IT....

---

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->

- The goal of the function is to find the bitwise complement of a given integer n. The bitwise complement of a binary number is obtained by flipping each bit (changing 0s to 1s and vice versa).

---


![Screenshot (47).png](https://assets.leetcode.com/users/images/980aa465-2f81-4215-8f1e-75176f4ca268_1705421064.7329607.png)


---


# Approach
<!-- Describe your approach to solving the problem. -->

1. The code initializes a variable mask to 0. This variable will be used to create a bitmask with all bits set to 1 up to the most significant bit of the given number.
2. It also initializes a copy of the input number n as copyNum and another variable ans to store the final result.
3. There is a check for the edge case where n is 0. If n is 0, the function returns 1 because the bitwise complement of 0 is 1.
4. The code then enters a loop where it right shifts copyNum until it becomes 0. Meanwhile, it left shifts mask and sets the least significant bit to 1 in each iteration. This process creates a bitmask with all bits set to 1 up to the most significant bit of the original n.
5. After constructing the bitmask, the code negates the input number n using the bitwise NOT operator (~), effectively flipping all its bits.
6. Finally, the code applies the bitmask to the negated n using bitwise AND (&) and stores the result in ans. This step ensures that only the bits up to the most significant bit of the original n are considered in the final answer.

---


# Complexity

- **Time complexity :** The time complexity of the solution is determined by the number of bits in the input number n. In the worst case, where n has k bits, the loop will run k times. Therefore, the **time complexity is O(k).**

- **Space complexity:** The **space complexity is O(1)** as the algorithm uses a constant amount of extra space (for variables like mask, copyNum, and ans) that does not depend on the input size.


---


# Code
```
class Solution {
public:
    int bitwiseComplement(int n) 
    {
        int mask=0;
        int copyNum=n;
        int ans=0;
        if(n==0)
            return 1;
        while(copyNum!=0)
        {
            copyNum=copyNum>>1;
            mask = mask <<1;
            mask = mask  | 1;
        }
        n = ~n;
        ans = mask & n;
        return ans;
    }
};
```

---

# if you like the solution please UPVOTE it....


![discord-discordgifemoji.gif](https://assets.leetcode.com/users/images/c946d68a-4ab8-49e3-bc84-714ec8669136_1705420995.8539321.gif)


---


![fucking-die-redditor-stupid-cuck-funny-cat.gif](https://assets.leetcode.com/users/images/1bb72463-7982-4d74-abc7-fb387b285011_1705420998.7183146.gif)

---
