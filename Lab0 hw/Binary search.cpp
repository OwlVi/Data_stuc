#include <iostream>
#include <algorithm>

// Binary search function
int binarySearch(int arr[], int size, int target, int &comparisons) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        comparisons++; // Increment comparison count

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {1, 15, 5, 7, 10, 9, 10, 3, 45, 155, 56, 18, 88, 23, 99, 111, 100};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Sort the array
    std::sort(arr, arr + size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int target1 = 5;
    int target2 = 90;
    int comparisons1 = 0, comparisons2 = 0;

    int index1 = binarySearch(arr, size, target1, comparisons1);
    int index2 = binarySearch(arr, size, target2, comparisons2);

    if (index1 != -1) {
        std::cout << "Target " << target1 << " found at index " << index1 << std::endl;
        std::cout << "Number of comparisons: " << comparisons1 << std::endl;
    } else {
        std::cout << "Target " << target1 << " not found." << std::endl;
    }

    if (index2 != -1) {
        std::cout << "Target " << target2 << " found at index " << index2 << std::endl;
        std::cout << "Number of comparisons: " << comparisons2 << std::endl;
    } else {
        std::cout << "Target " << target2 << " not found." << std::endl;
    }

    return 0;
}
#include <iostream>
#include <algorithm>

// Binary search function
int binarySearch(int arr[], int size, int target, int &comparisons) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        comparisons++; // Increment comparison count

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {1, 15, 5, 7, 10, 9, 10, 3, 45, 155, 56, 18, 88, 23, 99, 111, 100};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Sort the array
    std::sort(arr, arr + size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int target1 = 5;
    int target2 = 90;
    int comparisons1 = 0, comparisons2 = 0;

    int index1 = binarySearch(arr, size, target1, comparisons1);
    int index2 = binarySearch(arr, size, target2, comparisons2);

    if (index1 != -1) {
        std::cout << "Target " << target1 << " found at index " << index1 << std::endl;
        std::cout << "Number of comparisons: " << comparisons1 << std::endl;
    } else {
        std::cout << "Target " << target1 << " not found." << std::endl;
    }

    if (index2 != -1) {
        std::cout << "Target " << target2 << " found at index " << index2 << std::endl;
        std::cout << "Number of comparisons: " << comparisons2 << std::endl;
    } else {
        std::cout << "Target " << target2 << " not found." << std::endl;
    }

    return 0;
}
