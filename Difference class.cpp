#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
private:
    vector<int> elements;

public:
    int maximumDifference;
    int length;

    // Add your code here

    Difference(vector<int> a){
        this->elements = a;
        length = elements.size();
    }

    int computeDifference()
    {
        for(int i = 0;i<length;i++)
        {
            abs =
        }

    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
