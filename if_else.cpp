#include <iostream>

using namespace std;
int main()
{
    int a;
    cout<<"Enter your age: ";
    cin >>a;
    if(a>=18)
    {
        cout<<"you are eligible to vote ";
    }
    else
    {
        cout<<"your are not eligible to vote";
    }
    return 0;
}