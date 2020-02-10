#include <iostream>

using namespace std;

class Base
{
public:
    Base () {
        cout << "Making the base!"<<endl;
    }
    virtual ~Base() {cout << "Destroying the Base!"<<endl;}
};

class Derived: public Base
{
public: Derived(){cout << "Adding stuff to the base!"<<endl;}
    virtual ~Derived(){cout << "Destroying the derived class!" <<endl;}

};
int main()
{
    cout << "Starting building ..." << endl;
    Base *base = new Derived();
    cout << "Our Base is Under attack!"<<endl;
    delete base;
    cout << "All bases destroyed!" <<endl;
    return 0;
}
