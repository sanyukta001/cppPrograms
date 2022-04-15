#include <iostream>

using namespace std;
int main()
{
    int** matrix;
    matrix=(int**)malloc(2*sizeof(int));
    for (int i = 0; i < 2; i++)
    {
        *(matrix+i)=(int*)malloc(2*sizeof(int));
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"enter the value at "<<i<<j<<" : ";
            cin>>matrix[i][j];
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
        
    }
    return 0;   
}