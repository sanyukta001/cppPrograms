//multiply matrix
#include <iostream>

using namespace std;
int main()
{
    int r1,r2,c1,c2;
    cout<<"Enter the row and column of first array"<<endl;
    cin>>r1>>c1;
    cout<<"Enter the row and column of second array"<<endl;
    cin>>r2>>c2;
    int ar1[r1][c1];
    int ar2[r2][c2];
    cout<<"Enter the array elements of the first array"<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin>>ar1[i][j];
        }
    }
     cout<<"Enter the array elements of the second array"<<endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin>>ar2[i][j];
        }
    }
    if(c1!=r2)
    cout<<"Multiplication not possible"<<endl;
    else
    {
        int res[r1][c2];
        for (int i = 0; i < r1; i++)
        { 
            for (int j = 0; j < c2; j++)
            {
             int r=0;
                for (int k = 0; k < r2; k++)
                {
                  r += ar1[i][k]*ar2[k][j];
                }
                  res[i][j] = r;
            }
        }
        cout<<"The result is : "<<endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;   
        }   
    }
}
//nb=