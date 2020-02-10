#include <iostream>

using namespace std;


int main()
{
    int size,element;

    cout<<"Type in the size of array: "<<endl;
    cin>>size;

    int array_a[size];
    int array_b[size];
    int sum[size];

    // Creating elements for array A:
    for(int i = 0; i<size;i++)
    {
        cin>>element;
        array_a[i]=element;

    }

    // Creating elements for array B:
    for(int i = 0; i<size;i++)
       {
           cin>>element;
           array_b[i]=element;
       }

    //

    for(int i = 0; i<size;i++)
       {
           sum[i] = array_a[i]+array_b[i];
       }

    for(int i = 0; i<size;i++)
         {
             cout<<" "<<sum[i];
         }


    return 0;
}
