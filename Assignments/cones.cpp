#include <iostream>
using namespace std;

class cone
{
    int r, h, l;
    double volume, area;
 public:
    cone();
    cone(int r, int h, int l);
    cone(cone &ob);
    void farea();
    void fvolume();
    void display();
};

cone::cone()
{
    r = 0, l = 0, h = 0;
    volume = 0, area = 0;
}

cone::cone(int r, int h, int l)
{
    this->r = r;
    this->h = h;
    this->l = l;
    volume = 0, area = 0;
}

cone::cone(cone &ob)
{
    this->h = ob.h;
    this->r = ob.r;
    this->l = ob.l;
    volume = 0;
    area = 0;
}

void cone::farea()
{
    this->area = 3.14 * r * l;
}

void cone::fvolume()
{
    this->volume = (3.14 * r * r * h) / 3;
}

void cone::display()
{
    cout << "THe volume is: " << volume << " And the area is: " << area << endl;
}

int main()
{
    cone b(1, 2, 3);
    b.farea();
    b.fvolume();
    // cone a = b;      //----->shallow copy 
    cone a(b);          //----->deep copy 
    a.display();
    b.display();

    return 0;
}