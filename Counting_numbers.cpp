/*
You are given a string S. Count the number of occurrences of all the digits in the string S.

Input:
First line contains string S.

Output:
For each digit starting from 0 to 9, print the count of their occurrences in the string S. So, print  lines, each line containing 2 space separated integers. First integer i and second integer count of occurrence of i. See sample output for clarification.
*/

#include <iostream>

using namespace std;

int main()
{
    string s;
    int count = 0;
    cin>>s;
   // cout<<s<<endl;
    int a = 0,b = 0,c = 0,d = 0,e = 0,f = 0,g = 0,h = 0,i= 0,j = 0, k =0;

    int s_length = s.length();

    for (int j = 0; j<=s_length;j++){

        if (s[j]=='0'){
            a++;
            }
        else if(s[j]=='1'){
            b++;
            }
        else if(s[j]=='2'){
            c++;
            }
        else if(s[j]=='3'){
            d++;
            }
         else if(s[j]=='4'){
            e++;
            }
        else if(s[j]=='5'){
            f++;
            }
        else if(s[j]=='6'){
            g++;
            }
        else if(s[j]=='7'){
            h++;
            }
        else if(s[j]=='8'){
            i++;
            }
        else if(s[j]=='9'){
            k++;
            }
    }
// Printing the number of counts of the numbers
    cout<<'0'<<" "<<a<<endl;
    cout<<'1'<<" "<<b<<endl;
    cout<<'2'<<" "<<c<<endl;
    cout<<'3'<<" "<<d<<endl;
    cout<<'4'<<" "<<e<<endl;
    cout<<'5'<<" "<<f<<endl;
    cout<<'6'<<" "<<g<<endl;
    cout<<'7'<<" "<<h<<endl;
    cout<<'8'<<" "<<i<<endl;
    cout<<'9'<<" "<<k<<endl;

return 0;
}
