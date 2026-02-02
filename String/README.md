# 🧵 String Manipulation Solutions

This directory contains my C++ implementations for String-based challenges. String problems are a staple of technical interviews, testing everything from basic parsing to complex pattern matching and Dynamic Programming.

[Image of string manipulation concepts like concatenation, indexing, and substrings]

## 🛠️ Technical Implementation Details
In C++, `std::string` is more than just an array of characters. My solutions focus on:
* **Efficiency:** Using `+=` or `std::stringstream` for concatenation to avoid $O(n^2)$ overhead from repeated string copies.
* **Memory Safety:** Passing strings by `const string&` (constant reference) to prevent expensive deep copies.
* **Character Manipulation:** Using `std::isalnum()`, `std::tolower()`, and ASCII values for optimized parsing.

---

## 🚀 Top Interview Problems
A curated list of essential String problems solved in this repository, focusing on common interview patterns.

| Problem Name | Difficulty | Key Concept | Time Complexity | Solution Link |
| :--- | :--- | :--- | :--- | :--- |
| Valid Palindrome | Easy | Two Pointers | $O(n)$ | [Code](./Valid%20Palindrome/solution.cpp) |
| Longest Substring Without Repeating Characters | Medium | Sliding Window | $O(n)$ | [Code](./Longest%20Substring%20Without%20Repeating%20Characters/solution.cpp) |
| Group Anagrams | Medium | Hashing/Sorting | $O(n \cdot k \log k)$ | [Code](./Group%20Anagrams/solution.cpp) |
| Valid Parentheses | Easy | Stack Data Structure | $O(n)$ | [Code](./Valid%20Parentheses/solution.cpp) |
| String to Integer (atoi) | Medium | String Parsing | $O(n)$ | [Code](./String%20to%20Integer%20(atoi)/solution.cpp) |
| Longest Palindromic Substring | Medium | Expand Around Center | $O(n^2)$ | [Code](./Longest%20Palindromic%20Substring/solution.cpp) |

---

## 💡 Key Patterns Mastered
* **Two Pointers:** Ideal for palindrome checks and string reversals.
* **Sliding Window:** The gold standard for substring search problems.
* **Hashing/Frequency Maps:** Used for detecting anagrams and finding unique characters.
* **String Parsing:** Handling edge cases like white spaces, signs, and numerical boundaries.

---
*Solutions are automatically synced via LeetHub v2.*
