#include <iostream>

using namespace std;

int main(){
    int arr[2][5] = {{4,1,3,3,2},{1,2,3,4,5}};

    for (int i= 0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}
