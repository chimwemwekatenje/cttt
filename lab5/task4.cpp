#include <iostream>
using namespace std;
int main()
{
    int value;
    cout<<"Enter an integer value between 5 and 10:"<<endl;
    cin>>value;
    while (value>=5&&value<=10)
    {
        cout<<"your input value"<<value<<"has been accepted"<<endl;
        return 0;
    }
    if(value<5||value>10){
        cout<<"sorry,you entered an invalid number,please try again"<<endl;

    }
    return 0;
}