#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
private:
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow!" << endl;
        } else {
            if (front == -1) {
                front = 0;
            }

            arr[++rear] = value;
            cout << value << " inserted into queue." << endl;
        }
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
        } else {
            cout << arr[front] << " removed from queue." << endl;
            front++;

            if (front > rear) {
                front = rear = -1;
            }
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n--- Queue Using Array ---" << endl;
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
PS C:\Users\vanshika> cd "c:\Users\vanshika\Downloads\" ; if ($?) { g++ Queue_using_Array.cpp -o Queue_using_Array } ; if ($?) { .\Queue_using_Array }

--- Queue Using Array ---
1. Enqueue (Insert)
2. Dequeue (Remove)
3. Display
4. Exit
Enter your choice: 1
Enter value: 30 
30 inserted into queue.

--- Queue Using Array ---
1. Enqueue (Insert)
2. Dequeue (Remove)
3. Display
4. Exit
Enter your choice: 1
Enter value: 35
35 inserted into queue.

--- Queue Using Array ---
1. Enqueue (Insert)
2. Dequeue (Remove)
3. Display
4. Exit
Enter your choice: 1
Enter value: 40
40 inserted into queue.

--- Queue Using Array ---
1. Enqueue (Insert)
2. Dequeue (Remove)
3. Display
4. Exit
Enter your choice: 1
Enter value: 45
45 inserted into queue.

--- Queue Using Array ---
1. Enqueue (Insert)
2. Dequeue (Remove)
3. Display
4. Exit
Enter your choice: 1
Enter value: 50
50 inserted into queue.

--- Queue Using Array ---
1. Enqueue (Insert)
2. Dequeue (Remove)
3. Display
4. Exit
Enter your choice: 3
Queue elements: 30 35 40 45 50 

--- Queue Using Array ---
1. Enqueue (Insert)
2. Dequeue (Remove)
3. Display
4. Exit
Enter your choice: 2
30 removed from queue.

--- Queue Using Array ---
1. Enqueue (Insert)
2. Dequeue (Remove)
3. Display
4. Exit
Enter your choice: 4
Program ended.
PS C:\Users\vanshika\Downloads> */