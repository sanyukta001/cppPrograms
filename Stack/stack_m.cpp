#include "stack.h"

int main()
{
    Stack ob;
    ob.init(5);
    for(int i = 1; i < 5; i++)
        ob.push(5*i);
    ob.display();
    ob.push(25);
    ob.push(30);
    ob.display();
    item x = ob.pop();
    if(x != -99999)
        cout<<"The poped item is "<<x<<endl;
    ob.display();
    return 0;
}