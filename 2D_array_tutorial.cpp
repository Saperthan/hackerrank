#include <iostream>

using namespace std;

int main(){
    int column,row;
    int element_column,element_row;
    int i= 0,j = 0;

    // Input from user:
    /*cout<<"Type in number of column for the array dimension: ";
    cin>>column;
    cout<<"Type in number of row for the array dimension: ";
    cin>>row;*/

    cin>>column>>row;

    int array[column][row];

    // Inserting elements:
    for(int i = 0; i<column;i++){
        for(int j = 0; j<row;j++)
        {
            cin>>element_row;
            array[i][j]=element_row;
        }
            cin>>element_column;
            array[i][j]=element_column;
    }

    cout<<array[1][1];
    //Printing out values:

 /*   for(i = 0; i<column;i++)
        {
        for(j=0;j<row;i++)
        {
            cout<<array[i][j];
        }
    }
    */

    return 0;



}
