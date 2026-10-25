#include <iostream>
using namespace std;

#define SIZE 5

class Stack {
private:
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == SIZE - 1) {
            cout << "Stack Overflow!" << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed into stack." << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- Stack Using Array ---" << endl;
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
PS C:\Users\vanshika> cd "c:\Users\vanshika\Downloads\" ; if ($?) { g++ Stack_using_Array.cpp -o Stack_using_Array } ; if ($?) { .\Stack_using_Array }

--- Stack Using Array ---
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value: 12
12 pushed into stack.

--- Stack Using Array ---
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value: 14
14 pushed into stack.

--- Stack Using Array ---
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value: 18
18 pushed into stack.

--- Stack Using Array ---
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value: 20
20 pushed into stack.

--- Stack Using Array ---
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 2
20 popped from stack.

--- Stack Using Array ---
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 3
Stack elements: 18 14 12 

--- Stack Using Array ---
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 4
Program ended.
PS C:\Users\vanshika\Downloads> */