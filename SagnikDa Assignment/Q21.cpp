//Transpose of matrix
#include <iostream>

using namespace std;
void disp(int m,int n,int** ar)
{   
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"Enter the row and column "<<endl;
    int r,c;
    cin>>r>>c;
    int** arr;
    arr = (int**)malloc(sizeof(int)*r);
    for (int i = 0; i < r; i++)
    {
        *(arr+i) = (int*)malloc(sizeof(int)*c);
    }
    cout<<"Enter the elements of the array "<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The original matrix "<<endl;
    disp(r,c,arr);
    int** tarr;
    tarr = (int**)malloc(sizeof(int)*c);
    for (int i = 0; i < c; i++)
    {
        *(tarr+i) = (int*)malloc(sizeof(int)*r);
    }
    for (int i = 0 ; i < c ; i++)
    {
        for (int j = 0; j < r; j++)
        {
            tarr[i][j] = arr[j][i]; 
        }
        
    }
    cout<<"Transpose of the matrix is "<<endl;
    disp(c,r,tarr);
}
//nb=
