#include <iostream>
#include <vector>
#include <string>

void rearrangeSoldiers(std::vector<std::string>& soldiers) {
    int count = soldiers.size();
    int lastSoldierIndex = count - 1;
    
    // Swap every second soldier
    for (int i = 0; i < count - 1; i += 2) {
        std::swap(soldiers[i], soldiers[i + 1]);
    }
    
    // If the count is odd, leave the last soldier unchanged
    if (count % 2 != 0) {
        std::swap(soldiers[lastSoldierIndex], soldiers[lastSoldierIndex]);
    }
}

int main() {
    int numSoldiers;
    std::cout << "Enter the number of soldiers: ";
    std::cin >> numSoldiers;
    
    std::vector<std::string> soldiers;
    soldiers.reserve(numSoldiers);
    
    std::cout << "Enter the names of soldiers in order: " << std::endl;
    std::string soldierName;
    for (int i = 0; i < numSoldiers; i++) {
        std::cin >> soldierName;
        soldiers.push_back(soldierName);
    }
    
    std::cout << "Before rearrangement: ";
    for (const std::string& soldier : soldiers) {
        std::cout << soldier << " ";
    }
    std::cout << std::endl;
    
    rearrangeSoldiers(soldiers);
    
    std::cout << "After rearrangement: ";
    for (const std::string& soldier : soldiers) {
        std::cout << soldier << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
