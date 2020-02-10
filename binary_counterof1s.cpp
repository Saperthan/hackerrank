#include <iostream>
#include <cmath>


using namespace std;

int solution(int A, int B){
    int multiples,counter = 0;

    multiples = abs(A*B);

    //cout<<"Size of unsigned int"<< sizeof(unsigned int)<<endl;


    while (multiples != 0) {
        if (multiples % 2 == 0) {
            cout << "0" << endl;
            multiples /= 2;
        } else {
           cout << "1" << endl;
            multiples /= 2;
            counter++;
        }
    }


      cout<<counter<<endl;


    return counter;

}






int main()
{
    int num1,num2;
    cin>>num1>>num2;
    solution(num1,num2);

    return 0;

}
