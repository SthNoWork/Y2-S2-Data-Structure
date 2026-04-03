#include <iostream>
#include "../ex3/ex3.h"

void displayList(ListStudent* LS) {
    StudentNode* current = LS->head;
    if (current == nullptr) {
        std::cout << "The list is empty." << std::endl;
        return;
    }
    
    std::cout << "\n--- Student List ---" << std::endl;
    while (current != nullptr) {
        std::cout << "ID: " << current->data.id 
                  << " | Name: " << current->data.name 
                  << " | Year: " << current->data.year 
                  << " | Degree: " << current->data.degree << std::endl;
        current = current->next;
    }
    std::cout << "--------------------" << std::endl;
}

int main() {
    ListStudent* myClass = createEmptyList();
    
    add({"e2021001", "Dara", 2, "Bachelor"}, myClass);
    add({"e2021002", "Bopha", 2, "Bachelor"}, myClass);
    add({"e2021003", "Sok", 3, "Bachelor"}, myClass);
    add({"e2021004", "Vicheka", 2, "Bachelor"}, myClass);
    add({"e2021005", "Chantra", 3, "Bachelor"}, myClass);
    
    displayList(myClass);
    
    std::cout << "\nAdding 2 more students..." << std::endl;
    add({"e2021006", "Nisay", 1, "Bachelor"}, myClass);
    add({"e2021007", "Rith", 2, "Bachelor"}, myClass);
    
    displayList(myClass);
    
    return 0;
}