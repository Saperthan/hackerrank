#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> v;

    int size{};
    int element;
    cin>>size;
// Reading input from user:
    for(int i= 0;i<size;i++)
    {
        cin>>element;
        v.push_back(element);
    }
// First query: first element to be removed from the vector
    int first_query;
    cin>>first_query;
    v.erase(v.begin()+(first_query-1));
// Second query: Range from a to b to be removed from the vector
    int second_query_a,second_query_b;
    cin>>second_query_a>>second_query_b;
    v.erase(v.begin()+(second_query_a-1),v.begin()+(second_query_b-1));
// Printing out the vector while the size isn't zero:
   int i = 0;
   cout<<v.size()<<endl;
   while(v.size()!=i)
   {
       cout<<v[i++]<<" ";
   }
    return 0;
}
