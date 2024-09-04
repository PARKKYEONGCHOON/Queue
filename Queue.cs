using System;
using System.Collections.Generic;

public class Queue<T>
{
    private List<T> elements = new List<T>();

    public void Enqueue(T item)
    {
        elements.Add(item);
    }

    public T Dequeue()
    {
        if (IsEmpty())
            throw new InvalidOperationException("Queue is empty");

        T value = elements[0];
        elements.RemoveAt(0);
        return value;
    }

    public T Peek()
    {
        if (IsEmpty())
            throw new InvalidOperationException("Queue is empty");

        return elements[0];
    }

    public bool IsEmpty()
    {
        return elements.Count == 0;
    }

    public int Size()
    {
        return elements.Count;
    }
}

// 사용 예제
public class Program
{
    public static void Main()
    {
        Queue<int> q = new Queue<int>();
        q.Enqueue(1);
        q.Enqueue(2);
        q.Enqueue(3);
        Console.WriteLine(q.Dequeue());  // 출력: 1
        Console.WriteLine(q.Peek());     // 출력: 2
        Console.WriteLine(q.Size());     // 출력: 2
    }
}