#include <iostream>

using namespace std;

int getValueFromUser();

int main(){

    int x = {getValueFromUser()};
    int y = {getValueFromUser()};

    cout<<x<<"+"<<y<<"="<<x+y<<'\n';

    return 0;

}

int getValueFromUser(){
    cout<<"Enter an integer: "<<endl;
    int input{};
    cin>>input;

    return input;
}
