/*
If S is a 1-D array of integers, then *(S+3) refers to the third element:
(i) True.
(ii) False.
(iii) Depends.

Correct answer: (ii) False.

Explanation:
- In C, the name of the array `S` acts as a pointer 
to the first element of the array, i.e., `S` is equivalent to `&S[0]`.
- When you write `*(S + 3)`, you are moving the pointer `S` forward by 3 elements, 
pointing it to the address of the fourth element (`S[3]`).
- Therefore, `*(S + 3)` refers to the value at the fourth element of the array, not the third.
*/
