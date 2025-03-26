#include <iostream>
#include <string>
// #include <sstream>
// #include <algorithm>
// #include <queue>
// #include <stack>

using namespace std;

class Q
{
    int size;
    int front;
    int rear;
    int *arr;
    int count;

public:
    Q(int size) : size(size), front(0), rear(-1), count(0) // 초기화 잘못 해 오류 발생
    {
        arr = new int[size];
    }

    ~Q()
    {
        delete[] arr;
    }

    bool empty()
    {
        return count == 0;
    }

    void push(int n)
    {
        if (count < size)
        {
            rear = (rear + 1) % size;
            arr[rear] = n;
            count++;
        }
    }

    void pop()
    {
        if (empty())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << arr[front] << endl;
            front = (front + 1) % size;
            count--;
        }
    }

    void frontP()
    {
        if (empty())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << arr[front] << endl;
        }
    }

    void rearP()
    {
        if (empty())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << arr[rear] << endl;
        }
    }

    void qsize()
    {
        cout << count << endl;
    }
};

int main()
{
    int num;
    string str;

    cin >> num;

    Q q(num);

    for (int i = 0; i < num; i++)
    {
        cin >> str;

        if (str == "push")
        {
            int item;
            cin >> item;

            q.push(item);
        }
        else if (str == "pop")
        {
            q.pop();
        }
        else if (str == "size")
        {
            q.qsize();
        }
        else if (str == "empty")
        {
            cout<<q.empty()<<endl;
        }
        else if (str == "front")
        {
            q.frontP();
        }
        else if (str == "back")
        {
            q.rearP();
        }
    }

    return 0;
}
