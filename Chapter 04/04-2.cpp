#include <iostream>
using namespace std;

template <typename T>
class Stack{
    private:
        T arr[100];
        int size = 0;
    public:
        void Push(T data){arr[size++] = data;}
        T Pop(){return arr[--size];}
        bool Empty(){return size == 0;}
};

int main(){
    Stack<int> st;
    st.Push(10);
    st.Push(20);
    st.Push(30);

    if(!st.Empty())
        cout<<st.Pop()<<endl;
    if(!st.Empty())
        cout<<st.Pop()<<endl;
    if(!st.Empty())
        cout<<st.Pop()<<endl;
}