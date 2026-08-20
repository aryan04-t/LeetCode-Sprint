## 🔗 Modular Congruence: The Foundation

### What is Congruence?

**Definition:** Two numbers are **congruent modulo k** if they have the same remainder when divided by k.

**Notation:** `a ≡ b (mod k)`

**Example:** `1111 ≡ 61 (mod 7)` because `1111 % 7 = 5` and `61 % 7 = 5`

### Equivalence Classes (Buckets)

All numbers fall into exactly `k` buckets based on their remainder:
```
For k = 7:
Bucket 0: {0, 7, 14, 21, ...}
Bucket 1: {1, 8, 15, 22, ...}
Bucket 2: {2, 9, 16, 23, ...}
...
Bucket 5: {5, 12, 19, 26, 61, 1111, ...}  ← Both 61 and 1111 here!
Bucket 6: {6, 13, 20, 27, ...}
```

**Key insight:** Numbers in the same bucket behave identically in modular arithmetic.

### How Congruence Enables Division Continuity

Compare Step 4 in both approaches:
```
Naive:    num = 1111,  1111 % 7 = 5  (Bucket 5)
Optimal:  remainder = 61 % 7 = 5     (Bucket 5)
```

Even though `1111 ≠ 61`, they're in the **same bucket**. When transformed:
```
Next naive:    (1111 * 10 + 1) % 7 = 3  (Bucket 3)
Next optimal:  (61 * 10 + 1) % 7 = 3    (Bucket 3)
```

**Both land in Bucket 3!** Congruent numbers stay congruent after identical transformations.

### The Congruence Property

**If `a ≡ b (mod k)`, then `(a * c + d) ≡ (b * c + d) (mod k)`**

This means:
- Track bucket (remainder) instead of the full number
- Transformations preserve bucket membership
- Remainders stay in [0, k-1], preventing overflow
```
Naive:   1111 → 11111 → 111111 → ... (overflow!)
Optimal:   5  →   3   →   0    → ... (no overflow!)
         Bucket 5 → Bucket 3 → Bucket 0 ✓
```

### Why This Works

**Modular congruence guarantees:** Working with remainders gives the same divisibility result as working with full numbers.

- Naive builds: `1, 11, 111, 1111, ...` (eventual overflow)
- Optimal tracks: `1, 4, 6, 5, ...` (which buckets visited)

Both visit the same sequence of buckets, but only one overflows. **The actual numbers don't matter—only which bucket they belong to!**