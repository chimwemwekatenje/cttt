#include <iostream>
#include <string>
using namespace std;

int main(){
   int* integerVar=new int;
   string* stringVar=new string;
    
    cout<<"enter integer value:"<<endl;
    cin>>*integerVar;

    cout<<"enter string value:"<<endl;
    cin.ignore();
    getline(cin,*stringVar);

    cout<<"dynamically allocated integer:"<<*integerVar<<endl;
    cout<<"dynamically allocated string:"<<*stringVar<<endl;

    delete integerVar;
    delete stringVar;
    return 0;
}