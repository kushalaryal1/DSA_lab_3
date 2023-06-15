#include"LinkedListQueue.h"
using namespace std;

void LinkedListQueue::enqueue(int a)
{
    list.addToTail(a);
    cout<<a<<"  enqueued."<<endl;
}

int LinkedListQueue::dequeue()
{
    if(isEmpty())
    {
        cout<<"Queue is empty. Dequeue not possible."<<endl;
        return 0;
    }
    int temp = list.returnHead()->info;
    list.removeFromHead();
    cout<<temp<<"  dequeued successfully."<<endl;
    return temp;
}

bool LinkedListQueue::isEmpty()
{
    if(list.isEmpty())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool LinkedListQueue::isFull()
{
    cout<<"Linked list stack cannot be full. Returning false."<<endl;
    return 0;
}

int LinkedListQueue::front()
{
    if(isEmpty())
    {
        cout<<"Queue empty. Returning 0."<<endl;
        return 0;
    }
    else
    {
        cout<<"Front element is "<<list.returnHead()->info<<endl;
        return list.returnHead()->info;
    }
}

int LinkedListQueue::rear()
{
    if(isEmpty())
    {
        cout<<"Queue empty. Returning 0."<<endl;
        return 0;
    }
    else
    {
        cout<<"Rear element is "<<list.returnTail()->info<<endl;
        return list.returnTail()->info;
    }
}

void LinkedListQueue::view()
{
    if(isEmpty())
    cout<<"Queue empty."<<endl;
    else
    {
        cout<<"Queue: (Front --> Rear): ";
        list.traverse();
    }
}