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
    static bool exists(int ints[], int size, int k)

    {
        vector<int> vec(ints,ints+size);
        sort()
        vector<int>::iterator lower_bound,upper_bound;


        if(binary_search(vec.begin(),vec.end(),k))
                  return true;
        else
             return false;


    }
};

int main() {

    int ints[] = {-9, 14, 37, 102};
    cout << Answer::exists(ints, 4, 102) << endl; // 1
    cout << Answer::exists(ints, 4, 36) << endl; // 0

}
