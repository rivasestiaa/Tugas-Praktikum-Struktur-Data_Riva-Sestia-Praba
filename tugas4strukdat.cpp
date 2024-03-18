#include <iostream>
using namespace std;

//fungsi mendeskripsikan tipe data untuk membuat linkedlist//
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

//fungsi untuk membuat atau menambahkan linkedlist//
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

    void append(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    //fungsi untuk membalikkan nilai linkedlist//
    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;
        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

//fungsi untuk menampilkan hasil akhir linkedlist//
int main() {
    LinkedList linkedList;
    for (int i = 1; i <= 10; ++i) {
        linkedList.append(i);
    }

    cout << "Linked List sebelum dibalik : " << endl;
    linkedList.display();

    linkedList.reverse();

    cout << "Linked List setelah dibalik : " << endl;
    linkedList.display();

    //menampilkan nama dan npm//
    cout << "Nama : Riva Sestia Praba" << endl;
    cout << "NPM : 2310631170045" << endl;

    return 0;
}
