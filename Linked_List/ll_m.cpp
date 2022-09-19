#include "ll.h"
using namespace std;
int main()
{
    LinkedList ll;
    Node n1(5);
    for (int i = 1; i < 5; i++)
    {
        ll.append(i*10);
    }
    ll.display();
    //cout<<ll;
    return 0;
}