# Finding Divisors & Complementary Divisor Pairs

## 🎯 Problem: Find Sum and Count of All Divisors

Given a number `num`, find all its divisors, their count, and their sum.

Example: num = 21
- Divisors: {1, 3, 7, 21}
- Count: 4
- Sum: 32

## 🐌 Naive Approach

Iterate from 1 to num/2 and check each number:
```cpp
int num = 36;
int divisorsCount = 0;
int divisorsSum = 0;

for (int divisor = 1; divisor <= num/2; divisor++) {
    if (num % divisor == 0) {
        divisorsCount++;
        divisorsSum += divisor;
    }
}

// Don't forget to add num itself
divisorsCount++;
divisorsSum += num;
```

**Time Complexity**: O(num/2) = O(num)

For num = 10000 → ~5000 iterations


## 🔑 Core Insight: Complementary Divisor Pairs

**If `d` divides `n` and `remainder` == `0` then `d` is a divisor of `n`, and in this case `quotient` = `n/d`, but the core insight here is that even the `quotient` is also a divisor of `n` because `quotient` also divides `n` perfectly** 

Example: n = 36
- d=1 → n/d=36 → divisor pair (1, 36)
- d=2 → n/d=18 → pair (2, 18)
- d=3 → n/d=12 → pair (3, 12)
- d=4 → n/d=9 → pair (4, 9)
- d=6 → n/d=6 → pair (6, 6) ← perfect square

## 📐 Why √n is the Boundary

**Key**: √num × √num = num 

For any divisor pair `(d, n/d)` always `product of those divisors = n`, because they're a complementary pair: 
- If `d < √n`, then `n/d > √n`
- If `d = √n`, then `n/d = √n` (perfect square)
- If `d > √n`, then `n/d < √n` ← repeat!

**Check only up to √n, get all divisors automatically!**

## 💻 Optimized Implementation
```cpp
int num = 36;

int divisorsCount = 0;
int divisorsSum = 0;

int sqrtNum = sqrt(num);

for (int divisor = 1; divisor <= sqrtNum; divisor++) {
    
    int remainder = num % divisor;

    if (remainder == 0) {
        divisorsCount++;
        divisorsSum += divisor;
        
        int quotient = num/divisor;

        if (divisor != quotient) {  // not perfect square
            divisorsCount++;
            divisorsSum += quotient;
        }
    }
}
```

**Time Complexity**: O(√num)

For num = 10000 → ~100 iterations (50× faster!)

## 🧪 Dry Run: n = 21
```
sqrtNum = 4

i=1: 21%1==0 ✓
     sum += 1, 21 → sum=22, count=2

i=2: 21%2≠0 ✗

i=3: 21%3==0 ✓
     sum += 3, 7 → sum=32, count=4 ✓

i=4: (stop)

Divisors: {1, 3, 7, 21}, Sum: 32
```

## 🧪 Dry Run: n = 36
```
sqrtNum = 6

i=1: sum += 1, 36 → sum=37, count=2
i=2: sum += 2, 18 → sum=57, count=4
i=3: sum += 3, 12 → sum=72, count=6
i=4: sum += 4, 9  → sum=85, count=8
i=5: 36%5≠0 ✗
i=6: sum += 6 (not 6 again, i==num/i) → sum=91, count=9

Divisors: {1,2,3,4,6,9,12,18,36}, Count: 9
```


## 💡 Extra Insights: 

- We understood that divisors come in complementary pairs (d, n/d), and we might initially think after knowing this fact that `all numbers must have an even number of divisors then?`, since each divisor d always has a complement n/d, but `this isn't true because of perfect squares`, theys have a special case where d = n/d (meaning d² = n), which counts as only one unique divisor rather than two distinct ones—for example, with n = 36 and d = 6, we get n/d = 6 as well, so only one unique divisor (6) is added to the count of divisors, not two, which is why perfect squares have an odd number of divisors."

- But yes, `Every non-perfect square has an even number of divisors` only, because all of its divisors come in distinct complementary pairs (d, n/d) where d ≠ n/d. 

- And, `Every perfect square has an odd number of divisors` (one divisor pairs with itself: √n) 