# Arrays/Vectors

## What are Vectors?

- Vectors are dynamic arrays.
- They are reallocated memory once filled to a specific capacity to make them dynamic.
- Vectors store the elements in a strict linear sequence.
- They provide blazing fast access to elements using pointer arithmetics.

## Iterators

- `begin()` : start of the vector
- `end`() : end of the vector
- `rbegin()` : reverse begin
- `rend()` : reverse end

## Capacity

- `size()` : number of elements of the vector
- `resize(n)` : resizes vector to store n elements
- `empty()` : empties a vector
- `shrink_to_fit` : deallocates empty memory blocks

## Element Access

- `[g]` : Returns element at g
- `front()` : Returns first element of vector
- `back()` : Returns last element of vector

## Modifiers

- `assign(m, n)` : reset the array and fill it with `n` , `m` times
- `push_back(n)` : adds `n` to end of the vector
- `pop_back()` : removes element from last of vector and returns it
- `insert(pos, val)` : Adds element `val` before the element of specified position `pos`
- `clear()` : clears all the elements inside a vector
- `erase(startring_pos, ending_pos)` : erases element/range of elements. here `starting_pos` and `ending_pos` are iterators
- `emplace(it, n)` : Adds n at the `it'th` position. `it` is an iterator.
- `swap(v1, v2)` : swaps contents of two vectors
