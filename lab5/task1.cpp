#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int daysUntilExpiration = rand()%12;
    if (daysUntilExpiration==0){
        cout<<"your subscription has expired"<<endl;
    }
    else if (daysUntilExpiration=1){
        cout<<"Your subscription expires within a day"<<endl;
        cout<<"Renew now and save 20%!"<<endl;
    }
    else if (daysUntilExpiration<=5){
        cout<<"Your subscription expires in" <<daysUntilExpiration<<endl;
        cout<<"Renew now and save 10%!"<<endl;
    }
    else if (daysUntilExpiration<=10){
        cout<<"Your subscription will expire soon.Renew now!"<<endl;
    }
    else {
        cout<<"you have an active subscription"<<endl;
    }
}