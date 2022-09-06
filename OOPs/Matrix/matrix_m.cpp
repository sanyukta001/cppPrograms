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
    //a1.take_input();
    cin>>a1;
    cout<<"Second Matrix"<<endl;
    //a2.take_input();
    cin>>a2;
    //a3 = a1.add_matrix(a2);
    a3 = a1 + a2;
    cout<<"The resultant Matrix After addition is:"<<endl;
    //a3.display();
    cout<< a3;
    cout<<"The resultant Matrix After subtraction is:"<<endl;
    Matrix a4 = a1 - a2;
    cout<< a4;
    cout<<"The resultant Matrix After multiplication is:"<<endl;
    Matrix a5 = a1 * a2;
    cout<< a5;

    return 0;
}