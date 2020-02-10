
#include <iostream>
#include <sys/resource.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <algorithm>
#include <vector>

using namespace std;

class Answer
{
public:
    static bool exists(int ints[], int size, int k) {
        vector<int> v(ints,ints+size);
        vector<int>::iterator it;

        cout<< v[*it]<<endl;

        for (it = v.begin(); it != v.end(); it++) {
            if (k == v[*it]) {
               cout<<"1"<<endl;

                return true;
            } else {
                cout<<"0"<<endl;

                return false;
            }
        }

    }

};


int main() {
    int ints[] = {-9, 14, 37, 102};
    cout << Answer::exists(ints, 4, 102) << endl; // 1
    cout << Answer::exists(ints, 4, 36) << endl; // 0

    return 0;
}





//int integerMin(int a, int b) // returns the minimum of a and b
//{
//   return (a < b ? a : b);
//￿}


// C++ implementation below
