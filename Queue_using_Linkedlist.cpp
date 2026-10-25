#include <iostream>
using namespace std;

class Queue {
private:
    struct Node {
        int data;
        Node* next;
    };

    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        cout << value << " inserted into queue." << endl;
    }

    void dequeue() {
        if (front == nullptr) {
            cout << "Queue Underflow!" << endl;
        } else {
            Node* temp = front;

            cout << temp->data << " removed from queue." << endl;

            front = front->next;

            if (front == nullptr) {
                rear = nullptr;
            }

            delete temp;
        }
    }

    void display() {
        if (front == nullptr) {
            cout << "Queue is empty." << endl;
        } else {
            Node* temp = front;

            cout << "Queue elements: ";
            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    ~Queue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }

        rear = nullptr;
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n--- Queue Using Linked List ---" << endl;
        cout << "1. Enqueue (Insert)" << endl;
        cout << "2. Dequeue (Remove)" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            cout << "Program ended." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}

/*Output-

PS C:\Users\vanshika> cd "c:\Users\vanshika\Downloads\" ; if ($?) { g++ Queue_using_Linkedlist.cpp -o Queue_using_Linkedlist } ; if ($?) { .\Queue_using_Linkedlist }

--- Queue Using Linked List ---
1. Enqueue (Insert)
2. Dequeue (Remove)
3. Display
4. Exit
Enter your choice: 1
Enter value: 45
45 inserted into queue.

--- Queue Using Linked List ---
1. Enqueue (Insert)
2. Dequeue (Remove)
3. Display
4. Exit
Enter your choice: 1
Enter value: 34
34 inserted into queue.

--- Queue Using Linked List ---
1. Enqueue (Insert)
2. Dequeue (Remove)
3. Display
4. Exit
Enter your choice: 1
Enter value: 78
78 inserted into queue.

--- Queue Using Linked List ---
1. Enqueue (Insert)
2. Dequeue (Remove)
3. Display
4. Exit
Enter your choice: 1
Enter value: 29
29 inserted into queue.

--- Queue Using Linked List ---
1. Enqueue (Insert)
2. Dequeue (Remove)
3. Display
4. Exit
Enter your choice: 2
45 removed from queue.

--- Queue Using Linked List ---
1. Enqueue (Insert)
2. Dequeue (Remove)
3. Display
4. Exit
Enter your choice: 3
Queue elements: 34 78 29 

--- Queue Using Linked List ---
1. Enqueue (Insert)
2. Dequeue (Remove)
3. Display
4. Exit
Enter your choice: 4
Program ended.
PS C:\Users\vanshika\Downloads> */