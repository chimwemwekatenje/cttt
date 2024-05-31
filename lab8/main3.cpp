#include "Person.h"
#include <iostream>

int main()
{
    Person Jane = Person("Jane",60.0f);
    Person John = Person("John",75.0f);

float totalWeight = Jane + John;
cout<<"TotalWeight"<<totalWeight<<endl;
return 0;
}