import java.util.LinkedList;

class Queue<T> {
    private LinkedList<T> elements = new LinkedList<>();

    public void enqueue(T item) {
        elements.addLast(item);
    }

    public T dequeue() {
        if (isEmpty()) {
            throw new IllegalStateException("Queue is empty");
        }
        return elements.removeFirst();
    }

    public T peek() {
        if (isEmpty()) {
            throw new IllegalStateException("Queue is empty");
        }
        return elements.getFirst();
    }

    public boolean isEmpty() {
        return elements.isEmpty();
    }

    public int size() {
        return elements.size();
    }
}

// 사용 예제
public class Main {
    public static void main(String[] args) {
        Queue<Integer> q = new Queue<>();
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        System.out.println(q.dequeue());  // 출력: 1
        System.out.println(q.peek());     // 출력: 2
        System.out.println(q.size());     // 출력: 2
    }
}