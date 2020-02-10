/* iterating through an array creating elements based on the specified size*/

#include <iostream>

using namespace std;

int main()
{
    int size,element,i;

    // Number of elements for array:
    cout<<"Input number is: ";
    cin>>size;

    // Declaring array dimension:
    int array[size];

    //Inserting element based on the size of array:
    for(i= 0;i<size;i++)
    {
        //cin>>element;
        cout<<"Array element: "<<i<<endl;
        cin>>element;
        array[i]= element;

    }

    cout<<"Reversed: "<<endl;
    // Printing all values to the display:
    for(i = size-1;i>=0;i--)
    {

        cout<<array[i]<<endl;
    }

    return 0;
}
