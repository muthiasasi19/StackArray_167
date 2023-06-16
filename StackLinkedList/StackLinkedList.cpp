#include <iostream>

using namespace std;

// Struktur Node
struct Node {
    int data;
    Node* next;

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


};


