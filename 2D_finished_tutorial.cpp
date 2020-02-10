/*
 Given a 2D array A, your task is to convert all rows to columns and columns to rows.

 Input:
 First line contains 2 space separated integers, N - total rows, M - total columns.
 Each of the next N lines will contain M space separated integers.

 Output:
 Print M lines each containing N space separated integers.

 Author: Saperthan Sivasuthan
 */

#include <iostream>

using namespace std;

int main(){
    int column,row;
    int i,j;

    // Input from user:
    cout<<"Type in number of column for the array dimension: ";
    cin>>row;
    cout<<" ";
    cin>>column;

 // Array for storing in 2 dimensional:
   int array[row][column];

   // Inserting elements into array:
    for(i = 0; i<row;i++){
        for(j = 0; j<column;j++)
        {
           /* cout<<"Element at x["<<i<<"]"<<"["<<j<<"]"<<endl;*/
            cin>>array[i][j];
        }
    }

    // Displaying the entered values:
    for(i= 0;i<row;i++)
    {
        for (int j = 0; j<column; j++) {
            cout<<"Element at x["<<i<<"]"<<"["<<j<<"]"<<"="<<array[i][j]<<endl;
            if(j==column-1)
                cout<<endl<<endl;
        }

    }

    // Transposing the array
   for(i = 0; i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            cout<<" "<<array[j][i];
            if(j==row-1)
                cout<<endl<<endl;
        }
    }

    return 0;



}
