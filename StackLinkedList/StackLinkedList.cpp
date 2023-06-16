#include <iostream>

using namespace std;

// Struktur Node
struct Node {
    int data;
    Node* next;
};

// Kelas Stack
class StackLinkedList {
private:
    Node* top; // Pointer ke elemen teratas stack

public:
    // Constructor
    StackLinkedList() {
        top = NULL;
    }

    // Fungsi untuk mengecek isi data stack 
    bool isEmpty() {
        return (top == NULL);
    }

    // Fungsi untuk menambahkan elemen ke stack
    void push() {
        int element;
        cout << "Masukkan nilai elemen: ";
        cin >> element;

        Node* newNode = new Node(); // Buat node baru
        newNode->data = element;      // Set nilai data
        newNode->next = top;        // Menghubungkan newNode dengan top
        top = newNode;              // Mengubah top menjadi newNode
        cout << "Elemen " << element << " ditambahkan ke stack." << endl;
    }

    // Fungsi untuk menghapus elemen dari stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong. Tidak ada elemen yang dihapus." << endl;
            return;
        }
        Node* temp = top;   // Simpan alamat elemen teratas
        top = top->next;    // Mengubah top menjadi elemen berikutnya
        cout << "Elemen " << temp->data << " dihapus dari stack." << endl;
        delete temp;        // Hapus elemen
    }

    // Fungsi untuk menampilkan elemen-elemen dalam stack
    void display() {
        if (isEmpty()) {
            cout << "Stack kosong." << endl;
            return;
        }
        cout << "Isi stack: ";
        Node* current = top;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    StackLinkedList  stack;
    int choice;

    while (true) {
        cout << "\n**** Stack Menu ****\n" << endl;
        cout << "1. Push\n" << endl;
        cout << "2. Pop\n" << endl;
        cout << "3. Display\n" << endl;
        cout << "4. Exit\n" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            stack.push();
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.display();
            break;
        case 4:
            return 0;
        default:
            cout << "\nInvalid choice" << endl;
            break;
        }
    }
}


