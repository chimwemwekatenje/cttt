#include <iostream>
#include <fstream>

using namespace std;
int main() {
    //create a file
   ofstream myfile;
   myfile.open("simplefile.txt",ios::out | ios::app);

   if(!myfile.is_open())
   cout<<"the file failed to open !!" <<endl;
   
   //write to the file
   myfile << "write to the file...!\n";

   //close file
   myfile.close();
    return 0;
}