#include <iostream>
#include <string>
using namespace std;

struct Product {
    int productid;
    string name;
    float price;
    Product* next;
};

struct ListProduct {
    Product* head;
    Product* tail;
};

ListProduct* createEmptyList() {
    ListProduct* l = new ListProduct;
    l->head = l->tail = nullptr;
    return l;
}

void addProduct(ListProduct* l, int id, string name, float price) {
    Product* p = new Product;
    p->productid = id; p->name = name; p->price = price; p->next = nullptr;

    if (!l->head) { l->head = l->tail = p; return; }

    if (price < 50) {
        p->next = l->head;
        l->head = p;
    } else {
        l->tail->next = p;
        l->tail = p;
    }
}

void display(ListProduct* l) {
    for (Product* p = l->head; p; p = p->next)
        cout << "ID:" << p->productid << " | " << p->name << " | $" << p->price << endl;
}

void searchByName(ListProduct* l, string name) {
    for (Product* p = l->head; p; p = p->next)
        if (p->name == name) {
            cout << "Found -> ID:" << p->productid << " | " << p->name << " | $" << p->price << endl;
            return;
        }
    cout << "Not found." << endl;
}

void searchByPrice(ListProduct* l, float threshold) {
    cout << "Section 1 (price < " << threshold << "):" << endl;
    for (Product* p = l->head; p; p = p->next)
        if (p->price < threshold)
            cout << "  " << p->name << " $" << p->price << endl;

    cout << "Section 2 (price > " << threshold << "):" << endl;
    for (Product* p = l->head; p; p = p->next)
        if (p->price > threshold)
            cout << "  " << p->name << " $" << p->price << endl;
}

void updateByProductId(ListProduct* l, int id, string newName, float newPrice) {
    for (Product* p = l->head; p; p = p->next)
        if (p->productid == id) {
            p->name = newName; p->price = newPrice;
            cout << "Updated." << endl;
            return;
        }
    cout << "ID not found." << endl;
}

int main() {
    ListProduct* l = createEmptyList();
    addProduct(l, 1, "Pen",    1.5);
    addProduct(l, 2, "Laptop", 999.0);
    addProduct(l, 3, "Book",   12.0);
    addProduct(l, 4, "Phone",  299.0);
    addProduct(l, 5, "Eraser", 0.5);

    cout << "=== All Products ===" << endl;
    display(l);

    cout << "\n=== Search by Name: Book ===" << endl;
    searchByName(l, "Book");

    cout << "\n=== Search by Price threshold $50 ===" << endl;
    searchByPrice(l, 50.0);

    cout << "\n=== Update ID 3 -> Notebook $25 ===" << endl;
    updateByProductId(l, 3, "Notebook", 25.0);
    display(l);
}