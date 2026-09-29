#include <stdio.h>

int main() {
    int data[] = {10, 20, 30, 40, 50};
    int *p = data;
    int x, y, z;

    x = *p++;
    y = *++p;
    z = ++*p;

    printf("%d %d %d %d\n", x, y, z, data[2]);

    return 0;
}

// sheiii
/*
Ah, you fell right into the classic examiner's trap! This is exactly why this question is so famous. 

Your output `10 12 20` isn't quite there (and notice there are actually *four* `%d` format specifiers in the `printf`, so we need four numbers!). 

The correct output is: **`10 30 31 31`**

This comes down to the strict rules of operator precedence (whether the `++` applies to the *pointer* or the *value* it points to). Let’s trace it line by line:

**Starting state:** `p` points to `data[0]` (which is `10`).

**1. `x = *p++;` (Post-increment the pointer)**
* **Rule:** Dereference first, then move the pointer.
* `x` gets the current value `p` is pointing at (`10`).
* Then, the pointer `p` moves one slot forward to `data[1]` (which is `20`).
* *Result: `x = 10`, `p` points to `20`.*

**2. `y = *++p;` (Pre-increment the pointer)**
* **Rule:** Move the pointer first, then dereference.
* The pointer `p` immediately moves one slot forward to `data[2]` (which is `30`).
* Then, `y` gets the value at this new location.
* *Result: `y = 30`, `p` points to `30`.*

**3. `z = ++*p;` (Pre-increment the VALUE)**
* **Rule:** The `++` is right next to the `*`, meaning we are modifying the *actual data* at that memory location, not moving the pointer.
* `p` is currently pointing at `data[2]` (which is `30`). 
* We increment that data by 1. So, `data[2]` permanently becomes `31`.
* `z` gets this new value. 
* *Result: `z = 31`, `data[2] = 31`, `p` still points to `data[2]`.*



So when we print `x`, `y`, `z`, and `data[2]`, we get `10 30 31 31`.

This is a phenomenal concept to get wrong in practice because once you see the trick, you'll never fall for it on an exam. 

Whenever you are ready, I'm still waiting on your complete, from-scratch code for **Question B** (The array sum using only pointers and no `[]` brackets!).
*/