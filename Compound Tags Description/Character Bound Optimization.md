# Character Bound Optimization

## 🎯 What Is It?

**Character-Bound Optimization** leverages the fixed size of character sets (typically 26 lowercase letters) to optimize algorithms by iterating through the character space instead of exploring all possible string positions or combinations.

**Example:**  
`1930. Unique Length-3 Palindromic Subsequences` - [Question Link](https://leetcode.com/problems/unique-length-3-palindromic-subsequences)   

Naive **O(n^2)** Solution - [Code Link](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1930.%20Unique%20Length-3%20Palindromic%20Subsequences/02_Naive_Optimal_Approach.cpp)   

Optimal **O(n)** Solution `(Uses Character-Bound Pattern)` - [Code Link](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1930.%20Unique%20Length-3%20Palindromic%20Subsequences/04_Another_Optimal_Approach_with_Bit_Manipulation.cpp)  

For this question you can also checkout my all approaches `(Naive → Optimal)` here - [My All Approaches Codes](https://github.com/aryan04-t/LeetCode-Sprint/tree/master/1930.%20Unique%20Length-3%20Palindromic%20Subsequences)  


## 💡 Why Use It?

1. **Bounds exponential/polynomial growth** → O(26×...) instead of O(n×...)
2. **Enables pruning** → Skip characters that don't exist
3. **Precomputation leverage** → Store char positions/frequencies once
4. **Predictable space** → O(26) = O(1) auxiliary arrays

## ⚙️ When To Use

✅ **Use character-bound optimization when:**
- Input guaranteed to be 26 lowercase letters
- Nested loops search for character matches
- Need character frequencies, first/last positions
- Exponential search space can be bounded by alphabet size
- Counting/generating based on character properties

❌ **Don't use when:**
- Unbounded character set (unicode, mixed case with digits)
- Position order matters more than character identity
- Very short strings (overhead > benefit)


## 📝 Common Applications

**Example 1: O(n²) → O(n) transformation**
```cpp
// Problem: For each character, count unique chars between its first and last occurrence

// Naive O(n²): nested loops through positions
for (int i = 0; i < n; i++) {
    for (int j = n-1; j > i+1; j--) {
        if (s[i] == s[j]) {
            // count unique chars between i and j
        }
    }
}

// Optimized O(n): iterate 26 characters, not n positions
vector<int> first(26, -1), last(26, -1);
for (int i = 0; i < n; i++) {
    if (first[s[i]-'a'] == -1) first[s[i]-'a'] = i;
    last[s[i]-'a'] = i;
}

// process range [first[ch], last[ch]]
for (int ch = 0; ch < 26; ch++) {
    if (first[ch] != -1) {
        int firstIdx = first[ch];
        int lastIdx = last[ch];
        for (int i = firstIdx + 1; i < lastIdx; i++) {
          // count unique chars 
        }
    }
}

// (26*n) iterations instead of (n^2) interations 
```


## 🔑 Key Insight

**Think:** "For each character in alphabet" instead of "For each position in string"

The constant 26 transforms complexity: O(n^2) → O(n), etc. 


## 👀 You Can Also Checkout: 

- Ways of Tracking Seen Characters of an Alphabet in C++ → Hash Map, Hash Set, Hash Vector, Bit Masking | [Article Link](https://github.com/aryan04-t/LeetCode-Jog/blob/master/00_Maths%20and%20Coding%20-%20Fundamentals%20and%20Tricks%20for%20Revision/38_Ways%20of%20Tracking%20Seen%20Characters%20of%20an%20Alphabet%20in%20C%2B%2B.md) 