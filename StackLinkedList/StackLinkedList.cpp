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

};


