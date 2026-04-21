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

    if (price < 50) {           // add to begin
        p->next = l->head;
        l->head = p;
    } else {                    // add to end
        l->tail->next = p;
        l->tail = p;
    }
}

void display(ListProduct* l) {
    for (Product* p = l->head; p; p = p->next)
        cout << "ID:" << p->productid << " | " << p->name << " | $" << p->price << endl;
}

int main() {
    ListProduct* l = createEmptyList();
    addProduct(l, 1, "Pen",    1.5);
    addProduct(l, 2, "Laptop", 999.0);
    addProduct(l, 3, "Book",   12.0);
    addProduct(l, 4, "Phone",  299.0);
    addProduct(l, 5, "Eraser", 0.5);

    cout << "Product list:" << endl;
    display(l);
}