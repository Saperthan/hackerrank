#include <iostream>

using namespace std;

void increment(int *x)
{
    (*x)++;
}

void increment (int x)
{
    x++;
}

int main()
{
    int number = 6;

    int *numberPtr = &number;

    cout << "Original Number: "<<number <<endl;
    increment(number);
    cout << "increment(number): "<< number <<endl;
    increment(numberPtr);
    cout<<"increment(numberPtr): "<< number <<endl;
    increment(&number);
    cout<<"increment(&number):" <<number<<endl;


}
