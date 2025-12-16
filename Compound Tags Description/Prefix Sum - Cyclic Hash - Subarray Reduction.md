# Prefix Sum - Cyclic Hash - Subarray Reduction

## 🎯 What Problem Does This Solve?

Many problems ask: "Find subarrays that satisfy condition X"

**Naive solution:** Check every subarray → O(n²) → Too slow!  

But by using [Intuition Inversion](https://github.com/aryan04-t/LeetCode-Jog/blob/master/00_Maths%20and%20Coding%20-%20Fundamentals%20and%20Tricks%20for%20Revision/30_Inverting%20Intuitions%20-%20A%20Problem%20Solving%20Framework.md) thought process we can spot a pattern which helps us solve these type of problems in O(n).

**This pattern:** Single pass with hash map → O(n) → Much faster!

## 💡 Simple Example First

**Problem:** Find subarrays with sum = 7 in `[3, 1, 2, 4]`

**Naive O(n²) approach:**
```
Check all subarrays:
[3] = 3 ✗
[3,1] = 4 ✗
[3,1,2] = 6 ✗
[1] = 1 ✗
[1,2] = 3 ✗
[1,2,4] = 7 ✓  Found one!
[2] = 2 ✗
[2,4] = 6 ✗
[4] = 4 ✗
```

**Our O(n) approach with prefix sums:**
```
Array:      [3,  1,  2,  4]
Prefix sum: [3,  4,  6, 10]

At index 3 (prefix=10): Need to find prefix=3 (because 10-3=7)
Found prefix=3 at index 0!
Answer: subarray [1,2,4] has sum 7
```

## ✨ The Key Insight

✨ **Any subarray[i:j] = prefix[j] - prefix[i-1]**

If two prefixes have compatible states (same remainder, same balance, etc.), the subarray between them satisfies our condition!

**Visual:**
```
Array:     [3,  1,  2,  4]
Prefix:    [3,  4,  6, 10]
           ↑           ↑
           |___________|
           This difference = subarray [1,2,4]
```

## ⚙️ How The Pattern Works

**Core idea:** Instead of checking all subarrays, we:
1. Calculate a running prefix state (sum, XOR, balance, etc.)
2. Store seen states in a hash map with their positions
3. At each position, calculate what target state we need to find
4. If target exists in hash map → we found a valid subarray!

**🎯 Finding the target state:**
- **Sum problems:** `target = current_sum - required_sum`
- **Divisibility:** `target = (current_remainder - total_remainder) % k`
- **Balance problems:** `target = current_balance`
- **XOR problems:** `target = current_xor ^ required_xor`

**📦 What we store in hash map:**
Depends on the problem, but typically: `{state: position}` or `{state: count}`

**🔑 Base case:** If the problem's logic requires, then assess the base case and initialize hash map with `{initial_state: initial_value}` to handle subarrays starting from index 0.

## 🏷️ Pattern Name Breakdown

- **Prefix Sum** = Running/cumulative computation (prefix sums, running balance, XOR chain)
- **Cyclic Hash** = Grouping states into cyclic keys (like modulo creates cycles: 0,1,2,3,4,0,1,2..., odd & even numbers count diffs also creates cycles, in-short the overlapping hashes help in this pattern) stored in a hash map 
- **Subarray Reduction** = Reduces O(n²) subarray enumeration to O(n) single-pass optimization

**🔄 Why it works for multiple problem types:**
- Equal counts → Track count difference
- Target sums → Track cumulative sum
- Divisibility → Track remainders (cyclic grouping via modulo)
- XOR conditions → Track XOR state
- Balance tracking → Track net balance

## 📝 Step-by-Step Logic

At each position `i`:
1. Each position creates `i+1` new subarrays ending at that position
2. Instead of forming all subarrays naively, we use prefix states
3. Calculate current prefix state
4. Derive target state from current state using problem condition
5. Check if target state exists in hash map
6. If yes → found valid subarray(s)
7. Store/update current state in hash map

## 🚀 Practice Problems

560. Subarray Sum Equals K | [Question Link](https://leetcode.com/problems/subarray-sum-equals-k/) | [My Solutions](https://github.com/aryan04-t/LeetCode-Sprint/tree/master/560.%20Subarray%20Sum%20Equals%20K)

974. Subarray Sums Divisible by K | [Question Link](https://leetcode.com/problems/subarray-sums-divisible-by-k/) | [My Solutions](https://github.com/aryan04-t/LeetCode-Sprint/tree/master/974.%20Subarray%20Sums%20Divisible%20by%20K)

1590. Make Sum Divisible by P | [Question Link](https://leetcode.com/problems/make-sum-divisible-by-p/) | [My Solutions](https://github.com/aryan04-t/LeetCode-Sprint/tree/master/1590.%20Make%20Sum%20Divisible%20by%20P)

3381. Maximum Subarray Sum With Length Divisible by K | [Question Link](https://leetcode.com/problems/maximum-subarray-sum-with-length-divisible-by-k/) | [My Solutions](https://github.com/aryan04-t/LeetCode-Sprint/tree/master/3381.%20Maximum%20Subarray%20Sum%20With%20Length%20Divisible%20by%20K)

3755. Find Maximum Balanced XOR Subarray Length | [Question Link](https://leetcode.com/problems/find-maximum-balanced-xor-subarray-length/) | [My Solutions](https://github.com/aryan04-t/LeetCode-Sprint/tree/master/3755.%20Find%20Maximum%20Balanced%20XOR%20Subarray%20Length)