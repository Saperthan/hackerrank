/*
 * Vector sort easy
 *
 * Author: Saperthan Sivasuthan
 */
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;

/*
    * Declaration: vector<int>v; (creates an empty vector of integers)
    * Size int size = v.size()
    * v.push_back(); Adding element
    * v.popback(); reducing the size of vector
    * sort(v.begin(),v.end());
 */


int main() {

    // Creating vector:
    vector <int> v;

    // Getting size from the user:
    int size{};
    cin>>size;

    //adding elements
    int element{};

    for(int i=0;i<size;i++)
    {
        cin>>element;
        v.push_back(element);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<" ";

    }

    return 0;
}
