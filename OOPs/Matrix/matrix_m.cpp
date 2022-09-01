#include "matrix.h"

int main()
{
    int r,c;
    cout<<"Enter the row size and column size"<<endl;
    cin>>r>>c;
    Matrix a1(r,c);
    Matrix a2(r,c);
    Matrix a3(r,c);
    cout<<"First Matrix"<<endl;
    a1.take_input();
    cout<<"Second Matrix"<<endl;
    a2.take_input();
    a3 = a1.add_matrix(a2);
    cout<<"The resultant Matrix is:"<<endl;
    a3.display();
    return 0;
}