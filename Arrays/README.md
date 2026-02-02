📦 Array & Hashing Solutions

This directory contains optimized C++ solutions for Array-based challenges. Arrays are the foundation of most technical interviews, and in C++, they offer the best performance due to contiguous memory allocation.



🛠️ Technical Implementation Details
When solving these problems, I focus on:
* **Memory Management:** Using `std::vector` to manage dynamic memory efficiently.
* **STL Optimization:** Leveraging `std::sort`, `std::reverse`, and `std::unordered_map` for $O(n)$ or $O(n \log n)$ solutions.
* **Pass-by-Reference:** Always passing vectors as `const vector<int>&` to avoid the overhead of deep copying.

🚀 Top Interview Problems
Below is a curated list of essential Array problems I have solved, including their time and space complexities.

| Problem Name | Difficulty | Time Complexity | Space Complexity | Solution Link |
| :--- | :--- | :--- | :--- | :--- |
| Two Sum | Easy | $O(n)$ | $O(n)$ | [Code](./Two%20Sum/solution.cpp) |
| Best Time to Buy/Sell Stock | Easy | $O(n)$ | $O(1)$ | [Code](./Best%20Time%20to%20Buy%20and%20Sell%20Stock/solution.cpp) |
| Contains Duplicate | Easy | $O(n)$ | $O(n)$ | [Code](./Contains%20Duplicate/solution.cpp) |
| Product of Array Except Self | Medium | $O(n)$ | $O(1)$ | [Code](./Product%20of%20Array%20Except%20Self/solution.cpp) |
| 3Sum | Medium | $O(n^2)$ | $O(1)$ | [Code](./3Sum/solution.cpp) |
| Trapping Rain Water | Hard | $O(n)$ | $O(1)$ | [Code](./Trapping%20Rain%20Water/solution.cpp) |


💡 Key Patterns Mastered
* **Two Pointers:** Used for searching pairs or reversing in-place.
* **Sliding Window:** Optimal for subarray problems.
* **Prefix Sums:** Great for range queries.
* **Hashing:** Used for frequency counting and $O(1)$ lookups.
