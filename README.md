# Search Algorithms in C

This project demonstrates the implementation of two common searching algorithms in C: Linear Search and Binary Search. The code measures and prints the execution time for each search algorithm.

## Files

- `searchingAlgorithms.c`: Contains the implementation of Linear Search and Binary Search algorithms, along with a `main` function to test these algorithms.

## Algorithms

### Linear Search

Linear Search is a simple search algorithm that checks each element in the array sequentially until the desired element is found or the end of the array is reached.

```c
int linearSearch(int *arr, int size, int searchValue) {
    for(int i = 0; i < size; i++) {
        if (arr[i] == searchValue) {
            return i;
        }
    }
    return -1;
}
```

### Binary Search

Binary Search is a more efficient search algorithm that works on sorted arrays. It repeatedly divides the search interval in half and compares the middle element with the target value.

```c
int binarySearch(int *arr, int start, int end, int searchValue) {
    if (start <= end) {
        int middle = start + (end - start) / 2;
        if (searchValue == arr[middle]) {
            return middle;
        }
        if (searchValue < arr[middle]) {
            return binarySearch(arr, start, middle - 1, searchValue);
        }
        return binarySearch(arr, middle + 1, end, searchValue);
    }
    return -1;
}
```

## Usage

To compile and run the code, use the following commands:

```sh
gcc searchingAlgorithms.c -o search
./search
```

The output will display the position of the searched values and the time taken by each search algorithm.

## Example Output

```
Linear Search: The position of 49 is: 24 (Time: 0.000001 sec)
Linear Search: The position of 100 is: -1 (Time: 0.000023 sec)
Binary Search: The position of 49 is: 24 (Time: 0.000004 sec)
Binary Search: The position of 100 is: -1 (Time: 0.000012 sec)
```


