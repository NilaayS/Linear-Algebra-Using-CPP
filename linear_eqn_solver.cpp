#include <iostream>

using namespace std;

int main(){
    int rows ,cols;
    cout<<"Enter the no of unknowns"<<endl;
    cin>>cols;
    cout<<"Enter the no of equations"<<endl;
    cin>>rows;
   
    if(rows <cols){
       cout<<"This system has infinite solutions"<<endl;
    }else{
    cout<<"Note : enter values in the format of a1 b1 c1 d1."<<endl;
    cout<<"Enter the values "<<endl;
    //Storing Input as A ( A = [B|C])
    int colsn = cols+1;
    float a[rows][colsn];
    float b[rows][cols];
    float c[rows][1];
     for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < colsn ; j++)
        {
            cin>>a[i][j];
        }
        
     }
    cout<<"The Augmented matrix is"<<endl;
     for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < colsn ; j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;

     }

     //Converting A into its RRF
     for(int p = 0; p < rows; p++){
     for (int i = 0; i < colsn; i++)
    { 
      
        if (a[p][i] != 0)
        { 
            const float m = a[p][i];
            for (int j = 0; j < colsn; j++)
            {
                
                a[p][j] = float(float(a[p][j])/float(m));
               

            }
if (rows > 1)
            {
               float pnew = p+1;
            for (int k = pnew; k < rows; k++)
            {

                const float lolipop = a[k][i];
                for (int l = 0; l < colsn; l++)
                {
                    a[k][l] = a[k][l] - lolipop*a[p][l];
                }
                
                
            }
            for (int z = 0; z < p; z++)
            {
                const float lolipop = a[z][i];
                for (int y = 0; y < colsn; y++)
                {
                    a[z][y] = a[z][y] - lolipop*a[p][y];
                }
                
                
            }
            }
             break;
            
        }
      }
    }

    
// Splitting the matrix
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        b[i][j] = a[i][j];
      }
      c[i][0] = a[i][cols];    
    }
    cout<<"The RRF of the Augmented matrix is"<<endl;
     for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < colsn ; j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;

     }
cout<<"The matrix B is"<<endl;
     for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols ; j++)
        {
            cout<<b[i][j]<<"  ";
        }
        cout<<endl;

     }cout<<"The matrix C is"<<endl;
     for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < 1 ; j++)
        {
            cout<<c[i][j]<<"  ";
        }
        cout<<endl;}

// Comparing the rank of A and B to determine the number of solutions 
    int rankA =0;
    int rankB = 0;
    int zeroA = 0;
    int zeroB = 0;
    for (int i = 0; i < rows; i++)
    {
    int ramu = 0;
       for (int j = 0; j < colsn; j++)
      {
        if (a[i][j] == 0)
        {
           ramu++;
        }else{break;}
        
      }
      //cout<<ramu<<endl<<endl;
     if (ramu == colsn)
     {
        zeroA++;
        //cout<<zeroA<<endl;
     }
    
    }
   rankA = rows - zeroA;
   cout<<"Rank of the augmented matrix is "<<rankA<<endl;
 for (int i = 0; i < rows; i++)
    {
    int ramu = 0;
       for (int j = 0; j < cols; j++)
      {
        if (b[i][j] == 0)
        {
           ramu++;
        }else{break;}
        
      }
      //cout<<ramu<<endl<<endl;
     if (ramu == cols)
     {
        zeroB++;
        //cout<<zeroA<<endl;
     }
    }
    rankB = rows - zeroB;
cout<<"Rank of the coeff matrix is "<<rankB<<endl;

//If unique , well , print the solution.
if (rankA == rankB && rankA < cols)
{
    cout<<"The system has infinite solutions"<<endl;
}
else if (rankA == rankB && rankA == cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (b[i][j] != 0)
            {
                 int cd = j+1;
                string cc = to_string(cd);
               string d = ("u" + cc);

               cout<<d<<" = "<<c[i][0]<<endl;
            }
            
        }
        
    }
    
    
}else{
    cout<<"The system has no solutions"<<endl;
}
    }
    return 0;
}

