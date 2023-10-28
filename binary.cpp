#include <iostream>
#include <vector>

// Binary search function
int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If the element is present at the middle
        if (arr[mid] == target) {
            return mid;
        }

        // If the element is greater, ignore the left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If the element is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }

    // Element not found in the array
    return -1;
}

int main() {
    std::vector<int> arr = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int target = 12;

    int index = binarySearch(arr, target);
    if (index != -1) {
        std::cout << "Element found at index: " << index << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
