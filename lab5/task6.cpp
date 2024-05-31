#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream inputfile("textfile.txt");
    if (inputfile.is_open())
    {
        inputfile<<"This is the Advanced Computer Programming Module.\n";
        inputfile.close();
    }
    else
    {
        cout<<"unable to open file"<<endl;
    }
    return 0;
}

