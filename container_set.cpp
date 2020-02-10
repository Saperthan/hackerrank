/* Author: Saperthan S
 * Date: 10.12.19
 * SETS-STL
 *
 * Sets are a part of the C++ STL. Sets are containers that store unique elements following a specific order. Here
 * are some of the frequently used member functions of sets.
 *
 * Declaration:
 * set<int>s;
 * Size:
 * int length= s.size();
 * Insert:
 * s.insert(x);
 * Erase:
 * s.erase(val);
 *
 * Finding an element:
 * set<int>::iterator itr=s.find(val)
 *
 *
 * Task:
 *
 * Query: 1.add element to set 2. delete element from set 3. find if val is present
 */


#include <iostream>
#include <set>

using namespace std;

int getData();


int main()
{
    int size = getData();
    set<int> s;
    set<int>::iterator it;


    for(int i = 0;i<size;i++)
    {
        int y = getData();
        int x = getData();


       switch(y)
       {
           case 1:
               s.insert(x);
               break;
           case 2:
               s.erase(x);
               break;
           case 3:
               it = s.find(x);
               if(it==s.end())
               {
                   cout<<"No"<<endl;
               } else
               {
                   cout << "Yes"<<endl;
               }
               break;
       }
    }
    return 0;
}

// Get data from the user;
int getData(){
    int number;

    cin>>number;

    return number;
}
