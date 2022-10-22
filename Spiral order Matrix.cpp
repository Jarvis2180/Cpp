// WAP To Print Spiral Order Matrix Traversal For Given Two Dimensional Array.
// -------- >
//   ---->  -
// -        -
// -        -
// <--------\/


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   int n,m;
   cout<<"Enter Row & Collumn For Your Matrix:-"<<endl;
   cin>>n>>m;

   int Arr[n][m];
   cout<< "Enter Your Integer Elements:"<<endl;
   for (int i=0; i<n; i++)
    {  for (int j=0; j<m; j++)
       {
         cin>>Arr[i][j];
       }
    }
   int row_start=0,row_end=n-1;
   int column_start=0,column_end=m-1;

   while (row_start <= row_end && column_start <= column_end)
   {
        for(int row=column_start; row<= column_end; row++)
        {
            cout<< Arr[row_start][row] <<" ";
        } 
        row_start++;
        for(int col=row_start; col<= row_end; col++)
        {
            cout<< Arr[col][column_end] <<" ";
        } 
        column_end--;
        for(int row=column_end; row>= column_start; row--)
        {
            cout<< Arr[row_end][row] <<" ";
        } 
        row_end--;
        for(int col=row_end; col>= row_start; col--)
        {
            cout<< Arr[col][column_start] <<" ";
        } 
        column_start++;
   }
   return 0;
}