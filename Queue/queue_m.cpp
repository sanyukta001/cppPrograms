#include "queue.h"
int main()
{
    Queue line(5);
    line.enqueue(10);
    line.enqueue(20);
    line.enqueue(30);
    line.enqueue(40);
    line.enqueue(50);
    line.dequeue();
    line.enqueue(60);
    line.display();
    return 0;
}