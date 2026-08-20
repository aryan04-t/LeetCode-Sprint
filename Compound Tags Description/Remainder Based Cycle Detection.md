# Remainder Based Cycle Detection

## 🎯 Pattern Name
**Remainder Based Cycle Detection**

## 🔑 Core Concept
When performing repeated modular operations, **if a remainder repeats, you've entered a cycle**.

Since the transformation `remainder_next = f(remainder_current) % k` is deterministic, once you see the same remainder twice, the sequence will loop forever through the same remainders.

## 🔄 The Cycling Behavior

**Key Property:** If `remainder` at step `i` equals `remainder` at step `j` (where `i < j`), then:
- Step `i+1` and step `j+1` will have identical remainders
- Step `i+2` and step `j+2` will have identical remainders
- The pattern repeats infinitely: you're in a cycle of length `j - i`

**Example with k = 6:**
```
Step 1: remainder = 1
Step 2: remainder = 5
Step 3: remainder = 3
Step 4: remainder = 1  ← Seen at Step 1! Cycle detected: [1 → 5 → 3]
Step 5: remainder = 5  ← Same as Step 2
Step 6: remainder = 3  ← Same as Step 3
Step 7: remainder = 1  ← Same as Step 4 (and Step 1)
...continues forever in cycle [1 → 5 → 3 → 1 → 5 → 3 ...]
```

**Implication:** If you're searching for a specific remainder (like 0) and enter a cycle that doesn't contain it, **that remainder is unreachable**.

## 🎪 The Pigeonhole Principle

**Statement:** If you have `n` items and `m` containers, and `n > m`, then at least one container must hold more than one item.

**Simple Example:**
- 5 pigeons, 4 pigeonholes → At least one hole has 2+ pigeons
- 10 socks, 3 colors → At least one color appears 4+ times

**In Our Context:**
- **Items:** Remainders generated at each step
- **Containers:** Possible remainder values (0, 1, 2, ..., k-1)
- **Container count:** k

**Conclusion:** If we generate more than `k` remainders, at least one remainder value must repeat → cycle detected!

## ⏱️ Why k Iterations Are Enough

### The Mathematical Guarantee

There are exactly `k` possible remainders: `{0, 1, 2, ..., k-1}`

After `k` iterations, we've generated `k` remainders. By the Pigeonhole Principle:

**Two outcomes are possible:**

1. **Found the target (remainder = 0)** ✓
   - Solution exists, return the answer

2. **Didn't find 0 in k iterations**
   - We generated `k` remainders from the set `{0, 1, 2, ..., k-1}`
   - If 0 is not among them, all `k` remainders came from `{1, 2, ..., k-1}` (size k-1)
   - By Pigeonhole Principle: at least one value from `{1, 2, ..., k-1}` must repeat
   - **Repetition = Cycle = 0 is unreachable** ✗

**Therefore:** After `k` iterations, either we found the answer or proved no answer exists.

### Visual Proof
```
Iteration:  1    2    3    4    5    6    ...
Remainder: [?]  [?]  [?]  [?]  [?]  [?]

Possible values at each step: {0, 1, 2, ..., k-1}  (k choices)

After k steps:
├─ Case 1: One of [?] is 0 → Found answer ✓
└─ Case 2: None is 0 → k values from (k-1) choices
                     → Repetition guaranteed (Pigeonhole)
                     → Cycle without 0
                     → No solution ✗
```

## 📝 Example Problem

**Problem:** Find the smallest number that contains only digit 1 and is divisible by k. Return the count of digits.

**Constraints:** 
- 1 ≤ k ≤ 10^5
- For this problem, assume a valid answer always exists

**Example:** 
- k = 3 → answer is 111 (3 digits)
- k = 7 → answer is 111111 (6 digits)

## 📊 Concrete Example: k = 7 (Solution Exists)
```cpp
int remainder = 0;
int k = 7;
for (int digits = 1; digits <= k; digits++) {
    remainder = (remainder * 10 + 1) % k;
    if (remainder == 0) return digits;
}
return -1;  // No solution found
```

**Trace:**
```
Possible remainders: {0, 1, 2, 3, 4, 5, 6}  (7 values)

Step 1: remainder = (0 * 10 + 1) % 7 = 1
Step 2: remainder = (1 * 10 + 1) % 7 = 4
Step 3: remainder = (4 * 10 + 1) % 7 = 6
Step 4: remainder = (6 * 10 + 1) % 7 = 5
Step 5: remainder = (5 * 10 + 1) % 7 = 3
Step 6: remainder = (3 * 10 + 1) % 7 = 0 ✓ Found at step 6!
```

**Result:** Found 0 within k=7 iterations → Answer is 6 digits

## 📊 Concrete Example: k = 6 (No Solution)
```
Possible remainders: {0, 1, 2, 3, 4, 5}  (6 values)

Step 1: remainder = (0 * 10 + 1) % 6 = 1
Step 2: remainder = (1 * 10 + 1) % 6 = 5
Step 3: remainder = (5 * 10 + 1) % 6 = 3
Step 4: remainder = (3 * 10 + 1) % 6 = 1  ← Repeated! (saw at Step 1)
Step 5: remainder = (1 * 10 + 1) % 6 = 5  ← Will repeat Step 2
Step 6: remainder = (5 * 10 + 1) % 6 = 3  ← Will repeat Step 3
```

**Analysis:**
- After 6 iterations: remainders = [1, 5, 3, 1, 5, 3]
- 0 never appeared
- Cycle detected: [1 → 5 → 3 → 1 → 5 → 3 ...]
- All 6 remainders came from {1, 3, 5} (only 3 distinct values)
- By Pigeonhole: 6 remainders from 5 possible non-zero values → repetition guaranteed

**Result:** No solution exists (0 is unreachable)

## 🧠 The Mental Model

Think of it as a **state machine with k states**:
```
States: [0] [1] [2] ... [k-1]

Each step: current_state → next_state (deterministic)

After k steps:
├─ Visited state [0]? → Success! Answer found
└─ Never visited [0]? → Trapped in a cycle without [0]
                      → Continuing is pointless (will just repeat cycle)
```

## 🎪 When to Apply This Bound

Use the `iterations <= k` bound when:
1. **Tracking remainders modulo k** in a deterministic sequence
2. **Searching for a specific remainder** (like 0 for divisibility)
3. **Need to detect cycles** to avoid infinite loops

The bound guarantees: within `k` iterations, either find the target or prove it's unreachable.

## ✨ Key Takeaway

**The loop bound `digits <= k` comes from two principles:**

1. **Remainder Based Cycle Detection:** Repeated remainder = cycle = target is unreachable if not in cycle
2. **Pigeonhole Principle:** With k possible values, generating k remainders either hits target or creates repetition

**Bottom line:** After k iterations, you've either found the answer or entered a cycle. Checking more is mathematically pointless.