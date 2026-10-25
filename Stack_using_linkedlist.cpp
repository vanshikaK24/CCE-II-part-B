#include <iostream>
using namespace std;

class Stack {
private:
    struct Node {
        int data;
        Node* next;
    };

    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = top;
        top = newNode;

        cout << value << " pushed into stack." << endl;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow!" << endl;
        } else {
            Node* temp = top;
            cout << temp->data << " popped from stack." << endl;
            top = top->next;
            delete temp;
        }
    }

    void display() {
        if (top == nullptr) {
            cout << "Stack is empty." << endl;
        } else {
            Node* temp = top;

            cout << "Stack elements: ";
            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    ~Stack() {
        while (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- Stack Using Linked List ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            s.push(value);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.display();
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
PS C:\Users\vanshika> cd "c:\Users\vanshika\Downloads\" ; if ($?) { g++ Stack_using_linkedlist.cpp -o Stack_using_linkedlist } ; if ($?) { .\Stack_using_linkedlist }

--- Stack Using Linked List ---
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value: 12
12 pushed into stack.

--- Stack Using Linked List ---
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value: 17
17 pushed into stack.

--- Stack Using Linked List ---
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value: 30
30 pushed into stack.

--- Stack Using Linked List ---
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value: 10
10 pushed into stack.

--- Stack Using Linked List ---
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 2
10 popped from stack.

--- Stack Using Linked List ---
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 3
Stack elements: 30 17 12 

--- Stack Using Linked List ---
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 4
Program ended.
PS C:\Users\vanshika\Downloads> */