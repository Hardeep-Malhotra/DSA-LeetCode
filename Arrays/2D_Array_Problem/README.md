# 📘 2D Array – LeetCode Problems (C++)

This folder covers important **2D Array** problems from LeetCode. For each problem, you’ll find a short explanation of the **core idea**, **approach**, and **time/space complexity** for quick revision.

---

## ✅ Problems Covered

### 1️⃣ Spiral Matrix — *LeetCode 54*

**Problem:**
Given an `m x n` matrix, return all elements in **spiral order**.

**Core Idea:**

* Maintain four boundaries: `srow, erow, scol, ecol`
* Traversal order: **Top row → Right column → Bottom row → Left column**
* Update boundaries after each round

**Approach:**

* Use `while (srow <= erow && scol <= ecol)`
* Push elements into the answer vector during each traversal

**Time Complexity:** `O(m × n)`

**Space Complexity:** `O(1)` (excluding the output vector)

---

### 2️⃣ Matrix Diagonal Sum — *LeetCode 1572*

**Problem:**
Return the sum of the **primary** and **secondary diagonals** of a square matrix.

**Core Idea:**

* Primary diagonal: `mat[i][i]`
* Secondary diagonal: `mat[i][n - 1 - i]`
* For odd-sized matrices, the **center element is counted twice** → subtract it once

**Optimized Approach:**

* Add both diagonals in a single loop
* Skip adding the secondary diagonal when `i == n - 1 - i`

**Time Complexity:** `O(n)`

**Space Complexity:** `O(1)`

---

### 3️⃣ Search a 2D Matrix II — *LeetCode 240*

**Problem:**
Search for a target value in a matrix where **each row and each column is sorted**.

**Core Idea (Staircase Search):**

* Start from the **top-right corner**
* If `current > target` → move **left** (`col--`)
* If `current < target` → move **down** (`row++`)

**Important Insight:**

* Each comparison eliminates an entire **row or column**
* No full row or column scan is required

**Time Complexity:** `O(m + n)`

**Space Complexity:** `O(1)`

---

## 🧠 Key Takeaways

* **Indices and boundaries** are crucial in 2D array problems
* Avoid printing (`cout`)—always focus on **returning values** (as required by LeetCode)
* Start with a brute-force solution, then move to an **optimized approach**

---

## 📂 Suggested Files

* `Spiral_Matrix.cpp`
* `Diagonal_Sum.cpp`
* `Search_2D_Matrix_II.cpp`

---

Happy Coding 🚀
