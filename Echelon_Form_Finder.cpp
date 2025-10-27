#include <iostream>

using namespace std;

int main(){
    int rows ,cols;
    cout<<"Enter the no of rows"<<endl;
    cin>>rows;
    cout<<"Enter the no of cols"<<endl;
    cin>>cols;
    float a[rows][cols];
     for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols ; j++)
        {
            cin>>a[i][j];
        }
        
     }
     cout<<"The matrix is"<<endl;
     for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols ; j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;

     }
     for(int p = 0; p < rows; p++){
     for (int i = 0; i < cols; i++)
    { 
      
        if (a[p][i] != 0)
        { 
            const float m = a[p][i];
            for (int j = 0; j < cols; j++)
            {
                
                a[p][j] = float(float(a[p][j])/float(m));
               

            }
if (rows > 1)
            {
               float pnew = p+1;
            for (int k = pnew; k < rows; k++)
            {

                const float lolipop = a[k][i];
                for (int l = 0; l < cols; l++)
                {
                    a[k][l] = a[k][l] - lolipop*a[p][l];
                }
                
                
            }
            for (int z = 0; z < p; z++)
            {
                const float lolipop = a[z][i];
                for (int y = 0; y < cols; y++)
                {
                    a[z][y] = a[z][y] - lolipop*a[p][y];
                }
                
                
            }
            }
             break;
            
        }
      }
    }
    
    

    cout<<"The new matrix is"<<endl;
    for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols ; j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;

     }
    return 0;
}

