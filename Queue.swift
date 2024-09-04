class Queue<T> {
    private var elements: [T] = []

    func enqueue(_ item: T) {
        elements.append(item)
    }

    func dequeue() -> T? {
        return isEmpty() ? nil : elements.removeFirst()
    }

    func peek() -> T? {
        return elements.first
    }

    func isEmpty() -> Bool {
        return elements.isEmpty
    }

    func size() -> Int {
        return elements.count
    }
}

// 사용 예제
var q = Queue<Int>()
q.enqueue(1)
q.enqueue(2)
q.enqueue(3)
print(q.dequeue() ?? "Queue is empty")  // 출력: 1
print(q.peek() ?? "Queue is empty")     // 출력: 2
print(q.size())   