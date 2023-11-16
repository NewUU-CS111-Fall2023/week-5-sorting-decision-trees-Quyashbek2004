/*
 * Author:
 * Date:
 * Name:
 */
#include <iostream>
#include <vector>
#include <string>

void bubbleSort(std::vector<std::string>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    std::vector<std::string> books = {"Harry Potter", "To Kill a Mockingbird", "The Great Gatsby", "1984", "Brave New World"};
    
    std::cout << "Unsorted list of books:" << std::endl;
    for (const auto& book : books) {
        std::cout << book << std::endl;
    }
    
    bubbleSort(books);
    
    std::cout << "\nSorted list of books:" << std::endl;
    for (const auto& book : books) {
        std::cout << book << std::endl;
    }
    
    return 0;
}
