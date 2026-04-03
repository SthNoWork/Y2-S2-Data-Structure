#include <iostream>
#include "../ex1/ex1.h"

void add(List* list, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    
    if (list->head == nullptr) {
        list->head = newNode;
        list->tail = newNode;
    } else {
        list->tail->next = newNode;
        list->tail = newNode;
    }
}

int main() {
    List* numbers = new List();
    numbers->head = nullptr;
    numbers->tail = nullptr;
    
    int zeroCount = 0;
    int input;
    
    std::cout << "*** A program to store number as many as possible: ***" << std::endl;
    
    while (zeroCount < 2) {
        std::cout << "Enter a number: ";
        std::cin >> input;
        
        if (input == 0) {
            zeroCount++;
            if (zeroCount == 1) {
                std::cout << "You have entered the number 0 once. Only 1 more left. We will quit the program." << std::endl;
            } else if (zeroCount == 2) {
                std::cout << "You have entered the number 0 twice so far. The program is going to stop now." << std::endl;
            }
        } else {
            add(numbers, input);
        }
    }
    
    std::cout << "\nAll data in the list are: ";
    Node* current = numbers->head;
    int sum = 0;
    
    while (current != nullptr) {
        std::cout << current->data << " ";
        sum += current->data;
        current = current->next;
    }
    std::cout << std::endl;
    
    std::cout << "Summation of all numbers is: " << sum << std::endl;
    
    return 0;
}