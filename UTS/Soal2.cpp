#include <iostream>
using namespace std;

struct node {
    string nama;
    int harga;
    node* next;
};

node* head = NULL;
node* tail = NULL;

void insertLastnama(string nama) {
    node* newNode = new node();
    newNode->nama;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void insertLastharga(int harga) {
    node* newNode = new node();
    newNode->harga;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void deleteFirst() {
    if (head == NULL) {
        cout << "List kosong!" << endl;
        return;
    }

    node *temp = head;
    head = head->next;

    if (head == NULL) tail = NULL;
    delete temp;
}

void deleteLast() {
    if (head == NULL) {
        cout << "List kosong!" << endl;
        return;
    }

    if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }

    node *p = head;
    while (p->next != tail) {
        p = p->next;
    }
    delete tail;
    tail = p;
    tail->next = NULL;
}

void display() {
    node *temp = head;
    cout << "List barang mewah: ";
    while(temp != NULL) {
        cout << temp->nama << "(" << temp->harga << ")";
        temp = temp->next;
    }
}

int main() {
system("cls");

    string nama;
    int harga;
    int menu;

    cout << "Pilih Menu (1-4)" << endl;
    cout << "1. Insert tail" << endl;
    cout << "2. Delete head" << endl;
    cout << "3. Delete tail" << endl;
    cout << "4. Tampilkan barang mewah" << endl;
    cout << "Pilihan: ";
    cin >> menu;

    if (menu == 1){
        cout << "Nama barang: ";
        cin >> nama;
        cout << "Harga: ";
        cin >> harga;
        insertLastnama(nama);
        insertLastharga(harga);
        display();
    }
}