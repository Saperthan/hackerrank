#include <iostream>

using namespace std;

int main(){
    char grade;

    cout<<"Type in your grade:"<<endl;
    cin>>grade;


    switch (grade) {
        case 'A':
            cout << "Excellent!"<<endl;
            break;

        case 'B':
        cout << "Distinction!"<<endl;
        break;

        case 'C':
        cout << "Credit!"<<endl;
        break;

        case 'D':
        cout << "Pass!"<<endl;
        break;

        default:
            cout<< "Invalid"<<endl;
    }
    cout <<"Your grade is "<<grade<<endl;
}
