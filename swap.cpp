#include <iostream>
#include<utility>

using namespace std;


int main()
{
    string a;
    string b;
    //string temp;

    cin>>a>>b;

    int length_a = a.length();
    int length_b = b.length();

    cout<<length_a<<" "<<length_b<<endl;
    cout<<a+b<<endl;

    swap(a[0],b[0]);
    cout<<a<<" "<<b<<endl;


    return 0;
