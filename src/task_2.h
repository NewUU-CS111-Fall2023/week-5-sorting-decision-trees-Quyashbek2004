#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& denominations) {
    int n = denominations.size();
    
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        
        for (int j = i + 1; j < n; j++) {
            if (denominations[j] < denominations[minIndex]) {
                minIndex = j;
            }
        }
        
        if (minIndex != i) {
            swap(denominations[i], denominations[minIndex]);
        }
    }
}

void displayDenominations(const vector<int>& denominations) {
    for (int i = 0; i < denominations.size(); i++) {
        cout << denominations[i] << " ";
    }
    cout << endl;
}

int main() {
   std::vector<int> denominations;
    int numDenominations;

    std::cout << "Enter the number of denominations: ";
    std::cin >> numDenominations;

    std::cout << "Enter the values of denominations:\n";
    for (int i = 0; i < numDenominations; i++) {
        int denomination;
        std::cout << "Denomination " << i + 1 << ": ";
        std::cin >> denomination;
        denominations.push_back(denomination);
    }

    std::cout << "\nDenominations entered:\n";
    for (int i = 0; i < numDenominations; i++) {
        std::cout << denominations[i] << " ";
    }
    std::cout << "\n";

    return 0;
    
    cout << "Before sorting: ";
    displayDenominations(denominations);
    
    selectionSort(denominations);
    
    cout << "After sorting: ";
    displayDenominations(denominations);
    
    return 0;
}
