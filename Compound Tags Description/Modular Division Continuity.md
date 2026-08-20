# Modular Division Continuity

## 🎯 Pattern Name & Base
**Modular Division Continuity** - Concepts of [MODULAR ARITHMETIC] and [DIVISON] form the base of this pattern  

## 🔑 Core Principle
**You can keep transforming a number (multiply, add) while tracking its divisibility, and the remainder 'remembers' everything you need without needing the full number.**

This prevents overflow because you never build the actual large number - you only track its remainder.

## 📝 Example Problem

**Problem:** Find the smallest number "n" that contains only digit 1 and is divisible by k, return how many digits n have.

**Constraints:** 
- 1 ≤ k ≤ 10^5
- For this problem, assume a valid answer always exists for a given k 

**Example:** 
- k = 3 → answer is 111 (3 digits)
- k = 7 → answer is 111111 (6 digits)

## 📊 Concrete Example: k = 7

### ❌ Naive Approach (overflow risk):
```cpp
int num = 1;
int digits = 1;
int k = 7;
while (true) {
    if (num % k == 0) return digits;
    num = (num * 10) + 1;  // Builds: 1, 11, 111, 1111, ...
    digits++;
    // But in this approach "num" variable eventually overflows for large k!
}
```

**Trace:**
```
num = 1           → 1 % 7 = 1
num = 11          → 11 % 7 = 4
num = 111         → 111 % 7 = 6
num = 1111        → 1111 % 7 = 5
num = 11111       → 11111 % 7 = 3
num = 111111      → 111111 % 7 = 0 ✓ Found! (6 digits)  
```

**Problem:** For k = 10^5, this could require building a number with tens of thousands of digits - not even a `long long` data type can handle this big numbers — instant overflow! 

### ✅ Modular Division Continuity (no overflow):
```cpp
int remainder = 0;
int k = 7;
for (int digits = 1; digits <= k; digits++) {
    remainder = (remainder * 10 + 1) % k;
    if (remainder == 0) return digits;
}
```

**But Why is the Remainder Enough to Track a Transforming Number's Divisibility?**  

**Trace:**
```
remainder = 0
k = 7

Step 1: remainder = (0 * 10 + 1) % 7 = 1
        "I'm 'in the middle' of dividing 1 by 7, remainder is 1"

Step 2: remainder = (1 * 10 + 1) % 7 = 11 % 7 = 4
        "I multiply my partial result by 10, add 1"
        "Still tracking the remainder correctly!"

Step 3: remainder = (4 * 10 + 1) % 7 = 41 % 7 = 6
        "Multiply again, add again, take mod again"

Step 4: remainder = (6 * 10 + 1) % 7 = 61 % 7 = 5

Step 5: remainder = (5 * 10 + 1) % 7 = 51 % 7 = 3

Step 6: remainder = (3 * 10 + 1) % 7 = 31 % 7 = 0 ✓ Found! (6 digits)
```

**Result:** We know the answer is 6 digits without ever computing 111111!

**Key observation:** At each step, `remainder` equals what `actual_number % 7` would be, but we never overflow because `remainder` stays in [0, 6]. That means remainder in range [0, k-1] 


## 💡 The Overflow Problem's Solution

**Problem:** Building numbers like 1 → 11 → 111 → 1111 causes overflow

**Solution:** Instead of storing the full number, store only `num % k`

**Why it works:** The remainder at each step equals what the full number's remainder would be, but stays bounded in [0, k-1], this prevents overflow but it doesn't hinder the continuity of checking divisibility of a number 


## 📐 Mathematical Foundation

**The Transformation Property:**
```
Original:     n % k = r
Transform:    n' = n * a + b
Result:       n' % k = ((n % k) * a + b) % k = (r * a + b) % k
```

**Meaning:** When you transform a number mid-division, the remainder transforms predictably. You don't need to restart division—the flow continues through the remainder.

**Key Modular Property:**
```
(a * b + c) % k = ((a % k) * b + c) % k
```

## 🎪 When to Apply

Use this pattern when you're:
1. **Building large numbers iteratively** (concatenating digits, computing powers)
2. **Only checking divisibility or remainders** (not the actual value)
3. **Facing overflow** with standard integer types, and concepts like **Division** and **Modular arithmetic** are being used 

## 🧠 The Mental Model

Think of it as a "remainder state machine":
- **State:** Current remainder ∈ [0, k-1]
- **Transition:** Apply operations (multiply, add), then mod k
- **Result:** State never overflows, always tracks divisibility correctly

The remainder "carries forward" all information about divisibility through transformations.

## ✨ Key Benefits

- **Prevents overflow:** Values bounded by k, not by the actual number size
- **Preserves correctness:** `remainder` at step i equals `actual_number % k` at step i
- **Maintains continuity:** Division "flow" never breaks despite transformations