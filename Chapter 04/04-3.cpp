#include <iostream>
using namespace std;

template <typename T>
class Queue{
    private:
        T arr[100];
        int top = 0;
        int rear = 0;

    public:
        void push(T data){arr[rear++] = data;}
        T Pop(){return arr[top++];}
        bool Empty(){return top == rear;}
};

int main(){
    Queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    if(!q.Empty())
        cout<<q.Pop()<<endl;
    if(!q.Empty())
        cout<<q.Pop()<<endl;
    if(!q.Empty())
        cout<<q.Pop()<<endl;
}