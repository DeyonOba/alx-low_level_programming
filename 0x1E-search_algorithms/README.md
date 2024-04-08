# 0x1E. C - Search Algorithms

## Linear Search Algorithm:

From [wikipedia](https://en.wikipedia.org/wiki/Linear_search):
> Linear search or sequential search is a method for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched

### Basic Algorithm:
For an array of integers $L_n$, where n is the number of elements in the array, $L_0 \to L_{n-1}$, we want to find a target value $T$ within the array, here are the step to follow using Linear search:
1. Declare and assign 0 to a variable representing the index $i = 0$.
2. For each index withing the array check if $L_i == T$, if successful return index $i$.
3.  or else check the next item in list by increasing $i$ by 1.
4. If item is not found withing the array return unsuccessful -1.

### Complexity
|class| Search algorithm|
|---|---|
|Worst-case performance| O(n)|
|Best-case performance| O(1)|
|Average performance| O(n)|
|Worst-case space complexity| O(1) iterative|

### Solution 
```c
int linear_search(int *array, size_t size, int value)
{
        size_t index;

        if (array == NULL)
                return (-1);

        for (index = 0; index < size; index++)
        {
                printf("Value checked array[%ld] = [%d]\n", index, array[index]);
                if (array[index] == value)
                        return (index);
        }

        return (-1);
}
```
