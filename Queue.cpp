#include <iostream>
#include <queue>
using namespace std;

class Queue {
private:
    int* arr;
    int front;
    int rear;
    int capacity;
    int count;

public:
    Queue(int size = 1000) {
        arr = new int[size];
        capacity = size;
        front = 0;
        rear = -1;
        count = 0;
    }

    ~Queue() {
        delete[] arr;
    }

    bool is_empty() const {
        return (count == 0);
    }

    bool is_full() const {
        return (count == capacity);
    }

    void enqueue(int item) {
        if (is_full()) {
            cout << "Queue is full\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = item;
        count++;
    }

    int dequeue() {
        if (is_empty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        int item = arr[front];
        front = (front + 1) % capacity;
        count--;
        return item;
    }

    int peek() const {
        if (is_empty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    int size() const {
        return count;
    }
};

// 사용 예제
int main() {
    Queue q(10);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.dequeue() << endl;  // 출력: 1
    cout << q.peek() << endl;     // 출력: 2
    cout << q.size() << endl;     // 출력: 2
    return 0;
}