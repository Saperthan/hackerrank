#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    int convert;
    int arr[n];

    while(n>0){
        //cout<<"Start"<<endl;
        if(n%2!=0)
        {
            //arr[n]=n;
            cout<<"1";
            n/=2;
        }else{
            //arr[n]=n;
            cout<<"0";
            n/=2;
        }

    }

    return 0;
}
