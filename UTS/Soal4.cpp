#include <iostream>
using namespace std;

struct node {
    int data;
    node* kanan;
    node* kiri;
};

node* akar = NULL;

// Fungsi menambahkan node
void addnode(node** akar, int value) {
    if(*akar == NULL) {
        node* baru = new node;
        baru -> data = value;
        baru -> kiri = NULL;
        baru -> kanan = NULL;
        *akar = baru;
    }
}

// Fungsi in order
void inOrder(node* akar) {
    if (akar != NULL) {
        inOrder(akar -> kiri);
        cout << akar -> data << " ";
        inOrder(akar -> kanan);
    }
}

// Fungsi pre order
void preOrder(node* akar) {
    if (akar != NULL) {
        cout << akar -> data << " ";
        preOrder(akar -> kiri);
        preOrder(akar -> kanan);
    }
}

// Fungsi post order
void postOrder(node* akar) {
    if (akar != NULL) {
        postOrder(akar -> kiri);
        postOrder(akar -> kanan);
        cout << akar -> data << " ";
    }
}

int main() {
    system("cls");

    addnode(&akar, 40);
    addnode(&akar -> kiri, 20);
    addnode(&akar -> kanan, 60);
    addnode(&akar -> kiri -> kiri, 10);
    addnode(&akar -> kiri -> kanan, 30);
    addnode(&akar -> kiri -> kanan, 50);
    addnode(&akar -> kiri -> kanan, 70);


    cout << "Post Order: \n";
    postOrder(akar);
    cout << endl;
    cout << endl;

    cout << "Nilai Terbesar: \n";
    cout << ;

    return 0;
}