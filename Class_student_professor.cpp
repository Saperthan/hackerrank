#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Person{
public:
  virtual  void getdata(){
        cin>>this->name>>this->age;
    }

  virtual void putdata(){
        cout<<this->name<<" "<<this->age;
    }
protected:
    int age;
    string name;

};

class Professor: public Person{

public:
    static int id;

    Professor(){
        this->cur_id = ++id;
    }
    void getdata(){
        cin>>this->name>>this->age>>this->publications;
    }

    void putdata(){
        cout<<this->name<<" "<<this->age<<" "<<this->publications<<" "<<this->cur_id<<endl;
    }

private:
    int publications,cur_id;

};
int Professor::id = 0;

class Student: public Person{

private:
    int marks[6];
    static int id;
    int cur_id;

public:

    Student(){
        this->cur_id = ++id;
    }

    void getdata(){
        cin>>this->name>>this->age;

        for(int i = 0;i<6;i++)
        {
           cin>>marks[i];
        }
    }


    void putdata(){

        int marksum = 0;

        for (int i = 0; i<6;i++)
        {
            marksum+= marks[i];
        }
        cout<<this->name<<" "<<this->age<<" "<<marksum<<" "<<this->cur_id<<endl;
    }


};

// Initialise static member of class box
int Student::id = 0;


int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
