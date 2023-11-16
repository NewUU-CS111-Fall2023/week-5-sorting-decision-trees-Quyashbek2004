#include <iostream>
#include <vector>

int countElementsWithSmallerNeighbors(const std::vector<int>& arr) {
    int count = 0;
    int n = arr.size();
    
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    
    std::vector<int> arr(size);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    
    int count = countElementsWithSmallerNeighbors(arr);
    
    std::cout << "Number of elements with smaller neighbors: " << count << std::endl;
    
    return 0;
}
