#include <stdio.h>
#include <time.h>

int linearSearch(int *arr, int size, int searchValue) {
    for(int i=0; i < size; i++) {
      if (arr[i] == searchValue) {
        return i;  
      }
    }
    return -1;    
}


int binarySearch(int *arr, int start, int end, int searchValue) {
    // Base case
    if (start <= end) {
        // Run code
        int middle = start + (end - start) / 2;
        if (searchValue == arr[middle]) {
            return middle;           
        }    
        if (searchValue < arr[middle]) {
            return binarySearch(arr,start,middle - 1,searchValue);   
        }
        return binarySearch(arr,middle + 1,end,searchValue);
    }
    return -1;
}



int main() {
    int arr[40] = {
        1, 3, 5, 7, 9, 11, 13, 15, 17, 19,
        21, 23, 25, 27, 29, 31, 33, 35, 37, 39,
        41, 43, 45, 47, 49, 51, 53, 55, 57, 59,
        61, 63, 65, 67, 69, 71, 73, 75, 77, 79
    };

    clock_t start, end;
    double execution_time;

    start = clock();
    int lin_pos_49 = linearSearch(arr, 40, 49);
    end = clock();
    execution_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Linear Search: The position of 49 is: %d (Time: %.6f sec)\n", lin_pos_49, execution_time);

    start = clock();
    int lin_pos_100 = linearSearch(arr, 40, 100);
    end = clock();
    execution_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Linear Search: The position of 100 is: %d (Time: %.6f sec)\n", lin_pos_100, execution_time);

    start = clock();
    int bin_pos_49 = binarySearch(arr, 0, 39, 49);
    end = clock();
    execution_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Binary Search: The position of 49 is: %d (Time: %.6f sec)\n", bin_pos_49, execution_time);

    start = clock();
    int bin_pos_100 = binarySearch(arr, 0, 39, 100);
    end = clock();
    execution_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Binary Search: The position of 100 is: %d (Time: %.6f sec)\n", bin_pos_100, execution_time);

    return 0;
}
